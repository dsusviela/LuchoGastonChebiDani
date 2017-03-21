/*
Modulo de implementacion de class 'Socio'
*/

#include <iostream>
#include <string>

#include "../include/socio.h"


Socio::Socio(){
    socio = DtSocio();
}

Socio::Socio(DtSocio info_socio){
    socio = info_socio;
}

DtSocio Socio::getSocio(){
    return socio;
}

void Socio::setSocio(DtSocio info_socio){
    socio = info_socio;
}

/*Destructora = te la debo*/

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
int getCI::DtSocio(){
  return this->CI;
}

string getnombre::DtSocio(){
  return this->nombre;
}

/*Setters*/
void setCI::DtSocio(int cedula){
  this->CI = cedula;
}

void setnombre::DtSocio(string name){
  this->nombre = name;
}
