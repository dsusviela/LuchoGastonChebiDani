/*
Modulo de implementacion de class 'Entrenamiento'
*/
/*
Modulo de implementacion de class 'Entrenamiento'
*/


#include <iostream>
#include "../include/entrenamiento.h"

DtEntrenamiento::DtEntrenamiento(bool r){
    clase = DtClase();
    enRambla = r;
}

DtEntrenamiento::DtEntrenamiento(int i, int a, string n, Turno t, Inscripcion** inscrip, bool r){
    id = i;
    anotados = a;
    nombre = n
    turno = t;
    incripcion = inscrip;
    enRambla = r;
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
    if (enRambla) return 20-anotados;
    else return 10-anotados;
}

//no se precisa el destructor
