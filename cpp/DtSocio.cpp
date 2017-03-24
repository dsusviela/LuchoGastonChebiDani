/*
 * Modulo de implementacion de datatype 'DtSocio'
 */

#include <iostream>
#include <string>

#include "../include/DtSocio.h"



/*Constructor*/
DtSocio::DtSocio(int cedula, std::string name){
  this->CI = cedula;
  this->nombre = name;
}


/*Getters*/
int DtSocio::getCI(){
  return this->CI;
}

std::string DtSocio::getNombre(){
  return this->nombre;
}

/*Setters*/
void DtSocio::setCI(int cedula){
  this->CI = cedula;
}

void DtSocio::setNombre(std::string name){
  this->nombre = name;
}

