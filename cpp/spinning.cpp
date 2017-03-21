/*
Modulo de implementacion de class 'Spinning'
*/
#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "inscripcion.h"
#include "clase.h"
#include "spinning.h"

Spinning::Spinning(DtSpinning info_spinning){
	spinning = info_spinning;
}

DtSpinning Spinning::getSpinning(){
	return this->spinning;
}


void setSpinning(DtSpinning info_spinning){
    spinning = info_spinning;
}


/*MONITOREO*/
Spinning::~Spinning(){
    
}

DtSpinning::DtSpinning(int id,int cant_anotados, string s,Turno t,Inscripcion **i,int cant){
	this->id = id;
        this->anotados = cant_anotados;
	this->nombre = s;
	this->turno = t;
	this->inscriptos = i;
	this->cantBicicletas = cant;
 
}

int DtSpinning::getcantBicicletas(){
	return this->cantBicicletas;
}

void DtSpinning::setcantBicicletas(int cant){
	this->cantBicicletas = cant;
}

int DtSpinning::cupo(){
//ALGO
}

/*MONITOREO*/
DtSpinning::~DtSpinning(){
    
}
