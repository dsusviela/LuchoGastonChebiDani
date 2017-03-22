/*
 * DtSocio.h
 *
 *  Created on: Mar 22, 2017
 *      Author: Chebi
 */

#ifndef INCLUDE_DTSOCIO_H_
#define INCLUDE_DTSOCIO_H_

#include <string>
#include <iostream>

using namespace std;

class DtSocio {
  private:
    int CI;
    string nombre;
  public:
    DtSocio(); //no debería declararse esto acá?
    DtSocio(int, string); //CI, nombre
    int getCI();
    string getNombre();
    void setCI(int);
    void setNombre(string);
};


#endif /* INCLUDE_DTSOCIO_H_ */
