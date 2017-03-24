/*
 Modulo de defincion de datatype 'DtClase'
 */

#ifndef _CLASS_DTCLASE_H
#define _CLASS_DTCLASE_H

#include <string>
#include <iostream>

#include "inscripcion.h"
#include "turno.h"

typedef Inscripcion *InscripcionPtr;
typedef DtSocio *DtSocioPtr;

class DtClase {
private:
  int id;
  int anotados;
  std::string nombre;
  Turno turno;
  Inscripcion **inscripciones;
public:
  DtClase(int = 1, std::string = "nombre no inicializado", Turno = Manana);
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
