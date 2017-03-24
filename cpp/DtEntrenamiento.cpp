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

