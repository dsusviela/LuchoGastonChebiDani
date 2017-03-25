/*
 Modulo de defincion de class 'Entrenamiento'
 */

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_ENTRENAMIENTO_H
#define _CLASS_ENTRENAMIENTO_H

#include <iostream>
#include "clase.h"

#include "clase.h"

class Entrenamiento: public Clase {
private:
  bool enRambla;
public:
  Entrenamiento(int, int, std::string, Turno, Inscripcion**, bool);
  Entrenamiento(int = 1, std::string = "No se introdujo nombre", Turno = Manana, bool = false);
  bool getenRambla();
  void setenRambla(bool);
  ~Entrenamiento();
  virtual int cupo();
};

#endif
