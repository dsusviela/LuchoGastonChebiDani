/*
Modulo de defincion de DataTpe 'Fecha'
*/

//previene declarar dos veces las cosas por multiples includes de este .h
#ifndef _CLASS_FECHA_H
#define _CLASS_FECHA_H


class Fecha {
  private:
    int dia, mes, anio;
  public:
    Fecha(int = 1, int = 1, int = 1900);
    int getDia();
    int getMes();
    int getAnio();
    void setDia(int);
    void setMes(int);
    void setAnio(int);
};

#endif
