/*
Modulo de defincion de class 'Entrenamiento' y su respectivo DataType
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_ENTRENAMIENTO_H
#define _CLASS_ENTRENAMIENTO_H

#include <iostream>
#include "clase.h"

#include "clase.h"

using namespace std;

class Entrenamiento : public Clase{
  private:
    bool enRambla;
  public:
    Entrenamiento(int,string,Turno,Inscripcion*,bool); //id, nombre, turno, enRambla
    bool getenRambla();
    void setenRambla(bool);
    ~Entrenamiento();
    int cupo(); //se pone virtual para que quede claro que es la funcion abstracta
                       //de la class Clase, padre de esta
                       //http://stackoverflow.com/questions/4895294/c-virtual-keyword-for-functions-in-derived-classes-is-it-necessary

                      // EN LAS DIAPOSITIVAS APARECE SIN EL VIRTUAL (Gastón)
};

class DtEntrenamiento : public DtClase{
  private:
    bool enRambla;
  public:
    DtEntrenamiento(int,string,Turno,Inscripcion*,bool); //id, nombre, turno, enRambla
    bool getenRambla();
    void setenRambla(bool);
    ~DtEntrenamiento();
    int cupo(); //se pone virtual para que quede claro que es la funcion abstracta
                       //de la class Clase, padre de esta
                       //http://stackoverflow.com/questions/4895294/c-virtual-keyword-for-functions-in-derived-classes-is-it-necessary

                      // EN LAS DIAPOSITIVAS APARECE SIN EL VIRTUAL (Gastón)
};

#endif
