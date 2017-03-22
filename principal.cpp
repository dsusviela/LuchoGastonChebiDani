/*
Modulo de implementacion de principal.cpp
*/

#include "include/clase.h"
#include "include/entrenamiento.h"
#include "include/fecha.h"
#include "include/inscripcion.h"
#include "include/socio.h"
#include "include/spinning.h"

#define MAX_SOCIOS 1000
#define MAX_CLASES 500

Socio* arreglo_socios[MAX_SOCIOS];
int tope_socios = 0;

Clase* arreglo_clases[MAX_CLASES];
int tope_clases = 0;

//funciones a implementar con sus axuliares
static bool existe_socio(int ci) {
  bool encontre = false;
  int i = 0;
  while(i < tope_socios && encontre = false) {
    if(arreglo_socios[i]->getCI() == ci){
      encontre = true;
    }
    i++;
  }
  return encontre;
}

void agregarSocio(int ci, string nombre){                             //1
  arreglo_socios[tope_socios] = Socio(ci, nombre);
  tope_socios++;
}

static bool existe_clase(DtClase &clase){
  bool encontre = false;
  int i = 0;
  while(i < tope_socios && encontre = false){
    if(arreglo_clases[i]->getId){
      encontre = true;
    }
    i++;
  }
  return encontre;
}

void agregarClase(DtClase& clase){                                    //2
  int id = clase.getId();
  string nombre = clase.getNombre();
  Turno turno = clase.getTurno();
  Clase *ains = new Clase(id, nombre, turno);
  arreglo_clases[tope_clases] =  ains;
}

void agregarInscripcion(String ciSocio, int idClase, Fecha fecha){    //3

}

void borrarInscripcion(string ciSocio, int idClase){                  //4

}

DtSocio **obtenerInfoSociosPorClase(id idClase, nt &cantSocios){      //5


}

DtClase obtenerClase(int idCLase){                                    //6

}

//-----------------------------------------------------------------------
//CODGIO PRINCIPAL
//-----------------------------------------------------------------------
int main(){


return 0;
}
