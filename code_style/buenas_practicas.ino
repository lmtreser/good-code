/*
    Titulo del Sketch

    Describir lo que hace en términos sencillos.

    El circuito:
    * listar los componentes conectados a cada entrada
    * listar los componentes conectados a cada salida

    Creado día mes año
    Por nombre del autor
    Modificado día mes año
    Por nombre del autor

    http://url/of/online/tutorial.cc

*/

/* 
  EVITAR EL USO DE #define
  
  #define es una directiva de precompilador que sirve para decirle al compilador que 
  compilar y generar programas distintos para el mismo código. 

  No se debe utilizar la directiva para definir constantes ya que el compilador no 
  hará comprobaciones de tipado, ni advertencias de cast, etc. Utilizar para cuando 
  se quiera modificar el programa, por ejemplo, para compilar una rama si es un Arduino
  y otra rama para un ESP32.

  Si desea definir nombres de pines y otras cantidades que no cambiarán, use const. 
*/

// Evitar:
#define pin_sensor 5

// Uso de constantes
const int PIN_SENSOR = 5;
const int NUM_CHANNELS = 3;
const float SENSOR_GAIN = 3.5;

/* 
  VARIABLES
  
  Evitar los nombres de variables de una sola letra. Hágalos descriptivos. Evitar 
  nombres de variables como "valPin". Sea más descriptivo, como "buttonState" o 
  "switchPin".

  Utilice los tipos de variables de estilo de Wiring/Processing, por ejemplo, 
  boolean, char, byte, int, unsigned int, long, unsigned long, float, double, 
  String, array, void cuando sea posible, en lugar de uint8_t, etc.
*/

// Evitar los nombres de variables de una sola letra:
int v = analogRead(A0);
float r = v * f;
float t = r * fs;

// Forma correcta:
int voltaje = analogRead(PIN_SENSOR);
float raw_temperature = voltaje * CONVERSION_C_MV;
float temperature = raw_temperature * FACTOR_SENSOR;

// Evitar esquemas de numeración que confundan al usuario, por ejemplo:
int pin1 = 2, pin2 = 3;

// Si necesita volver a numerar los pines, considere usar un array:
int myPins[] = { 2, 7, 6, 5, 4, 3 };

// Permite referirse a los nuevos números de pin utilizando los elementos del array:
digitalWrite(myPins[1], HIGH);  // enciende el 7

// Permite activar o desactivar todos los pines en la secuencia que desee:
for (int thisPin = 0; thisPin < 6; thisPin++) {
  digitalWrite(myPins[thisPin], HIGH);
  delay(500);
  digitalWrite(myPins[thisPin], LOW);
  delay(500);
}

/*
  AMBITO DE LAS VARIABLES

  En programación se tiende a evitar el uso de variables globales. En el caso de 
  un MCU no tenemos tantas herramientas para evitarlas, pero está claro que abusar 
  de ellas está mal.
*/

// Evitar las variables globales:
float raw;
float a;
float b;
float temperature;

void CalculateTemperatura() {
  temperature = a * raw + b
}

// Forma correcta:
float CalculateTemperature(float raw, float a, float b) {
  return a * raw + b
}

/* 
  EVITAR LOS NÚMEROS "MÁGICOS" 

  Un número mágico es ese que ves en mitad del código y no sabes de donde viene. 
  Siempre se debe encapsular los números en una constante que los identifique.
*/

// Evitar:
int temperatura = tension * 3 * 1.674;

// Forma correcta:
int temperatura = tension * NUM_CHANNELS * CONVERSION_C_MV;

/* 
  USAR VARIABLES INTERMEDIAS 
  
  Encadenar llamadas de función para evitar crear variables intermedias es un error.
*/

// Evitar:
bool result = Validate(GetTemperature(GetVoltaje(PIN_SENSOR)));

// Forma correcta:
int voltage = GetVoltaje(PIN_SENSOR);
float temperature = GetTemperature(voltage);
bool isValid = Validate(temperature);

// Evitar:
if(GetMeasure(pin_sensor)  {
} 

// Forma correcta:
auto isValid = GetMeasure(PIN_SENSOR);
if(isValid)  {
}

/*
    NO CONFUNDIR ABREVIANDO

    Se debe evitar crear código compacto que puede generar confusiones al
    usuario principiante.
*/

// Evitar:
if (somethingIsTrue) doSomething;

// En su lugar, usa esto:
if (somethingIsTrue == TRUE) {
  doSomething;
}
