/*
Modulo de defincion de class 'Inscripcion'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_INSCRIPCION_H
#define _CLASS_INSCRIPCION_H

#include "socio.h"

class Inscripcion {
  private:
    Fecha fecha;
    Socio *socio; //pseduo atributo
  public:
    Inscripcion(Fecha);
    Fecha getFecha();
    void setFecha();
}

#endif
