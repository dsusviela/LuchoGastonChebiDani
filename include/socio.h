/*
Modulo de defincion de class 'Socio'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_INSCRIPCION_H
#define _CLASS_INSCRIPCION_H

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

class Socio {
  private:
    int CI;
    stirng nombre;
  public:
    Socio(int, string); //CI, nombre
    int getCI();
    string getnombre();
    void setCI(int);
    void setnombre(string);
    ~Socio();
}

#endif
