/*
Modulo de implementacion de class 'Clase'
*/

#include <string> 
#include <iostream>

#include "../include/clase.h"

/*
 implementacion de las operaciones de clase
 */

Clase::Clase(){}

DtClase Clase::getClase(){
    return clase;
}

void Clase::setClase(DtClase clase_ains){
    clase = clase_ains;
}

//Destructor es el por defecto, nada que hacer

/*
 implementacion de las operaciones de DtClase
*/

DtClase::DtClase(){
    id = 0;
    nombre = "nombre"
    turno = Manana;
    inscriptos = new Inscripcion *[50];
}

DtClase::DtClase(int cedula, string name, Turno horario, Inscripcion** array_inscriptos){
    id = cedula;
    nombre = name;
    turno = horario;
    inscriptos = array_inscriptos;
}

int DtClase::getId(){
    return id;
}

string DtClase::getNombre(){
    return nombre;
}

Turno DtClase::getTurno(){
    return turno
}

void DtClase::setId(int cedula){
    id = cedula;
}

void DtClase::setNombre(string name){
    nombre = name;
}
void DtClase::setTurno(Turno horario){
    turno = horario;
}

DtClase::~DtClase{
    delete[] inscriptos;
}

