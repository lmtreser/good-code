/*  El archivo .cpp debe contener:

      - #include del archivo .h asociado
      - #include cualquier archivo .h requerido por las implementaciones, pero no por la interfaz
      - Implementaciones de funciones
      - Implementaciones de métodos de clase
      - Definiciones de variables estáticas de clase
      - Definiciones de variables globales declaradas como 'extern' en el archivo .h asociado

    Este método no solo proporciona una modularidad superior, sino que también le permite aprovechar 
    el control de alcance a nivel de archivo utilizando la directiva "static". Esto le permite mantener 
    funciones y variables globales privadas en el archivo de implementación si otros módulos no las 
    necesitan.
    Al utilizar este método, solo debería haber UN archivo .ino, el principal que contiene setup() y 
    loop().
*/

//=====[Libraries]=============================================================
#include "ardu_func.h"
#include <Arduino.h>

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

static int sumando(int x, int y);

//=====[Implementations of public functions]===================================

int calcular(){
  return sumando(2, 3);
}

//=====[Implementations of private functions]==================================

static int sumando(int x, int y) {
  int z = x + y;
  return z;
}