/*
 * Modulo de implementacion de datatype 'DtSocio'
 */

#include <iostream>
#include <string>

#include "../include/DtSocio.h"

/*Constructor por defecto*/
DtSocio::DtSocio(){
  this->CI = 0;
  this->nombre = "nombre";
}

/*Constructor por parametro*/
DtSocio::DtSocio(int cedula, string name){
  this->CI = cedula;
  this->nombre = name;
}


 /*Getters*/
int DtSocio::getCI(){
  return this->CI;
}

string DtSocio::getNombre(){
  return this->nombre;
}

/*Setters*/
void DtSocio::setCI(int cedula){
  this->CI = cedula;
}

void DtSocio::setNombre(string name){
  this->nombre = name;
}

