/*
Modulo de implementacion de class 'Entrenamiento'
*/
/*
Modulo de implementacion de class 'Entrenamiento'
*/


#include <iostream>
#include "../include/entrenamiento.h"

DtEntrenamiento::DtEntrenamiento(){
    enRambla = false;
}

DtEntrenamiento::DtEntrenamiento(DtClase info_clase, bool rambla){
    clase = info_clase;
    enRambla = rambla;
}

bool DtEntrenamiento::getenRambla(){
    return enRambla;
}

void DtEntrenamiento::setenRambla(bool rambla){
    enRambla = rambla;
}

//al pedo hacer el destructor

Entrenamiento::Entrenamiento(){
    entrenamiento = DtEntrenamiento();
}

Entrenamiento::Entrenamiento(DtEntrenamiento info_entrenamiento){
    entrenamiento = info_entrenamiento;
}

DtEntrenamiento Entrenamiento::getEntrenamiento(){
    return entrenamiento;
}

void Entrenamiento::setEntrenamiento(DtEntrenamiento info_entrenamiento){
    entrenamiento = info_entrenamiento;
}

int Entrenamiento::cupo(){
    int res, i;
    i = res = 0;
    while(i<=50){
        if (getInscripcion(getClase(entrenamiento))[i] != NULL){ res++ }
        i++;
    }
        
    return res;
}

//no se precisa el destructor
