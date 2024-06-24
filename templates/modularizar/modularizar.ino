/*
    Ejemplo simple de modularización de código
    Junio de 2024

    En Arduino los proyectos tienen que tener la siguiente estructura:

      SomeSketch/
      ├── SomeSketch.ino
      └── src/
          └── Some_Library-master/
              ├── Some.h
              ├── ...
*/

#include "src/ardu_func/ardu_func.h"

void setup() {

  Serial.begin(9600);
}

void loop() {

  // int otro_resultado = sumando(2, 3);

  int resultado = calcular();
  Serial.println(resultado);
  delay(1000);
}
