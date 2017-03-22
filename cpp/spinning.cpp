/*
Modulo de implementacion de class 'Spinning'
*/
#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "../include/clase.h"
#include "../include/inscripcion.h"
#include "../include/spinning.h"

Spinning::Spinning(int i, int a, string s, Turno t, int cant){
	this->id = i;
	this->anotados = a;
	this->nombre = s;
	this->turno = t;
	this->cantBicicletas = cant;
}

int Spinning::getcantBicicletas(){
	return this->cantBicicletas;
}

void Spinning::setcantBicicletas(int cant){
	this->cantBicicletas = cant;
}

int Spinning :: cupo(){
  return cantBicicletas-anotados;
}
