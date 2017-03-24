/*
 * Modulo de implementacion de datatype 'DtSpinning'
 */

#include <string>
#include <iostream>

#include "../include/clase.h"
#include "../include/inscripcion.h"
#include "../include/DtSpinning.h"


DtSpinning::DtSpinning(int x,int a,std::string s,Turno t,Inscripcion **i,int c) : Clase(x,a,s,t,i){
	this->cantBicicletas = c;
}

DtSpinning::DtSpinning(int x,std::string s,Turno t,int c) : DtClase(x,s,t){
	this->cantBicicletas = c;
}
int DtSpinning::getcantBicicletas(){
    return this->cantBicicletas;
}

void DtSpinning::setcantBicicletas(int cant){
    this->cantBicicletas = cant;
}

