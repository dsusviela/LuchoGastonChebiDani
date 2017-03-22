/*
Modulo de implementacion de principal.cpp
*/

#include <stdexcept>
#include <string>
#include <iostream>

#include "include/clase.h"
#include "include/entrenamiento.h"
#include "include/fecha.h"
#include "include/inscripcion.h"
#include "include/socio.h"
#include "include/spinning.h"
#include "include/DtClase.h"
#include "include/DtEntrenamiento.h"
#include "include/DtSocio.h"
#include "include/DtSpinning.h"
#include "include/turno.h"

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

void agregarSocio(int ci, string nombre){                               //1
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

void agregarClase(DtClase &clase){                                      //2
 //algo
}

void agregarInscripcion(int ciSocio, int idClase, Fecha fecha){         //3

}

void borrarInscripcion(int ciSocio, int idClase){                       //4

}

DtSocio **obtenerInfoSociosPorClase(int idClase, int &cantSocios){      //5


}

DtClase obtenerClase(int idCLase){                                      //6

}


//auxiliar para el main
static void responder_entrada_invalida(int &entrada){
  std::cout << "Lo sentimos, lo ingresado no fue una entrada valida, intente de nuevo. \n"
  std::cout << "Para registrar una clase de spinning presione 1. \n";
  std::cout << "Para registrar una clase de entrenamiento presione 2. \n";
  std::cout << "Para salir, presione 0. \n";
  std::cin >> entrada;
}

//-----------------------------------------------------------------------
//CODGIO PRINCIPAL
//-----------------------------------------------------------------------
int main(){
  bool execute = true;
  int entrada;

  std::cout << "Bienvenido al software del manejo del gimnasio del InCo-FIng.\n";
  std::cout << "No hay clases registradas, para continuar debe registrar una clase. \n";
  std::cout << "Para registrar una clase de spinning presione 1. \n";
  std::cout << "Para registrar una clase de entrenamiento presione 2. \n";
  std::cout << "Para salir, presione 0. \n";

  std::cin >> entrada;

  while (execute){
    switch (entrada) {
      case 1:{
        std::cout << "Ingresaremos una clase de spinning. \n";
        try{
          std::cout << "Ingrese el Id de la clase"
          std::cin >> identificacion_spinning;
          if (existe_clase(identificacion_spinning)){
            std::std::cin.clear(); //resetea las flags de error
            std::std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida
            throw std::invalid_argument("La clase que se desea ingresar ya existe en el sistema"); //tira la excepcion
          }
          std::cout << "Ingrese el nombre de la clase. \n"
          std::cin >> nombre_clase_spinning;
          std::cout << "Ingrese el turno en el cual se desarrolla la clase. \n"
          std::cin >> turno_clase_spinning;
          std::cout << "Ingrese la cantidad de bicicletas con las que cuenta la clase: \n";
          std::cin >> cantidad_bicicletas;
          if (cantidad_bicicletas > 50){
            std::std::cin.clear(); //resetea las flags de error
            std::std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida
            throw std::invalid_argument("No se puede ingresar un numero de bicicletas mayor a 50"); //tira la excepcion
          }

          DtClase *clase_spinning_ains = new DtSpinning(identificacion_spinning, nombre_clase_spinning
                                                        turno_clase_spinning, cantidad_bicicletas);
          agregarClase(clase_spinning_ains);

        } catch(const std::invalid_argument &ia) {responder_entrada_invalida(entrada)};
        break;
      }
      case 2:{
        std::cout << "Ingresaremos una clase de entrenamiento. \n";
        break;
      }
      case 0:{
        std::cout << "Cerrando aplicacion.\n";
        execute = false;
        break;
      }
      default:{
        responder_entrada_invalida(entrada);
      }
    } //switch
  } //while


  return 0;
}
