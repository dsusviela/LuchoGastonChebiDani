/*
 * Modulo de implementacion de datatype 'DtEntrenamiento'
 */

#include <string>
#include <iostream>

#include "../include/DtClase.h"
#include "../include/DtEntrenamiento.h"
#include "../include/inscripcion.h"

/*DtEntrenamiento::DtEntrenamiento(int x, int a, std::string s, Turno t,
    Inscripcion **i, bool b) :
    DtClase(x, a, s, t, i) {
  this->enRambla = b;
}*/

DtEntrenamiento::DtEntrenamiento(int x, std::string s, Turno t, bool b) :
    DtClase(x, s, t) {
  this->enRambla = b;
}

bool DtEntrenamiento::getenRambla() {
  return this->enRambla;
}

void DtEntrenamiento::setenRambla(bool b) {
  this->enRambla = b;
}

int DtEntrenamiento::cupo() {
  if (enRambla)
    return 20 - this->getAnotados();
  else
    return 10 - this->getAnotados();
}
std::ostream& operator<<(std::ostream& o, DtEntrenamiento* dt) {
  o << "ID Clase: " << dt->getId() << "\n.";
  o << "Nombre: " << dt->getNombre() << "\n.";
  o << "Turno: " << dt->getTurno() << "\n.";
  if (dt->getenRambla())
    o << "En rambla: Si" << "\n.";
  else
    o << "En rambla: No" << "\n.";
  return o;
}

DtEntrenamiento::~DtEntrenamiento(){}
