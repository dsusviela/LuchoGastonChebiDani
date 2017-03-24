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


class DtClase{
  private:
    int id;
    int anotados;
    std::string nombre;
    Turno turno;
    Inscripcion **inscripciones;
  public:
    DtClase(int = 1, int = 0, std::string = "nombre no inicializado", Turno = Manana);
    DtClase(int, int, std::string, Turno, Inscripcion**);
    int getId();
    int getAnotados();
    std::string getNombre();
    Turno getTurno();
    Inscripcion **getInscripciones();
    void setId(int);
    void setNombre(std::string);
    void setTurno(Turno);
    virtual std::ostream& operator<<(std::ostream& o, const DtClase& dt) = 0;
    virtual ~DtClase();
};

#endif
