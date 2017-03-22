/*
Modulo de implementacion de class 'Clase'
*/


#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "inscripcion.h"
#include "clase.h"

int Clase::getId(){
	return this->id;
}

int Clase::getAnotados() {
        return this->anotados;
}

string Clase::getNombre(){
	return this->nombre;
}

Turno Clase::getTurno(){
	return this->turno;
}

void Clase::setId(int x){
	this->id = x;
}

void Clase::setNombre(string s){
	this->nombre = s;
}

void Clase::setTurno(Turno t){
	this->turno = t;
}

Clase::~Clase(){};

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
