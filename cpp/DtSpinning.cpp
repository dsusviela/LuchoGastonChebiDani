/*
 * Modulo de implementacion de datatype 'DtSpinning'
 */

#include <string>
#include <iostream>

#include "../include/clase.h"
#include "../include/inscripcion.h"
#include "../include/DtSpinning.h"


DtSpinning::DtSpinning(int id,string s,Turno t,Inscripcion *i,int cant){
    this->id = id;
    this->nombre = s;
    this->turno = t;
    //this->inscriptos = i;
    this->cantBicicletas = cant;
}

int DtSpinning::getcantBicicletas(){
    return this->cantBicicletas;
}

void DtSpinning::setcantBicicletas(int cant){
    this->cantBicicletas = cant;
}

