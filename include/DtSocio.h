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
    DtSocio(int = 1, std::string = "No se ingreso nombre");
    std::string getNombre();
    void setCI(int);
    void setNombre(std::string);
};


#endif /* INCLUDE_DTSOCIO_H_ */
