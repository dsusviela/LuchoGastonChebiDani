/*
Modulo de defincion de DataTpe 'Fecha'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_FECHA_H
#define _CLASS_FECHA_H

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

class Fecha {
  private:
    int dia,mes,anio;
  public:
    Fecha();
    Fecha(int,int,int);
    int getDia();
    int getMes();
    int getAnio();
    void setDia(int);
    void setMes(int);
    void setAnio(int);
    ~Fecha();
}

#endif
