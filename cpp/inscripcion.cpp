/*
 Modulo de implementacion de class 'Inscripcion'
 */

#include <string>
#include <iostream>

#include "../include/inscripcion.h"

Inscripcion::Inscripcion(Fecha f, Socio *s) {
  this->fecha = f;
  this->socio = s;
}

Fecha Inscripcion::getFecha() {
  return this->fecha;
}

DtSocio Inscripcion::getSocio() {
  return DtSocio(this->socio);
}

void Inscripcion::setFecha(Fecha f) {
  this->fecha = f;
}
