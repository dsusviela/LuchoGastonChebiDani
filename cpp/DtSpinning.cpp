/*
 * Modulo de implementacion de datatype 'DtSpinning'
 */

#include <string>
#include <iostream>

#include "../include/clase.h"
#include "../include/DtClase.h"
#include "../include/inscripcion.h"
#include "../include/DtSpinning.h"

/* Constructores */
DtSpinning::DtSpinning(int x, int a, std::string s, Turno t, Inscripcion **i,
    int c) :
    Clase(x, a, s, t, i) {
  this->cantBicicletas = c;
}

DtSpinning::DtSpinning(int x, std::string s, Turno t, int c) :
    DtClase(x, s, t) {
  this->cantBicicletas = c;
}

/* Getters */
int DtSpinning::getcantBicicletas() {
  return this->cantBicicletas;
}

/* Setters */
void DtSpinning::setcantBicicletas(int cant) {
  this->cantBicicletas = cant;
}

/* Funcionalidad */
std::ostream& DtSpinning::operator<<(std::ostream& o, const DtSpinning& dt) {
  o << "ID Clase: " << this->getId() << std::endl;
  o << "Nombre: " << this->nombre << std::endl;
  o << "Turno: " << this->turno << std::endl;
  o << "Cantidad de bicicletas: " << this->cantBicicletas << std::endl;
  return o;
}
