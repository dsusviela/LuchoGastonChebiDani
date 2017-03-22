/*
 * DtClase.cpp
 *
 *  Created on: Mar 22, 2017
 *      Author: Chebi
 */

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>
#include <cstddef>

#include "../include/DtClase.h"
#include "../include/inscripcion.h"

DtClase::DtClase(int i, int a, std::string n, Turno t){
  this->id = i;
  this->anotados = a;
  this->nombre = n;
  this->turno = t;

  for(int j = 0; j < 50; j++){
    this->incripciones[j] = NULL;
  }
}

DtClase::DtClase(int i, int a, std::string n, Turno t, Inscripcion* inscrip){
  this->id = i;
  this->anotados = a;
  this->nombre = n;
  this->turno = t;

  for(int j = 0; j < 50; j++) {         //copia el arreglo
    this->incripciones[j] = inscrip[j];
  }
}

int DtClase::getId(){
    return this->id;
}

int DtClase::getAnotados(){
  return this->anotados;
}

std::string DtClase::getNombre(){
    return this->nombre;
}

Turno DtClase::getTurno(){
    return this->turno;
}

Inscripcion* getInscripciones(){
  //no se como implementarla
}

void DtClase::setId(int x){
    this->id = x;
}

void DtClase::setNombre(std::string s){
    this->nombre = s;
}

void DtClase::setTurno(Turno t){
    this->turno = t;
}

DtClase::~DtClase(){};
