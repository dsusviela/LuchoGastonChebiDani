/*
 * Modulo de implementacion de datatype 'DtEntrenamiento'
 */

#include <string>
#include <iostream>

#include "../include/DtClase.h"
#include "../include/DtEntrenamiento.h"
#include "../include/inscripcion.h"

/*Constructora*/
DtEntrenamiento::DtEntrenamiento(int x, std::string s, Turno t, bool b) :
    DtClase(x, s, t) {
  this->enRambla = b;
}
/*Getters*/
bool DtEntrenamiento::getenRambla() {
  return this->enRambla;
}
/*Setters*/
void DtEntrenamiento::setenRambla(bool b) {
  this->enRambla = b;
}
/*Funcionalidad*/
int DtEntrenamiento::cupo() {
  if (enRambla)
    return 20 - this->getAnotados();
  else
    return 10 - this->getAnotados();
}

/*Sobrecarga operador*/
std::ostream& operator<<(std::ostream& o, DtEntrenamiento &dt) {
  o << "ID Clase: " << dt.getId() << "\n.";
  o << "Nombre: " << dt.getNombre() << "\n.";
  switch (dt.getTurno()) {
    case Manana:{
      o << "Manana. \n";
      break;
    }
    case Tarde:{
      o << "Tarde. \n";
      break;
    }
    case Noche:{
      o << "Noche. \n";
      break;
    }
  }
  if (dt.getenRambla())
    o << "En rambla: Si" << "\n.";
  else
    o << "En rambla: No" << "\n.";
  return o;
}

DtEntrenamiento::~DtEntrenamiento(){}
