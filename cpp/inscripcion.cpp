/*
Modulo de implementacion de class 'Inscripcion'
*/
#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "inscripcion.h"
#include "../include/socio.h"
#include "../include/fecha.h"

Inscripcion :: Inscripcion(Fecha f, socio *obj_socio){
	this->fecha = f;
        this->socio = obj_socio;
}

Fecha Inscripcion :: getFecha(){
	return this->fecha;
}

DtSocio Inscripcion::getSocio(){
        return DtSocio(this->socio);
}

void Inscripcion :: setFecha(Fecha f){
	this->fecha = f;
}
