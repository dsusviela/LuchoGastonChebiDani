/*
 Modulo de defincion de class 'Spinning'
 */

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_SPINNING_H
#define _CLASS_SPINNING_H

#include <iostream>
#include <string>

#include "clase.h"

class Spinning: public Clase {
private:
  int cantBicicletas;
public:
  Spinning(int, int, std::string, Turno, Inscripcion**, int = 1); //id, nombre, turno, enRambla
  Spinning(int = 1, std::string = "No se introdujo nombre", Turno = Manana,
      int = 1);
  int getcantBicicletas();
  void setcantBicicletas(int);
  ~Spinning();
  virtual int cupo();
};

#endif;
