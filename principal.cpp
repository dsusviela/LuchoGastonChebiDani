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

struct nodo_clases{
  Clase *info_clase;
  bool es_entrenamiento;
};

Socio *arreglo_socios[MAX_SOCIOS];
int tope_socios = 0;

nodo_clases *arreglo_clases[MAX_CLASES];
int tope_clases = 0;

//funciones a implementar con sus axuliares
static bool existe_socio(int ci) {
  bool encontre = false;
  int i = 0;
  while(i < tope_socios && encontre == false) {
    if(arreglo_socios[i]->getCI() == ci){
      encontre = true;
    }
    i++;
  }
  return encontre;
}

void agregarSocio(int ci, std::string nombre){                               //1
  arreglo_socios[tope_socios] = Socio(ci, nombre);
  tope_socios++;
}

static bool existe_clase(DtClase &clase){
  bool encontre = false;
  int i = 0;
  while(i < tope_clases && encontre == false){
    if(arreglo_clases[i]->info_clase->getId()){
      encontre = true;
    }
    i++;
  }
  return encontre;
}

static void agregarSpinning(const DtSpinning &clase_spinning){
  arreglo_clases[tope_clases]->info_clase = *Spinning(clase_spinning.getId(),
                                                    clase_spinning.getAnotados(),
                                                    clase_spinning.getNombre(),
                                                    clase_spinning.getTurno(),
                                                    clase_spinning.getcantBicicletas());
  arreglo_clases[tope_clases].es_entrenamiento = false;
}

static void agregarEntrenamiento(const DtSpinning &clase_entrenamiento){
  arreglo_clases[tope_clases].info_clase = *Entrenamiento(clase_entrenamiento.getId(),
                                                          clase_entrenamiento.getAnotados(),
                                                          clase_entrenamiento.getNombre(),
                                                          clase_entrenamiento.getTurno(),
                                                          clase_entrenamiento.getenRambla());
  arreglo_clases[tope_clases].es_entrenamiento = true;
}
void agregarClase(const DtClase &clase){                                //2
 tope_clases++;
}

static bool es_valida_fecha(Fecha f){
  bool res = true;
  if (f.getAnio() < 1990){
    res = false;
  }
  if (f.getMes() < 1 || f.getMes() > 12){
    res = false;
  }
  if (f.getDia() < 1 || f.getDia() > 31){
    res = false;
  }
  return res;
}

void agregarInscripcion(int ciSocio, int idClase, Fecha fecha){         //3
//encontrar el socio y devolver un puntero a este
  int i = 0;
  encontre = false;
  while(i < tope_socios && encontre = false){
    if(arreglo_socios->getCI()){
      encontre = true;
    }
    i++;
  }
  i--; //cuando encuentro el elemento, por el iterador del while ya me corri un lugar
  Inscripcion inscripcion = Inscripcion(fecha, arreglo_socios[i]); //no hago copia, no creo que importe
  //busco la clase para que apunte a esta inscripcion
  encontre = false;
  i = 0;
  while(i < tope_socios && encontre = false){
    if(arreglo_clases[i].info_clase->getId()){
      encontre = true;
    }
    i++;
  }
  i--; //idem antes
  //arreglo de clases, campo clase, arreglo inscripciones, en la posicion "anotados" se le asigna la inscripcion
  arreglo_clases[i].info_clase->inscripciones[arreglo_clases[i].info_clase->getAnotados()] = inscripcion;
  //la cantidad de anotados aumenta en uno
  arreglo_clases[i].info_clase->setAnotados(arreglo_clases.info_clase->getAnotados() + 1);
}

void borrarInscripcion(int ciSocio, int idClase){                       //4

}

DtSocio **obtenerInfoSociosPorClase(int idClase, int &cantSocios){      //5


}

DtClase obtenerClase(int idCLase){                                      //6

}


