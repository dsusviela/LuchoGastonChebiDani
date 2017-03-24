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

//el que se quiera animar al Dynamic Cast
//http://stackoverflow.com/questions/2253168/dynamic-cast-and-static-cast-in-c
//pero que lo haga en otra branch, yo no entendi nada....

Socio *arreglo_socios[MAX_SOCIOS];
int tope_socios = 0;

Clase *arreglo_clases[MAX_CLASES];
int tope_clases = 0;

//funciones a implementar con sus axuliares

static bool existe_socio(int ci) {
  bool encontre = false;
  int i = 0;
  while (i < tope_socios && encontre == false) {
    if (arreglo_socios[i]->getCI() == ci) {
      encontre = true;
    }
    i++;
  }
  return encontre;
}

void agregarSocio(int ci, std::string nombre) {                              //1
  Socio * ains = new Socio(ci, nombre);
  arreglo_socios[tope_socios] = ains;
  tope_socios++;
}

static bool existe_clase(int id_clase) {
  bool encontre = false;
  int i = 0;
  while (i < tope_clases && encontre == false) {
    if (arreglo_clases[i]->getId() == id_clase) {
      encontre = true;
    }
    i++;
  }
  return encontre;
}

static void agregarSpinning(DtSpinning *clase_spinning) {
  arreglo_clases[tope_clases] = new Spinning(clase_spinning->getId(),
      clase_spinning->getNombre(), clase_spinning->getTurno(),
      clase_spinning->getcantBicicletas());
}

static void agregarEntrenamiento(DtEntrenamiento *clase_entrenamiento) {
  arreglo_clases[tope_clases] = new Entrenamiento(clase_entrenamiento->getId(),
      clase_entrenamiento->getNombre(), clase_entrenamiento->getTurno(),
      clase_entrenamiento->getenRambla());
}

void agregarClase(const DtClase &clase) {                                //2
  DtClase *aux = &clase;
  DtSpinning *es_spinning = dynamic_cast<DtSpinning *>(aux);
  DtSpinning *es_entrenamieno = dynamic_cast<DtSpinning *>(aux);
  if (es_spinning) {
    agregarSpinning(es_spinning);
  } else {
    agregarEntrenamiento (es_entrenamiento);
  }
  tope_clases++;
}

static bool es_valida_fecha(Fecha f) {
  bool res = true;
  if (f.getAnio() < 1990) {
    res = false;
  }
  if (f.getMes() < 1 || f.getMes() > 12) {
    res = false;
  }
  if (f.getDia() < 1 || f.getDia() > 31) {
    res = false;
  }
  return res;
}

void agregarInscripcion(int ciSocio, int idClase, Fecha fecha) {         //3
  int i = 0;
  bool encontre = false;
  while (i < tope_socios && encontre == false) {
    if (arreglo_socios[i]->getCI() == ciSocio) {
      encontre = true;
    }
    i++;
  }
  i--;
  Inscripcion *inscripcion = new Inscripcion(fecha, arreglo_socios[i]);
  encontre = false;
  i = 0;
  while (i < tope_socios && encontre == false) {
    if (arreglo_clases[i]->getId() == idClase) {
      encontre = true;
    }
    i++;
  }
  i--;
  arreglo_clases[i]->agregarInscripcion(inscripcion);
}

void borrarInscripcion(int ciSocio, int idClase) {                       //4
  bool encontre = false;
  int i = 0;
  while (i < tope_clases && encontre == false) { // Busco la clase en arreglo_clases
    if (arreglo_clases[i]->getId() == idClase) {
      encontre = true;
    }
    i++;
  };
  i--;
  Inscripcion **ins = arreglo_clases[i]->getInscripciones();
  int j = 0;
  encontre = false;
  while (j < arreglo_clases[i]->getAnotados && encontre == false) { // Busco el socio entre los inscriptos
    if (ins[j]->getSocio().getCI() == ciSocio) { //necesito el DataType socio del objeto apuntado por ins[i], una vez que lo tengo le aplico getCI DEBUG
      encontre = true;
    }
    j++;
  };
  j--;
  arreglo_clases[i]->borrarInscripcion(j);
}

DtSocio **obtenerInfoSociosPorClase(int idClase, int &cantSocios) { //5
  int i = 0;
  bool encontre = false;
  while (i < tope_clases && encontre == false) {
    if (arreglo_clases[i]->getId() == idClase) {
      encontre = true;
    }
    i++;
  };
  i--;
  Inscripcion** arreglo_ins = arreglo_clases[i]->getInscripciones();
  int tope = arreglo_clases[i]->getAnotados();
  DtSocio **res = new DtSocioPtr[cantSocios];
  for (int j = 0; j < tope; j++) {
    res[j] = new DtSocio(arreglo_ins[j]->getSocio());
  }
  return res;
}

