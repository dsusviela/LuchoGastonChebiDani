/*
Modulo de implementacion de class 'Spinning'
*/
#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "inscripcion.h"
#include "clase.h"
#include "spinning.h"

Spinning::Spinning(int id,string s,Turno t,Inscripcion *i,int cant){
	this->id = id;
	this->nombre = s;
	this->turno = t;
	//this->inscriptos = i;
	this->cantBicicletas = cant;
}

int Spinning::getcantBicicletas(){
	return this->cantBicicletas
}

void Spinning::setcantBicicletas(int cant){
	this->cantBicicletas = cant
}

int Spinning :: cupo(){
//ALGO
}

DtSpinning::DtSpinning(int id,string s,Turno t,Inscripcion *i,int cant){
	this->id = id;
	this->nombre = s;
	this->turno = t;
	//this->inscriptos = i;
	this->cantBicicletas = cant;
}

int DtSpinning::getcantBicicletas(){
	return this->cantBicicletas
}

void DtSpinning::setcantBicicletas(int cant){
	this->cantBicicletas = cant
}

int DtSpinning::cupo(){
//ALGO
}