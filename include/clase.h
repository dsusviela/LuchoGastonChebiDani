/*
Modulo de defincion de class 'Clase' y su respectivo DataType

Se define ademas el enumerado Turno aca ya que es el unico que la utiliza (los hijos de la class 'Clase'
                                                                            hacen include de este archivo)

*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_CLASE_H
#define _CLASS_CLASE_H

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

#include "inscripcion.h"

/*
como clase es la unica class que usa turno me parece al re pedo hacerle
su propio .h
*/

enum Turno {Manana, Tarde, Noche};

/*
defincion de la class clase
Aca se llama al DataType para el contenido de la class.
La class tiene un solo parametro, su datatype, los datos se manejan ahi
*/
class Clase{
  private:
    DtClase clase; //no se me ocurre otro nombre
  public:
    Clase(DtClase);
    virtual int cupo() = 0; //lo pongo por la foto la verdad
    DtClase getClase();
    void setClase(DtClase);
    ~Clase();
};

class DtClase{
  private:
    int id;
    string nombre;
    Turno turno;
    Inscripcion** inscriptos;
  public:
    virtual int cupo() = 0;
    DtClase(int,string,Turno,Inscripcion*);
    int getId();
    string getNombre();
    Turno getTurno();
    Inscripccion **getInscripcion();
    void setId(int);
    void setNombre(string);
    void setTurno(Turno);
    void setInscripcion(Inscripcion **);
    ~DtClase();
};


#endif
