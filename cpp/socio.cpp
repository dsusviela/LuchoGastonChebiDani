/*
Modulo de implementacion de class 'Socio'
*/

#include <iostream>
#include <string>

#include "../include/socio.h"

/*Constructor por defecto*/
Socio::Socio(){
  this->CI = 0;
  this->nombre = "nombre";
}

/*Constructor por parametro*/
Socio::Socio(int cedula, string name){
  this->CI = cedula;
  this->nombre = name;
}

/*Destructora, es realmente necesario esto?

De lo que saco de las notas

"El destructor es una operación que es invocada al momento de destruir un objeto. El
código de un destructor se ejecuta inmediatamente antes de que el objeto sea eliminado
de la memoria. Este código se utiliza en general para realizar alguna limpieza de
memoria dinámica (si el objeto a destruir la utiliza)."

De aca entiendo que si no hay memoria dinamica en la class no preciso definir el destructor,
osea que su codigo esta vaico y no hay nada que hacer aca adentro*/
Socio::~Socio(){}

 /*Getters*/
int getCI::Socio(){
  return this->CI;
}

string getnombre::Socio(){
  return this->nombre;
}

/*Setters*/
void setCI::Socio(int cedula){
  this->CI = cedula;
}

void setnombre::Socio(string name){
  this->nombre = name;
}
