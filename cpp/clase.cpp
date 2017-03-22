/*
Modulo de implementacion de class 'Clase'
*/


#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "../include/clase.h"
#include "../include/inscripcion.h"

int Clase::getId(){
  return this->id;
}

int Clase::getAnotados() {
  return this->anotados;
}

string Clase::getNombre(){
  return this->nombre;
}

Turno Clase::getTurno(){
  return this->turno;
}

Inscripcion* getInscripciones(){
  //no se como implementarla
}


void Clase::setId(int x){
  this->id = x;
}

void Clase::setNombre(string s){
  this->nombre = s;
}

void Clase::setTurno(Turno t){
  this->turno = t;
}

Clase::~Clase(){};
