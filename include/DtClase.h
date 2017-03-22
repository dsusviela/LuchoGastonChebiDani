/*
Modulo de defincion de datatype 'DtClase'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_DTCLASE_H
#define _CLASS_DTCLASE_H

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "inscripcion.h"
#include "turno.h"

using namespace std;


class DtClase{
  private:
    int id;
    int anotados;
    string nombre;
    Turno turno;
    Inscripcion* inscriptos;
  public:
    DtClase(int, string, Turno, Inscripcion*);
    int getId();
    int getAnotados;
    string getNombre();
    Turno getTurno();
    void setId(int);
    void setNombre(string);
    void setTurno(Turno);
    virtual ~DtClase();
    virtual void abstractfn() = 0;
};

#endif
