/*
Modulo de defincion de class 'Spinning' y su respectivo DataType
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_SPINNING_H
#define _CLASS_SPINNING_H

#include <iostream>
#include <string>

#include "clase.h"

class Spinning : public Clase{
  private:
    int cantBicicletas;
  public:
    Spinning(int,string,Turno,Inscripcion*,int); //id, nombre, turno, cantidad
    int getcantBicicletas();
    void setcantBicicletas(int);
    ~Spinning();
    int cupo();//se pone virtual para que quede claro que es la funcion abstracta
                       //de la class Clase, padre de esta
                       //http://stackoverflow.com/questions/4895294/c-virtual-keyword-for-functions-in-derived-classes-is-it-necessary
};

class DtSpinning : public DtClase{
  private:
    int cantBicicletas;
  public:
    DtSpinning(int,string,Turno,Inscripcion*,int); //id, nombre, turno, cantidad
    int getcantBicicletas();
    void setcantBicicletas(int);
    ~DtSpinning();
    int cupo();//se pone virtual para que quede claro que es la funcion abstracta
                         //de la class Clase, padre de esta
                         //http://stackoverflow.com/questions/4895294/c-virtual-keyword-for-functions-in-derived-classes-is-it-necessary
};

#endif
