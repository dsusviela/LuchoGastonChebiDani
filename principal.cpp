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

static bool existe_socio(int ci) {
    bool encontre = false;
    int i = 0;
    while(i < tope_socios && encontre == false) {
        if(arreglo_socios[i]->getCI() == ci)
            encontre = true;
        i++;
    }
    return encontre;
}

void agregarSocio(int ci, string nombre){
    arreglo_socios[tope_socios] = Socio(ci, nombre);
    tope_socios++;
}


int main(){



return 0;
}