DtClase obtenerClase(int idClase) {                                      //6
  bool encontre = false;
  int i = 0;
  while (i < tope_clases && encontre == false) {
    if (arreglo_clases[i]->getId() == idClase) { // Busco si está inscripta la clase
      encontre = true;
    }
    i++;
  };
  i--;
  Clase *aux = arreglo_clases[i];
  Entrenamiento *es_entrenamiento = dynamic_cast<Entrenamiento *>(aux);
  Spinning *es_spinning = dynamic_cast<Spinning *>(aux);
  if (es_entrenamiento) {                        // Si es entrenamiento
    int idres = arreglo_clases[i]->getId();
    int anotadosres = arreglo_clases[i]->getAnotados();
    std::string nombreres = arreglo_clases[i]->getNombre();
    Turno turnores = arreglo_clases[i]->getTurno();
    Inscripcion *inscripcionres = arreglo_clases[i]->getInscripciones();
    bool enRamblares = es_entrenamiento->getenRambla();
    DtEntrenamiento res = DtEntrenamiento(idres, anotadosres, nombreres,
        turnores, enRamblares); // No tiene parametro inscripcion el constructor???
  } else {
    int idres = arreglo_clases[i]->getId();
    int anotadosres = arreglo_clases[i]->getAnotados();
    std::string nombreres = arreglo_clases[i]->getNombre();
    Turno turnores = arreglo_clases[i]->getTurno();
    Inscripcion *inscripcionres = arreglo_clases[i]->getInscripciones();
    int cantbicicletasres = es_spinning->getcantBicicletas();
    DtSpinning res = DtSpinning(idres, anotadosres, nombreres, turnores,
        cantbicicletasres);
  }
  return res;
}

//IMPORTANTE PARA CIN, SE USA SOLO PARA INTEGERS
//PARA STRINGS USAMOS GETLINE
//esto es porque cin lee solo hasta el primer espacio, entonces si yo quiero ingresar
//un nombre de un socio "nombre apellido", cin registra solo el nombre.

//auxiliar para el main
static void responder_entrada_invalida(int &entrada) {
  std::cout << "Lo sentimos, lo ingresado no fue una entrada valida, intente de nuevo. \n";
  std::cout << "Para registrar una clase de spinning presione 1. \n";
  std::cout << "Para registrar una clase de entrenamiento presione 2. \n";
  std::cout << "Para registrar una nueva clase de entrenamiento presione 2. \n";
  std::cout << "Para registrar un nuevo socio presione 3. \n";
  std::cout << "Para inscribir un socio existente a una clase existente presione 4. \n";
  std::cout << "Para borrar una inscripcion de un socio de una clase presione 5. \n";
  std::cout << "Para desplegar informacion sobre las clases ingresadas presione 6. \n";
  std::cout << "Para desplegar todos los socios de una clase 7. \n";

  std::cout << "Para salir, presione 0. \n";
  std::cin >> entrada;
}

static void imprimir_socios(DtSocio **s, int tope) {
  for (int i = 0; i < tope; i++) {
    std::cout << " ====================== \n";
    std::cout << "Nombre: " << s[i]->getNombre() << std::endl;
    std::cout << "CI: " << s[i]->getCI() << std::endl;
  }
  std::cout << std::endl;
}

