/*
Modulo de defincion de class 'Inscripcion'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_INSCRIPCION_H
#define _CLASS_INSCRIPCION_H

#include "socio.h"

using namespace std;

class Inscripcion {
  private:
    Fecha fecha;
    Socio *socio; //pseudo atributo
  public:
    Inscripcion(Fecha, socio *);
    Fecha getFecha();
    DtSocio getSocio();
    void setFecha(Fecha);
};

#endif
