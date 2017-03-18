/*
Modulo de defincion de class 'Inscripcion', no lleva DataType asociado

Se agrega el DataType Fecha al archivop ya que esd el unico modulo que lo utilza
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_INSCRIPCION_H
#define _CLASS_INSCRIPCION_H

#include "socio.h"

//queda igual porque no tiene dtype asociado
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
