/*  El archivo .h contiene la interfaz del módulo, es decir, solo la información que otros 
    módulos necesitan para utilizar la funcionalidad pública de este módulo.

      - Prototipos para funciones públicas
      - Declaraciones de clase
      - Declaraciones de variables globales "extern"

    El archivo .h también puede contener implementaciones de métodos de clase dentro de la 
    declaración de clase, pero solo si dichas implementaciones son cortas (un par de líneas). 
    También debe contener directivas #include de cualquier archivo .h necesario para las 
    declaraciones contenidas o para los módulos que usan la interfaz. Si hay archivos .h que 
    solo son requeridos por las implementaciones, entonces NO deben incluirse en el archivo .h 
    sino en el archivo .cpp.
*/

//=====[#include guards - begin]===============================================
#ifndef ARDU_FUNC_H
#define ARDU_FUNC_H

//=====[Declaration of public defines]=========================================
//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================
int calcular();

//=====[#include guards - end]=================================================
#endif