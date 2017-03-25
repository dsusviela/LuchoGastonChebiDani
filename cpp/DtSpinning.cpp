/*
 * Modulo de implementacion de datatype 'DtSpinning'
 */

#include <string>
#include <iostream>

#include "../include/clase.h"
#include "../include/DtClase.h"
#include "../include/inscripcion.h"
#include "../include/DtSpinning.h"

/*Constructor*/
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

int DtSpinning::cupo() {
  return cantBicicletas - this->getAnotados();
}

/* Funcionalidad */
std::ostream& operator << (std::ostream& o, DtSpinning &dt) {
  o << "ID Clase: " << dt.getId() << "\n";
  o << "Nombre: " << dt.getNombre() << "\n";
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
  o << "Cantidad de bicicletas: " << dt.getcantBicicletas() << "\n";
  return o;
}

DtSpinning::~DtSpinning(){}
