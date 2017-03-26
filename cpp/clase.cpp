/*
 Modulo de implementacion de class 'Clase'
 */

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "../include/clase.h"
#include "../include/inscripcion.h"

/*Constructor*/

Clase::Clase(int ident, int ano, std::string nome, Turno turn, Inscripcion **i) {
  this->id = ident;
  this->anotados = ano;
  this->nombre = nome;
  this->turno = turn;
  this->inscripciones = i;
}

Clase::Clase(int ident, std::string nome, Turno turn) {
  this->id = ident;
  this->anotados = 0;
  this->nombre = nome;
  this->turno = turn;
  this->inscripciones = new InscripcionPtr[50];
}

/* Getters */
int Clase::getId() {
  return this->id;
}

int Clase::getAnotados() {
  return this->anotados;
}

std::string Clase::getNombre() {
  return this->nombre;
}

Turno Clase::getTurno() {
  return this->turno;
}

Inscripcion ** Clase::getInscripciones() {
  return this->inscripciones;
}

/* Setters*/
void Clase::setId(int x) {
  this->id = x;
}

void Clase::setNombre(std::string s) {
  this->nombre = s;
}

void Clase::setTurno(Turno t) {
  this->turno = t;
}

/* Funcionalidad */
void Clase::agregarInscripcion(Inscripcion *inscrip) {
  this->inscripciones[this->anotados] = inscrip;
  this->anotados++;
}

void Clase::borrarInscripcion(int pos) {
  delete this->inscripciones[pos];
  this->inscripciones[pos] = this->inscripciones[this->anotados - 1];
  this->anotados--;
}

/* Destructor */
Clase::~Clase() {
  delete[] this->inscripciones;
}
;
