/*
 Modulo de implementacion de class 'Spinning'
 */
#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "../include/clase.h"
#include "../include/inscripcion.h"
#include "../include/spinning.h"
#include "../include/DtSpinning.h"

/*Constructores*/
Spinning::Spinning(int x, int a, std::string s, Turno t, Inscripcion **i, int c) :
    Clase(x, a, s, t, i) {
  this->cantBicicletas = c;
}

Spinning::Spinning(int x, std::string s, Turno t, int c) :
    Clase(x, s, t) {
  this->cantBicicletas = c;
}

/*Getters*/
int Spinning::getcantBicicletas() {
  return this->cantBicicletas;
}
/*Setters*/
void Spinning::setcantBicicletas(int cant) {
  this->cantBicicletas = cant;
}
/*Funcionalidad*/
int Spinning::cupo() {
  return cantBicicletas - this->getAnotados();
}
/*Destructora*/
Spinning::~Spinning(){}
