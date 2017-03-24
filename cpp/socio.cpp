/*
 Modulo de implementacion de class 'Socio'
 */

#include <iostream>
#include <string>

#include "../include/socio.h"

/*Constructor por defecto*/
Socio::Socio() {
  this->CI = 0;
  this->nombre = "nombre";
}

/*Constructor por parametro*/
Socio::Socio(int cedula, std::string name) {
  this->CI = cedula;
  this->nombre = name;
}

/*Getters*/
int Socio::getCI() {
  return this->CI;
}

std::string Socio::getNombre() {
  return this->nombre;
}

/*Setters*/
void Socio::setCI(int cedula) {
  this->CI = cedula;
}

void Socio::setNombre(std::string name) {
  this->nombre = name;
}