//auxiliar para el main
static void responder_entrada_invalida(int &entrada){
  std::cout << "Lo sentimos, lo ingresado no fue una entrada valida, intente de nuevo. \n";
  std::cout << "Para registrar una clase de spinning presione 1. \n";
  std::cout << "Para registrar una clase de entrenamiento presione 2. \n";
  std::cout << "Para registrar una nueva clase de entrenamiento presione 2. \n";
  std::cout << "Para registrar un nuevo socio presione 3. \n";
  std::cout << "Para inscribir un socio existente a una clase existente presione 4. \n";
  std::cout << "Para borrar una inscripcion de un socio de una clase presione 5. \n";
  std::cout << "Para desplegar informacion sobre las clases ingresadas presione 6. \n";
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

  while (execute){
    std::cout << "Para registrar una nueva clase de spinning presione 1. \n";
    std::cout << "Para registrar una nueva clase de entrenamiento presione 2. \n";
    std::cout << "Para registrar un nuevo socio presione 3. \n";
    std::cout << "Para inscribir un socio existente a una clase existente presione 4. \n";
    std::cout << "Para borrar una inscripcion de un socio de una clase presione 5. \n";
    std::cout << "Para desplegar informacion sobre las clases ingresadas presione 6. \n";
    std::cout << "Para salir, presione 0. \n";

    std::cin >> entrada;
    switch (entrada) {
      ///nuevo spinning
      case 1:{
        std::cout << "Ingresaremos una clase de spinning. \n";
        try{
          std::cout << "Ingrese el Id de la clase";
          std::cin >> identificacion_spinning;
          if (existe_clase(identificacion_spinning)){
            std::std::cin.clear(); //resetea las flags de error
            std::std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida
            throw std::invalid_argument("La clase que se desea ingresar ya existe en el sistema"); //tira la excepcion
          }
          std::cout << "Ingrese el nombre de la clase. \n";
          std::cin >> nombre_clase_spinning;
          std::cout << "Ingrese el turno en el cual se desarrolla la clase. \n";
          std::cin >> turno_clase_spinning;
          std::cout << "Ingrese la cantidad de bicicletas con las que cuenta la clase: \n";
          std::cin >> cantidad_bicicletas;
          if (cantidad_bicicletas > 50){
            std::std::cin.clear(); //resetea las flags de error
            std::std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida
            throw std::invalid_argument("No se puede ingresar un numero de bicicletas mayor a 50"); //tira la excepcion
          }
          DtClase *clase_spinning_ains = new DtSpinning(identificacion_spinning, nombre_clase_spinning,
                                                        turno_clase_spinning, cantidad_bicicletas);
          agregarSpinning(clase_spinning_ains);
          agregarClase(clase_spinning_ains);
          std::cout << "Clase ingresada exitosamente. \n";

        } catch(const std::invalid_argument &ia) {responder_entrada_invalida(entrada);};
        break;
      }
      //nuevo entrenamiento
      case 2:{
        std::cout << "Ingresaremos una clase de entrenamiento." << std::endl;
        try{
          std::cout << "Ingrese el Id de la clase"
          std::cin >> identificacion_entrenamiento;
          if (existe_clase(identificacion_entrenamiento)){
            std::std::cin.clear(); //resetea las flags de error
            std::std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida
            throw(std::invalid_argument("La clase que se desea ingresar ya existe en el sistema")); //tira la excepcion
          }
          std::cout << "Ingrese el nombre de la clase. \n"
          std::cin >> nombre_clase_entrenamiento;
          std::cout << "Ingrese el turno en el cual se desarrolla la clase. \n"
          std::cin >> turno_clase_entrenamiento;
          std::cout << "Ingrese si la clase se desarrolla en la rambla. \n";
          std::cin >> clase_en_rambla;
          }
          DtClase *clase_entrenamiento_ains = new DtSpinning(identificacion_entrenamiento, nombre_clase_entrenamiento,
                                                        turno_clase_entrenamiento, clase_en_rambla);
          agregarSpinning(clase_entrenamiento_ains);
          agregarClase(clase_entrenamiento_ains);
          std::cout << "Clase ingresada exitosamente." << std::endl;

        } catch(const std::invalid_argument &ia) {responder_entrada_invalida(entrada);}
        break;
      }
      //nuevo socio
      case 3:{
        std::cout << "Registraremos un nuevo socio al sistema. \n";
        try{
          std::cout << "Ingrese la cedula de identidad del socio. \n";
          std::cin >> cedula_socio;
          if (existe_socio(cedula_socio)){
            std::std::cin.clear(); //resetea las flags de error
            std::std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida hasta el fin de linea
            throw(std::invalid_argument("El socio ya se encuentra registrado")); //tira la excepcion
          }
          std::cout << "Ingrese el nombre del socio. \n";
          std::cin >> nombre_socio;
          agregarSocio(cedula_socio, nombre_socio);
          std::cout << "Socio registrado exitosamente" << std::endl;
        }catch(const std::invalid_argument &ia) {responder_entrada_invalida(entrada);}
        break;
      }
      //inscribir socio a una clase
      case 4:{
        std::cout << "Inscribiremos un socio a una clase";
        try{
          std::cout << "Ingrese la cedula del socio a inscribir. \n";
          std::cin >> cedula_socio_ainscribir;
          if (!existe_socio(cedula_socio_ainscribir)){
            throw(std::invalid_argument("El socio no esta registrado"));
          }
          std::cout << "Ingrese el identificador de la clase a la que se desea inscribir. \n";
          std::cin >> id_clase_ainscribir;
          if (!existe_clase(id_clase_ainscribir)){
            throw(std::invalid_argument("La clase no esta registrada"));
          }
          std::cout << "Ingrese la fecha de inscripcion. \n";
          std::cin >> fecha_inscripcion;
          if(es_valida_fecha(fecha_inscripcion)){
            throw(std::invalid_argument("La fecha no es valida"));
          }
          agregarInscripcion(cedula_socio_ainscribir, id_clase_ainscribir, fecha_inscripcion);
          std::cout << "Socio inscripto exitosamente";
        }catch(const std::invalid_argument &ia) {responder_entrada_invalida(entrada);}
        break;
      }
      //desinscribir socio de clase
      //falta levantar la excepcion por si el socio no se encuentra anotado
      //creo que es el unico uso que se le daria a obtenerInfoSociosPorClase
      case 5:{
        std::cout << "Desincribiremos a un socio de una clase";
        try{
          std::cout << "Ingrese la cedula del socio a desinscribir. \n";
          std::cin >> cedula_socio_adesinscribir;
          if (!existe_socio(cedula_socio_adesinscribir)){
            throw(std::invalid_argument("El socio no esta registrado"));
          }
          std::cout << "Ingrese el identificador de la clase a la que se desea inscribir. \n";
          std::cin >> id_clase_aidesnscribir;
          if (!existe_clase(id_clase_adesinscribir)){
            throw(std::invalid_argument("La clase no esta registrada"));
          }
          borrarInscripcion(cedula_socio_adesinscribir, id_clase_adesinscribir);
          std::cout << "Socio inscripto exitosamente";
        }catch(const std::invalid_argument &ia) {responder_entrada_invalida(entrada);}
        break;
      }
      //desplegar informacion, no se hasta que punto podemos sobrecargar el operador
      case 6:{
        std::cout << "Desplegaremos la informacion de la clase deseada. \n";
        try{
          std::cout << "Ingrese el identificador de la clase que se desea desplegar. \n";
          std::cin >> id_clase_adesplegar;
          if (!existe_clase(id_clase_adesplegar)){
            throw(std::invalid_argument("La clase no esta registrada"));
          }
          std::cout << obtenerClase(id_clase_adesplegar) << std::endl; //cuidado como se sobrecarga para hacer esto valido
          if (es_clase_entrenamiento(id_clase_adesplegar)){
            if (obtenerClase(id_clase_adesplegar).getenRambla()){
              std::cout << "En rambla: SI. \n";
            } else {
              std::cout << "En rambla: NO. \n";
            }
          }else{
            std::cout << "Cantidad de bicicletas" << obtenerClase(id_clase_adesplegar).getcantBicicletas() << std::endl;
          }

          std::cout << "Informacion desplegada exitosamente. \n";
        }catch(const std::invalid_argument &ia) {responder_entrada_invalida(entrada);}
        break;
      }
      //cerrar programa
      case 0:{
        std::cout << "Cerrando aplicacion.\n";
        execute = false;
        break;
      }
      default:{
        responder_entrada_invalida(entrada);
        break;
      }
    } //switch
  } //while


  return 0;
}
