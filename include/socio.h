/*
Modulo de defincion de class 'Socio'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_SOCIO_H
#define _CLASS_SOCIO_H

#include <string>
#include <iostream>

using namespace std;

class Socio {
  private:
    int CI;
    string nombre;
  public:
    Socio(); //no debería declararse esto acá?
    Socio(int, string); //CI, nombre
    int getCI();
    string getNombre();
    void setCI(int);
    void setNombre(string);
};

#endif
