/*
Modulo de defincion de class 'Clase' y su respectivo DataType

Se define ademas el enumerado Turno aca ya que es el unico que la utiliza (los hijos de la class 'Clase'
                                                                            hacen include de este archivo)

*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_CLASE_H
#define _CLASS_CLASE_H

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-std::string-header
#include <iostream>

#include "inscripcion.h"
#include "turno.h"
#include "DtClase.h"


/*
defincion de la class clase
le puse todas las cosas que estaban en el diagrama, no hay que llamar al datatype
*/
class Clase{
  private:
    int id;
    int anotados;
    std::string nombre;
    Turno turno;
    Inscripcion* inscripciones[50];
  public:
    Clase(int, std::string, Turno, Inscripcion*);
    virtual int cupo() = 0; //se hace asi para que sea abstracta?
    int getId();
    int getAnotados();
    std::string getNombre();
    Turno getTurno();
    Inscripcion* getInscripciones();
    DtClase getData();
    void setId(int);
    void setNombre(std::string);
    void setTurno(Turno);
    void agregarInscripcion(Inscripcion);
    virtual ~Clase();
};


#endif
