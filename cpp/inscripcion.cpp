/*
 Modulo de implementacion de class 'Inscripcion'
 */

#include <string>
#include <iostream>

#include "../include/inscripcion.h"
/*Constructora*/
Inscripcion::Inscripcion(Fecha f, Socio *s) {
  this->fecha = f;
  this->socio = s;
}
/*Getters*/
Fecha Inscripcion::getFecha() {
  return this->fecha;
}

DtSocio Inscripcion::getSocio() {
  return DtSocio(this->socio->getCI(), this->socio->getNombre());
}
/*Setters*/
void Inscripcion::setFecha(Fecha f) {
  this->fecha = f;
}