//-----------------------------------------------------------------------
//CODGIO PRINCIPAL
//-----------------------------------------------------------------------
int main() {

  bool execute = true;
  int entrada;
  std::cout << "Bienvenido al software del manejo del gimnasio del InCo-FIng.\n";

  int identificacion_spinning, identificacion_entrenamiento, cantidad_bicicletas,
    cedula_socio, cedula_socio_ainscribir, id_clase_ainscribir, dia, mes, year,
    cedula_socio_adesinscribir, id_clase_adesinscribir, id_clase_adesplegar;
  Turno turno_clase_spinning, turno_clase_entrenamiento;
  std::string nombre_clase_spinning, nombre_clase_entrenamiento, nombre_socio;
  bool clase_en_rambla;

  while (execute) {
    std::cout << "Para registrar una nueva clase de spinning presione 1. \n";
    std::cout << "Para registrar una nueva clase de entrenamiento presione 2. \n";
    std::cout << "Para registrar un nuevo socio presione 3. \n";
    std::cout << "Para inscribir un socio existente a una clase existente presione 4. \n";
    std::cout << "Para borrar una inscripcion de un socio de una clase presione 5. \n";
    std::cout << "Para desplegar informacion sobre las clases ingresadas presione 6. \n";
    std::cout << "Para desplegar todos los socios de una clase 7. \n";

    std::cout << "Para salir, presione 0. \n";

    std::cin >> entrada;
    switch (entrada) {
    ///nuevo spinning
    case 1: {
      std::cout << "Ingresaremos una clase de spinning. \n";
      try {
        std::cout << "Ingrese el Id de la clase. \n";
        std::cin >> identificacion_spinning;
        if (existe_clase (identificacion_spinning)) {
          std::cin.clear(); //resetea las flags de error
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida
          throw std::invalid_argument(
              "La clase que se desea ingresar ya existe en el sistema"); //tira la excepcion
        }
        std::cout << "Ingrese el nombre de la clase. \n";
        std::getline(std::cin, nombre_clase_spinning);
        std::cout << "Ingrese el turno en el cual se desarrolla la clase. \n";
        std::cin >> turno_clase_spinning;
        std::cout << "Ingrese la cantidad de bicicletas con las que cuenta la clase: \n";
        std::cin >> cantidad_bicicletas;
        if (cantidad_bicicletas > 50) {
          std::cin.clear(); //resetea las flags de error
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida
          throw std::invalid_argument(
              "No se puede ingresar un numero de bicicletas mayor a 50"); //tira la excepcion
        }
        DtSpinning clase_spinning_ains = DtSpinning(identificacion_spinning,
            cantidad_bicicletas, turno_clase_spinning, cantidad_bicicletas);
        agregarClase(clase_spinning_ains);

      } catch (const std::invalid_argument &ia) {
        responder_entrada_invalida(entrada);
      }
      std::cout << "Clase ingresada exitosamente. \n";
      break;
    }
      //nuevo entrenamiento
    case 2: {
      std::cout << "Ingresaremos una clase de entrenamiento." << std::endl;
      try {
        std::cout << "Ingrese el Id de la clase. \n";
        std::cin >> identificacion_entrenamiento;
        if (existe_clase(identificacion_entrenamiento)) {
          std::cin.clear(); //resetea las flags de error
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//ignora toda la entrada invalida
          throw(std::invalid_argument("La clase que se desea ingresar ya existe en el sistema"));//tira la excepcion
        }
        std::cout << "Ingrese el nombre de la clase. \n";
        std::getline(std::cin, nombre_clase_entrenamiento);
        std::cout << "Ingrese el turno en el cual se desarrolla la clase. \n";
        std::cin >> turno_clase_entrenamiento;
        std::cout << "Ingrese si la clase se desarrolla en la rambla: 1 para Si o 0 para no. \n";
        std::cin >> clase_en_rambla;
      } catch(const std::invalid_argument &ia) {responder_entrada_invalida(entrada);}

      DtEntrenamiento clase_entrenamiento_ains = DtEntrenamiento(identificacion_entrenamiento, nombre_clase_entrenamiento,
          turno_clase_entrenamiento, clase_en_rambla);
      agregarClase(clase_entrenamiento_ains);
      std::cout << "Clase ingresada exitosamente." << std::endl;
      break;
    }
    //nuevo socio
    case 3:
    {
      std::cout << "Registraremos un nuevo socio al sistema. \n";
      try {
        std::cout << "Ingrese la cedula de identidad del socio. \n";
        std::cin >> cedula_socio;
        if (existe_socio (cedula_socio)) {
          std::cin.clear(); //resetea las flags de error
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida hasta el fin de linea
          throw(std::invalid_argument("El socio ya se encuentra registrado")); //tira la excepcion
        }
        std::cout << "Ingrese el nombre del socio. \n";
        std::getline(std::cin, nombre_socio);
        agregarSocio(cedula_socio, nombre_socio);
        std::cout << "Socio registrado exitosamente" << std::endl;
      } catch (const std::invalid_argument &ia) {
        responder_entrada_invalida(entrada);
      }
      break;
    }
    //inscribir socio a una clase
    case 4:
    {
      std::cout << "Inscribiremos un socio a una clase. \n";
      try {
        std::cout << "Ingrese la cedula del socio a inscribir. \n";
        std::cin >> cedula_socio_ainscribir;
        std::cin.clear();
        if (!existe_socio(cedula_socio_ainscribir)) {
          throw(std::invalid_argument("El socio no esta registrado"));
        }
        std::cout
            << "Ingrese el identificador de la clase a la que se desea inscribir. \n";
        std::cin >> id_clase_ainscribir;
        std::cin.clear();
        if (!existe_clase(id_clase_ainscribir)) {
          throw(std::invalid_argument("La clase no esta registrada"));
        }
        std::cout << "Ingrese la fecha de inscripcion. Dia Mes Year. \n";
        std::cin >> dia >> mes >> year;
        Fecha fecha_inscripcion = Fecha(dia, mes, year);
        if (es_valida_fecha(fecha_inscripcion)) {
          std::cin.clear(); //resetea las flags de error
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida hasta el fin de linea
          throw(std::invalid_argument("La fecha no es valida"));
        }
        agregarInscripcion(cedula_socio_ainscribir, id_clase_ainscribir,
            fecha_inscripcion);
        std::cout << "Socio inscripto exitosamente. \n";
      } catch (const std::invalid_argument &ia) {
        responder_entrada_invalida(entrada);
      }
      break;
    }
    //desinscribir socio de clase
    //falta levantar la excepcion por si el socio no se encuentra anotado
    //creo que es el unico uso que se le daria a obtenerInfoSociosPorClase
    case 5:
    {
      std::cout << "Desincribiremos a un socio de una clase. \n";
      try {
        std::cout << "Ingrese la cedula del socio a desinscribir. \n";
        std::cin >> cedula_socio_adesinscribir;
        if (!existe_socio(cedula_socio_adesinscribir)) {
          std::cin.clear(); //resetea las flags de error
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida hasta el fin de linea
          throw(std::invalid_argument("El socio no esta registrado"));
        }
        std::cout << "Ingrese el identificador de la clase a la que se desea desinscribir. \n";
        std::cin >> id_clase_adesinscribir;
        if (!existe_clase(id_clase_adesinscribir)) {
          std::cin.clear(); //resetea las flags de error
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida hasta el fin de linea
          throw(std::invalid_argument("La clase no esta registrada"));
        }
        borrarInscripcion(cedula_socio_adesinscribir, id_clase_adesinscribir);
        std::cout << "Socio desinscripto exitosamente";
      } catch (const std::invalid_argument &ia) {
        responder_entrada_invalida(entrada);
      }
      break;
    }
    //desplegar informacion, no se hasta que punto podemos sobrecargar el operador
    case 6:
    {
      std::cout << "Desplegaremos la informacion de la clase deseada. \n";
      try {
        std::cout << "Ingrese el identificador de la clase que se desea desplegar. \n";
        std::cin >> id_clase_adesplegar;
        if (!existe_clase(id_clase_adesplegar)) {
          std::cin.clear(); //resetea las flags de error
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida hasta el fin de linea
          throw(std::invalid_argument("La clase no esta registrada"));
        }
        std::cout << obtenerClase(id_clase_adesplegar);
        std::cout << std::endl; //por las dudas del sobrecargado
        std::cout << "Informacion desplegada exitosamente. \n";
      } catch (const std::invalid_argument &ia) {
        responder_entrada_invalida(entrada);
      }
      break;
    }
    //desplegar todos los socios de una clase
    case 7:
    {
      std::cout << "Desplegaremos los socios de la clase deseada. \n";
      try {
        std::cout << "Ingrese el identificador de la clase que desee. \n";
        std::cin >> id_clase_adesplegar;
        if (!existe_clase(id_clase_adesplegar)) {
          std::cin.clear(); //resetea las flags de error
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignora toda la entrada invalida hasta el fin de linea
          throw(std::invalid_argument("La clase no esta registrada"));
        }
        bool encontrado = false;
        int k = 0;
        while (k < tope_clases && encontrado == false) {
          if (arreglo_clases[k]->getId() == id_clase_adesplegar) {
            encontrado = true;
          }
          k++;
        };
        k--;
        int cSocios = arreglo_clases[k]->getAnotados();
        if (cSocios == 0) {
          std::cout << "La clase no tiene ningun socio inscripto. \n";
        } else {
          DtSocio **socios_aimprimir = obtenerInfoSociosPorClase(
              id_clase_adesplegar, cSocios);
          std::cout << "Los socios de la clase "
              << arreglo_clases[k]->getNombre() << " son: \n";
          imprimir_socios(socios_aimprimir, cSocios);
        }
        std::cout << "Informacion desplegada exitosamente. \n";
      } catch (const std::invalid_argument &ia) {
        responder_entrada_invalida(entrada);
      }
      break;
    }
    //cerrar programa
    case 0:
    {
      std::cout << "Cerrando aplicacion.\n";
      execute = false;
      break;
    }
    default:
    {
      responder_entrada_invalida(entrada);
      break;
    }
  } //switch
} //while

return 0;
}
