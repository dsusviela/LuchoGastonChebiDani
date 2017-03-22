/*
 * Modulo de implementacion de datatype 'DtEntrenamiento'
 */

#include <string>
#include <iostream>

#include "../include/DtClase.h"
#include "../include/DtEntrenamiento.h"
#include "../include/inscripcion.h"

DtEntrenamiento::DtEntrenamiento(int x, string s, Turno t, Inscripcion *i, bool b){
    this->id = x;
    this->nombre = s;
    this->turno = t;
    //this->inscriptos = i ?
    this->enRambla = b;
}

bool DtEntrenamiento::getenRambla(){
    return this->enRambla;
}

void DtEntrenamiento::setenRambla(bool b){
    this->enRambla = b;
}

