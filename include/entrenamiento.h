/*
Modulo de defincion de class 'Entrenamiento'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_ENTRENAMIENTO_H
#define _CLASS_ENTRENAMIENTO_H

#include <iostream>
#include "clase.h"

class Entrenamiento : public Clase{
  private:
    bool enRambla;
  public:
   Entrenamiento(int,string,Turno,Inscripcion*,bool); 
   bool getenRambla();
   void setenRambla(bool);
   ~Entrenamiento();
   int cupo();
};

#endif
