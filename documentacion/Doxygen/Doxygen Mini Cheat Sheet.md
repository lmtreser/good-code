# Mini Cheat Sheet de Doxygen aplicado a Arduino

## Comentarios de Doxygen

```cpp
/// Comentario de una línea (forma corta)
/** Comentario de varias líneas */
/*! Otra forma de comentario de varias líneas */
```

## Descripción de funciones

```cpp
/**
 * @brief Descripción de la función.
 * @param param1 Descripción del primer parámetro.
 * @param param2 Descripción del segundo parámetro.
 * @return Descripción del valor de retorno.
 */
int suma(int param1, int param2);
```

## Documentación de variables

```cpp
/// Variable global usada para contar
int contador;
```

## Documentación de clases

```cpp
/**
 * @brief Clase que controla un LED.
 *
 * Esta clase permite encender y apagar un LED.
 */
class Led {
public:
    /**
     * @brief Enciende el LED.
     */
    void encender();

    /**
     * @brief Apaga el LED.
     */
    void apagar();

private:
    int pin; ///< Pin del LED
};
```

## Agrupación de elementos

Para agrupar funciones, variables o clases bajo un mismo bloque, podes usar `@defgroup` y `@ingroup`.

```cpp
/** @defgroup ControlDeLED Funciones para el control del LED */
/** @ingroup ControlDeLED
 *  @brief Función para inicializar el LED.
 */
void iniciarLed();
```

## Etiquetas más comunes

- `@brief`: Breve descripción de la función o clase.
- `@param`: Descripción de los parámetros de una función.
- `@return`: Descripción del valor que retorna la función.
- `@note`: Añadir notas importantes.
- `@warning`: Advertencias sobre el uso de una función.
- `@todo`: Cosas que quedan por hacer.
- `@file`: Describe el archivo.

## Ejemplo práctico en Arduino

```cpp
/**
 * @file led_control.ino
 * @brief Ejemplo de control de un LED en Arduino.
 *
 * Este programa enciende y apaga un LED conectado al pin 13 de la placa Arduino.
 */

int ledPin = 13; ///< Pin donde está conectado el LED.

/**
 * @brief Configura el pin del LED.
 *
 * Esta función se ejecuta una vez al inicio para configurar el pin como salida.
 */
void setup() {
    pinMode(ledPin, OUTPUT); ///< Configura el pin 13 como salida.
}

/**
 * @brief Ciclo principal.
 *
 * Enciende y apaga el LED con un retardo de 1 segundo.
 */
void loop() {
    digitalWrite(ledPin, HIGH); ///< Enciende el LED.
    delay(1000);                ///< Espera 1 segundo.
    digitalWrite(ledPin, LOW);  ///< Apaga el LED.
    delay(1000);                ///< Espera 1 segundo.
}
```