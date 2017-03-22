/*
 * DtClase.cpp
 *
 *  Created on: Mar 22, 2017
 *      Author: Chebi
 */

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "../include/DtClase.h"
#include "../include/inscripcion.h"


int DtClase::getId(){
    return this->id;
}

int DtClase::getAnotados(){
  return this->anotados;
}

string DtClase::getNombre(){
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

void DtClase::setNombre(string s){
    this->nombre = s;
}

void DtClase::setTurno(Turno t){
    this->turno = t;
}

DtClase::~DtClase(){};
