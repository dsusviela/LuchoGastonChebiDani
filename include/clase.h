/*
Modulo de defincion de class 'Clase'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_CLASE_H
#define _CLASS_CLASE_H

#include <string> //http://stackoverflow.com/questions/4103169/how-do-i-include-the-string-header
#include <iostream>

/*
como clase es la unica class que usa turno me parece al re pedo hacerle
suu propio .h
*/

enum Turno {Manana, Tarde, Noche};

/*
defincion de la class clase
le puse todas las cosas que estaban en el diagrama, no hay que llamar al datatype
*/
class Clase{
  private:
    int id;
    string nombre;
    Turno turno;
    Inscripcion* inscriptos;
  public:
    Clase(int,string,Turno,Inscripcion*);
    virtual int cupo() = 0; //se hace asi para que sea abstracta?
    int getId();
    string getNombre();
    Turno getTurno();
    void setId(int);
    void setNombre(string);
    void setTurno(Turno);
    ~Clase();
};

class DtClase{
  private:
    int id;
    string nombre;
    Turno turno;
    Inscripcion* inscriptos;
  public:
    virtual int cupo() = 0; //se hace asi para que sea abstracta?
    DtClase(int,string,Turno,Inscripcion*);
    int getId();
    string getNombre();
    Turno getTurno();
    void setId(int);
    void setNombre(string);
    void setTurno(Turno);
    ~DtClase();
};


#endif
