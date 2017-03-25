/*
 Modulo de defincion de class 'Socio'
 */

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_SOCIO_H
#define _CLASS_SOCIO_H

#include <string>
#include <iostream>

class Socio {
private:
  int CI;
  std::string nombre;
public:
  Socio();
  Socio(int, std::string); 
  int getCI();
  std::string getNombre();
  void setCI(int);
  void setNombre(std::string);
};

#endif
