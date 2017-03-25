/*
 * Modulio de implementacion de datatype 'DtClase'
 */

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>
#include <cstddef>

#include "../include/DtClase.h"
#include "../include/inscripcion.h"

/* Constructores */
DtClase::DtClase(int i, std::string n, Turno t) {
  this->id = i;
  this->anotados = 0;
  this->nombre = n;
  this->turno = t;
  this->inscripciones = new InscripcionPtr[50];
}

DtClase::DtClase(int i, int a, std::string n, Turno t, Inscripcion **inscrip) {
  this->id = i;
  this->anotados = a;
  this->nombre = n;
  this->turno = t;
  this->inscripciones = inscrip;
}

/* Getters */
int DtClase::getId() {
  return this->id;
}

int DtClase::getAnotados() {
  return this->anotados;
}

std::string DtClase::getNombre() {
  return this->nombre;
}

Turno DtClase::getTurno() {
  return this->turno;
}

Inscripcion ** DtClase::getInscripciones() {
  return this->inscripciones;
}

/* Setters */
void DtClase::setId(int x) {
  this->id = x;
}

void DtClase::setNombre(std::string s) {
  this->nombre = s;
}

void DtClase::setTurno(Turno t) {
  this->turno = t;
}

/* Destructor */
DtClase::~DtClase() {
};
