/*
Modulo de defincion de class 'Inscripcion', no lleva DataType asociado

Se agrega el DataType Fecha al archivo ya que es el unico modulo que lo utilza
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
    Inscripcion(Fecha,socio*);
    Fecha getFecha();
    void setFecha(Fecha);
};

#endif
