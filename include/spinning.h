/*
Modulo de defincion de class 'Spinning'
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
    Spinning(int = 0, int, std::string, Turno, Inscripcion**, int = 1); //id, nombre, turno, enRambla
    Spinning(int = 0, std::string = "No se introdujo nombre", Turno = Manana, int = 1);    
    int getcantBicicletas();
    void setcantBicicletas(int);
    virtual DtSpining getData();
    ~Spinning();
    virtual int cupo();
};


#endif;
