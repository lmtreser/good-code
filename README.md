# Good Code

Guías y recursos para aprender y mejorar la práctica de escribir código, orientado principalmente a Arduino.

- Git
    - `git` Recursos sobre control de versiones
    - `git/gitignore` A collection of useful *.gitignore* templates
- Plantillas
    - `templates/ArduinoLibraryExample`Arduino Library Example
    - `templates/arduTemplate` Arduino Firmware Template
    - `templates/platformio-examples-develop` PlatformIO Project Examples
    - `templates/wifiTemplate` ESP8266/ESP32 WiFi Firmware Template
- Guías de estilo
    - `code_style/buenas_practicas.ino` Buenas practicas por [Luis Llamas](https://www.luisllamas.es/) 
    - `code_style/arduino-style-guide.md` Style guide for Arduino por [@Irikos](https://github.com/Irikos/arduino-style-guide)
    - `code_style/SFECodeStyleGuide.md` SparkFun Code Style Guidelines

---

¿Alguna vez te has topado con un código misterioso? ¡A todos nos ha pasado! 💪🏽

Desconcertado por nombres de variables crípticos, funciones interminables y comentarios confusos. Escribir código limpio es esencial para evitar estos escenarios y garantizar un proceso de desarrollo sin problemas. Hace que su código se explique por sí mismo, sea fácil de navegar y se pueda mantener, lo que le ahorra futuros dolores de cabeza.

La adopción de principios de código limpio mejora la legibilidad del código, facilita la depuración, reduce el costo de mantenimiento del programa, mejora la colaboración, mejora la calidad del código y te convierte en un mejor programador.

1. **Utilizar nombres descriptivos**. Los nombres claros y descriptivos hacen que el código sea más fácil de entender. Ya sea una variable, función o clase, su nombre debe reflejar su propósito.

2. **Seguir el principio DRY**. DRY (del inglés "Don't Repeat Yourself") significa "No te repitas". Si escribe el mismo código en varios lugares, deberá crear una función que pueda llamarse siempre que sea necesaria esa tarea.

3. **Mantener las funciones pequeñas**. Cada función debe hacer una cosa y hacerlo bien. Si las funciones son demasiado grandes y hacen demasiadas cosas, probablemente sea hora de dividirlas.

4. **Escribir comentarios, pero sabiamente**. Los comentarios son útiles pero no son una alternativa para el código limpio. Deberían explicar por qué se hace algo, no qué se hace. Recuerde, un buen código se documenta principalmente por sí mismo.

5. **Refactorizar periódicamente el código**. No tengas miedo de revisar el código y mejorarlo. A medida que adquiera más conocimientos y experiencia, encontrará mejores formas de hacer las cosas. La refactorización es parte del proceso de codificación.

Recordar: escribir código limpio requiere práctica, pero los beneficios valen la pena.

## Recursos para seguir aprendiendo

- Arduino

    - [4 consejos para programar código más limpio en Arduino](https://www.luisllamas.es/4-consejos-para-programar-codigo-mas-limpio-en-arduino/)
    - [Arduino documentation goes open-source for community contributions](https://github.com/arduino/docs-content)
    - [Arduino Lint](https://github.com/arduino/arduino-lint)
    - [Arduino programming traps, tips and style guide](http://www.gammon.com.au/forum/?id=12153)
    - [Arduino Style Guide for Creating Libraries](https://docs.arduino.cc/learn/contributions/arduino-library-style-guide/)
    - [Arduino Style Guide for Writing Content](https://docs.arduino.cc/learn/contributions/arduino-writing-style-guide)
    - [Good Arduino Code](https://goodarduinocode.com/)
    - [How to Write A Great Arduino Library](https://www.sparkfun.com/news/3245)
    - [How to Write Clean Arduino Code](https://blog.wokwi.com/how-to-write-clean-arduino-code/)
    - [Programming Arduino Uno in pure C](https://balau82.wordpress.com/2011/03/29/programming-arduino-uno-in-pure-c/)
    - [The Arduino Language in 10 Points](https://roboticsbackend.com/the-arduino-language-in-10-points/)
    - [Translate an Idea into Arduino Code](https://beckystern.com/2019/05/05/translate-an-idea-into-arduino-code/)
    - [Writing a Library for Arduino](https://docs.arduino.cc/learn/contributions/arduino-creating-library-guide/)

- Programación en general

    - [97 cosas que todo programador debería saber](http://97cosas.com/programador/)
    - [C Coding Standard](https://users.ece.cmu.edu/~eno/coding/CCodingStandard.html)
    - [C++ Cheat Sheets & Infographics](https://hackingcpp.com/cpp/cheat_sheets.html)
    - [C++ Coding Standard](https://users.ece.cmu.edu/~eno/coding/CppCodingStandard.html)
    - [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html)
    - [Coding in C for MCUs: Sort Structs to Save Code Size](https://philmulholland.medium.com/coding-in-c-for-mcus-sort-structs-to-save-code-size-7a311e83a5db)
    - [Guías de código abierto](https://opensource.guide/es/)
    - [Hacking C++](https://hackingcpp.com/)
    - [KTOWN's Guide to Readable C Code](https://learn.adafruit.com/ktowns-guide-to-readable-c-code)
    - [PlatformIO Project Examples](https://github.com/platformio/platformio-examples)
    - [References in C++](https://www.geeksforgeeks.org/references-in-cpp/)

- Documentar código

    - [AsciiDoc](https://asciidoc.org/)
    - [Doxygen](https://www.doxygen.nl/)
    - [MkDocs](https://www.mkdocs.org/)
    - [The Markdown Guide](https://www.markdownguide.org/)

- Control de versiones

    - [A successful Git branching model](https://nvie.com/posts/a-successful-git-branching-model/)
    - [Git Cheatsheet](http://ndpsoftware.com/git-cheatsheet.html)
    - [Git y GitHub tutorial paso a paso](https://programarfacil.com/blog/arduino-blog/git-y-github/)
    - [gitignore](https://github.com/github/gitignore)
    - [Gitignore Explicado: ¿Qué es Gitignore, y cómo agregarlo a tu repositorio?](https://www.freecodecamp.org/espanol/news/gitignore-explicado-que-es-y-como-agregar-a-tu-repositorio/)
    - [Oh My Git](https://ohmygit.blinry.org/)

## Licencia

Este trabajo está protegido por la **Licencia MIT**. Puedes acceder a la versión original de la licencia (en inglés) a través del archivo [LICENSE](./LICENSE) o en línea en [The MIT License (MIT)](https://mit-license.org/). También proporcionamos una traducción no oficial desde [Wikipedia](https://es.m.wikipedia.org/wiki/Licencia_MIT#La_licencia):

Copyright (c) 2024 Lucas Martín Treser

Por la presente se concede permiso, libre de cargos, a cualquier persona que obtenga una copia de este software y de los archivos de documentación asociados (el "Software"), a utilizar el Software sin restricción, incluyendo sin limitación los derechos a usar, copiar, modificar, fusionar, publicar, distribuir, sublicenciar, y/o vender copias del Software, y a permitir a las personas a las que se les proporcione el Software a hacer lo mismo, sujeto a las siguientes condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "COMO ESTÁ", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN, IDONEIDAD PARA UN PROPÓSITO PARTICULAR E INCUMPLIMIENTO. EN NINGÚN CASO LOS AUTORES O PROPIETARIOS DE LOS DERECHOS DE AUTOR SERÁN RESPONSABLES DE NINGUNA RECLAMACIÓN, DAÑOS U OTRAS RESPONSABILIDADES, YA SEA EN UNA ACCIÓN DE CONTRATO, AGRAVIO O CUALQUIER OTRO MOTIVO, DERIVADAS DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O SU USO U OTRO TIPO DE ACCIONES EN EL SOFTWARE.
