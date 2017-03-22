/*
 * Modulo de definicion de 'DtSocio'
 */

#ifndef INCLUDE_DTSOCIO_H_
#define INCLUDE_DTSOCIO_H_

#include <string>
#include <iostream>


class DtSocio {
  private:
    int CI;
    std::string nombre;
  public:
    DtSocio(); //no debería declararse esto acá?
    DtSocio(int, std::string); //CI, nombre
    int getCI();
    std::string getNombre();
    void setCI(int);
    void setNombre(std::string);
};


#endif /* INCLUDE_DTSOCIO_H_ */
