/*
 Modulo de defincion de class 'Clase' y su respectivo DataType

 Se define ademas el enumerado Turno aca ya que es el unico que la utiliza (los hijos de la class 'Clase'
 hacen include de este archivo)

 */

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_CLASE_H
#define _CLASS_CLASE_H

#include <string>
#include <iostream>

#include "inscripcion.h"
#include "turno.h"
#include "DtClase.h"

class Clase {
private:
  int id;
  int anotados;
  std::string nombre;
  Turno turno;
  Inscripcion **inscripciones;
public:
  Clase(int, int, std::string, Turno, Inscripcion **);
  Clase(int = 1, std::string = "No se ingreso nombre", Turno = Manana);
  virtual int cupo() = 0;
  int getId();
  int getAnotados();
  std::string getNombre();
  Turno getTurno();
  Inscripcion **getInscripciones();
  void setId(int);
  void setNombre(std::string);
  void setTurno(Turno);
  void agregarInscripcion(Inscripcion *);
  void borrarInscripcion(int pos);
  virtual ~Clase();
};

#endif
