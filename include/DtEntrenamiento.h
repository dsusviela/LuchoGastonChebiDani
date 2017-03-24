/*
 * Moodulo de definicion de dataype 'DtEntrenamiento'
 */

#ifndef INCLUDE_DTENTRENAMIENTO_H_
#define INCLUDE_DTENTRENAMIENTO_H_

#include <iostream>
#include "clase.h"

#include "DtClase.h"

class DtEntrenamiento: public DtClase {
private:
  bool enRambla;
public:
  DtEntrenamiento(int, int, std::string, Turno, Inscripcion**, bool); //id, nombre, turno, enRambla
  DtEntrenamiento(int, std::string, Turno, bool);
  bool getenRambla();
  void setenRambla(bool);
  ~DtEntrenamiento();
  virtual int cupo();
  virtual std::ostream& operator<<(std::ostream&, const DtEntrenamiento&);
};

#endif /* INCLUDE_DTENTRENAMIENTO_H_ */
