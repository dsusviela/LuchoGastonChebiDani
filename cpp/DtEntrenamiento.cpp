/*
 * Modulo de implementacion de datatype 'DtEntrenamiento'
 */

#include <string>
#include <iostream>

#include "../include/DtClase.h"
#include "../include/DtEntrenamiento.h"
#include "../include/inscripcion.h"

DtEntrenamiento::DtEntrenamiento(int x,int a,std::string s,Turno t,Inscripcion **i,bool b) : DtClase(x,a,s,t,i){
  this->enRambla = b;
}

DtEntrenamiento::DtEntrenamiento(int x,std::string s,Turno t,bool b) : DtClase(x,s,t){
  this->enRambla = b;
}

bool DtEntrenamiento::getenRambla(){
  return this->enRambla;
}

void DtEntrenamiento::setenRambla(bool b){
  this->enRambla = b;
}

std::ostream& DtEntrenamiento::operator<<(std::ostream& o, const DtEntrenamiento& dt) {
  o << "ID Clase: " << this->getId() << std::endl;
  o << "Nombre: " << this->nombre << std::endl;
  o << "Turno: " << this->turno << std::endl;
  if (this->enRambla)
    o << "En rambla: Si" << std::endl;
  else
    o << "En rambla: No" << std::endl;
  return o;
}

