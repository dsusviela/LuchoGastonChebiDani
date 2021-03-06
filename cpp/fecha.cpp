/*
 Modulo de implementacion de DataType 'Fecha'
 */

#include <string>
#include <iostream>

#include "../include/fecha.h"

/*Constructora*/
Fecha::Fecha(int dia, int mes, int anio) {
  this->dia = dia;
  this->mes = mes;
  this->anio = anio;
}

/*Getters*/
int Fecha::getDia() {
  return this->dia;
}

int Fecha::getMes() {
  return this->mes;
}

int Fecha::getAnio() {
  return this->anio;
}
/*Setters*/
void Fecha::setDia(int d) {
  this->dia = d;
}

void Fecha::setMes(int m) {
  this->mes = m;
}

void Fecha::setAnio(int a) {
  this->anio = a;
}
