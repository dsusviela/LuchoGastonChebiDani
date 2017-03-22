/*
Modulo de implementacion de DataType 'Fecha'
*/
#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "../include/fecha.h/"


Fecha::Fecha(){
	this->dia = 1;
	this->mes = 1;
	this->anio = 1900;
}

Fecha::Fecha(int dia,int mes,int anio){
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

int Fecha::getDia(){
	return this->dia
}

int Fecha::getMes(){
	return this->mes
}

int Fecha::getAnio(){
	return this->anio
}

void Fecha::setDia(int d){
	this->dia = d
}

void Fecha::setMes(int m){
	this->mes = m
}

void Fecha::setAnio(int a){
	this->anio = a
}
