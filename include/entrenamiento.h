/*
Modulo de defincion de class 'Entrenamiento' y su respectivo DataType
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_ENTRENAMIENTO_H
#define _CLASS_ENTRENAMIENTO_H

#include <iostream>
#include "clase.h"

#include "clase.h"

class Entrenamiento : public Clase{
  private:
    DtEntrenamiento entrenamiento; //no se me ocurre otro nombre
  public:
    Entrenamiento(DtEntrenamiento);
    void setEntrenamiento(DtEntrenamiento);
    DtEntrenamiento getEntrenamiento();
    ~Entrenamiento();
}

class DtEntrenamiento : public DtClase{
  private:
    bool enRambla;
  public:
   DtEntrenamiento(int, int, string, Turno, Inscripcion**, bool = false); //id, nombre, turno, enRambla
   bool getenRambla();
   void setenRambla(bool);
   ~DtEntrenamiento();
   virtual int cupo(); //se pone virtual para que quede claro que es la funcion abstracta
                       //de la class Clase, padre de esta
                       //http://stackoverflow.com/questions/4895294/c-virtual-keyword-for-functions-in-derived-classes-is-it-necessary
};

#endif
