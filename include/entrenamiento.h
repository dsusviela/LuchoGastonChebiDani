/*
Modulo de defincion de class 'Entrenamiento'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_ENTRENAMIENTO_H
#define _CLASS_ENTRENAMIENTO_H

#include <iostream>

class Entrenamiento{
  private:
    bool enRambla;
  public:
    DtClase(int, string, Turno);
    int getId();
    string getNombre();
    Turno getTurno();
};

#endif
