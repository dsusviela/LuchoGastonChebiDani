/*
Modulo de implementacion de class 'Clase'
*/


#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "../include/clase.h"
#include "../include/inscripcion.h"

/* Getters */
int Clase::getId(){
  return this->id;
}

int Clase::getAnotados(){
  return this->anotados;
}

std::string Clase::getNombre(){
  return this->nombre;
}

Turno Clase::getTurno(){
  return this->turno;
}

Inscripcion* Clase::getInscripciones(){
  Inscripcion* inscrip[50];
  for(int j = 0; j < 50; j++) {
    this->inscripciones[j] = inscrip[j];
  }
  return inscrip;
}

DtClase Clase::getData(){
  DtClase data = DtClase(id, anotados, nombre, turno, inscripciones);
}

/* Setters*/
void Clase::setId(int x){
  this->id = x;
}

void Clase::setNombre(std::string s){
  this->nombre = s;
}

void Clase::setTurno(Turno t){
  this->turno = t;
}

/* Funcionalidad */
void Clase::agregarInscripcion(Inscripcion inscrip) {
  this->inscripciones[this->anotados] = inscrip;
  this->anotados++;
}

/* Destructor */
Clase::~Clase(){};
