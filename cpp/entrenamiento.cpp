/*
 Modulo de implementacion de class 'Entrenamiento'
 */

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "../include/clase.h"
#include "../include/entrenamiento.h"
#include "../include/inscripcion.h"

Entrenamiento::Entrenamiento(int x, int a, std::string s, Turno t, Inscripcion **i, bool b) : Clase(x, a, s, t, i) {
  this->enRambla = b;
}

Entrenamiento::Entrenamiento(int x, std::string s, Turno t, bool b) :
    Clase(x, s, t) {
  this->enRambla = b;
}

bool Entrenamiento::getenRambla() {
  return this->enRambla;
}

void Entrenamiento::setenRambla(bool b) {
  this->enRambla = b;
}

int Entrenamiento::cupo() {
  if (enRambla)
    return 20 - this->getAnotados();
  else
    return 10 - this->getAnotados();
}
