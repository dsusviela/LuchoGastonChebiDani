/*
Modulo de implementacion de class 'Entrenamiento'
*/

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "../include/clase.h"
#include "../include/entrenamiento.h"
#include "../include/inscripcion.h"

Entrenamiento::Entrenamiento(int x,string s,Turno t,Inscripcion *i,bool b){
	this->id = x;
	this->nombre = s;
	this->turno = t;
	//this->inscriptos = i ?
	this->enRambla = b;
}

bool Entrenamiento::getenRambla(){
	return this->enRambla;
}

void Entrenamiento::setenRambla(bool b){
	this->enRambla = b;
}

int Entrenamiento :: cupo(){
	if (enRambla)
	  return 20-anotados;
	else
	  return 10-anotados;
}

