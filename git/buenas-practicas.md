# Buenas prácticas al trabajar con Git

> Tomado de [The Git, the Bad and the Ugly](https://david-estevez.gitbooks.io/the-git-the-bad-and-the-ugly/content/es/buenas-practicas-al-trabajar-con-git.html)

## Sigue el GitFlow Workflow

El GitFlow Workflow es una metodología de trabajo basada en el división de las distintas etapas de producción de software en distintas ramas del repositorio:

![gitflow workflow](./gitflow.svg)

- **master:** En la rama máster se encuentran las releases estables de nuestro software. Esta es la rama que un usuario típico se descargará para usar nuestro software, por lo que todo lo que hay en esta rama debería ser funcional. Sin embargo, puede que las últimas mejoras introducidas en el software no estén disponibles todavía en esta rama.

- **develop:** En esta rama surge de la última release de **master**. En ella se van integrando todas las nuevas características hasta la siguiente release.

- **feature-X:** Cada nueva mejora o característica que vayamos a introducir en nuestro software tendrá una rama que contendrá su desarrollo. Las ramas de **feature** salen de la rama **develop** y una vez completado el desarrollo de la mejora, se vuelven a integrar en **develop**.

- **release-X:** Las ramas de **release** se crean cuando se va a publicar la siguiente versión del software y surgen de la rama **develop**. En estas ramas, el desarrollo de nuevas características se congela, y se trabaja en arreglar bugs y generar documentación. Una vez listo para la publicación, se integra en **master** y se etiqueta con el número de versión correspondiente. Se integran también con **develop**, ya que su contenido ha podido cambiar debido a nuevas mejoras.

- **hotfix-X:** Si nuestro código contiene bugs críticos que es necesario parchear de manera inmediata, es posible crear una rama **hotfix** a partir de la publicación correspondiente en la rama **master**. Esta rama contendrá únicamente los cambios que haya que realizar para parchear el bug. Una vez arreglado, se integrará en **master**, con su etiqueta de versión correspondiente y en **develop**.

## Mensajes de commit

Los mensajes de commit son una herramienta muy útil para el desarrollo de software, ya que nos permiten encontrar cambios concretos en la historia de nuestro repositorio. No obstante, muchas veces no les prestamos toda la atención que se merecen, y escribrimos mensajes de commit que son de muy poca ayuda para nuestros compañeros y para nuestros yo del futuro. Esta sección aporta buenas prácticas a seguir para aprovechar los mensajes de commit al máximo.

### Escribe mensajes de commit claros y concisos

Las siguentes reglas de estilo harán que tus mensajes de commit sean más claros y concisos:

- Los mensajes de commit tienes dos partes principales: un asunto y un mensaje (como los correos electrónicos). Si el contenido del commit se puede explicar en el asunto, no es necesario incluir un mensaje. Ambas partes deben ir separadas por una línea en blanco.

- La línea de asunto no debería extenderse más de 50 caracteres, y el cuerpo del mensaje debería tener una extensión máxima (por línea) de 72 caracteres. Esto ayuda a su visualización en distintas plataformas y dispositivos.
La línea de asunto debe comenzar con letra mayúscula y terminar sin punto. Piensa, por ejemplo, en el asunto de un correo electrónico.

- Usa el imperativo en el mensaje de commit. Internamente Git usa el imperativo en los mensajes que genera. Por ejemplo, `Merge branch 'feature-refactor'` tras fusionar la rama `feature-refactor`. Para mantener la coherencia de todos los mensajes de commit, adoptaremos la convención de Git de usar el imperativo.

### Usa el mensaje de commit para aportar contexto y explicar el por qué detras de un cambio.

La principal utilidad de un mensaje de commit no es explicar cuáles son los cambios que realizará ese commit, ya que se pueden consultar en el diff del commit. La principal utilidad del mensaje de commit es explicar el por qué detras de esos cambios.

Por tanto, cuando el por qué de un cambio no quede suficientemente claro con el asunto y el diff del commit, usaremos el cuerpo del mensaje de commit para aportar un contexto y un por qué a dichos cambios. Esto es especialmente importante si existen soluciones alternativas a la implementada en el commit, ya que así los futuros mantenedores del código pueden saber por qué se elegió esa solución frente a otras alternativas.

Si el cambio realizado, además, puede tener consecuencias inesperadas o efectos secundarios en el resto del código, es importante especificarlo también en el mensaje de commit.

## Cómo deben ser los commits

> Tomado de [Guía Commits](https://github.com/retaLazyCodes/guia-commits).

Un *commit* es la actividad de guardar o subir los archivos que has modificado al repositorio en la rama en la que estás trabajando. **Las buenas prácticas invitan a hacer commit temprano y seguido**, siempre que:

1. El código no esté roto (que siempre compile)
2. Que el código no rompa las pruebas unitarias
3. Que no interfiera con el código de otro compañero

Esto permite volver a varios estados previos en caso de un bug difícil de rastrear. 

* Si confías en que puedes entregar los cambios correspondientes a toda la especificación sin problemas ya que la tarea no es muy compleja, entonces bastará con un solo commit.
* Si la tarea es demasiado compleja, divide la tarea en varias subtareas de modo que puedas asociar cada paso particular de la construcción a un commit específico.
* Si la tarea es simple, pero sin embargo consideras que te conviene más realizar varios commits por el motivo que sea, por ejemplo porque quieres entender mejor los cambios o te parece más ordenado, entonces hazlo de esa manera, no hay ningún problema. Si más tarde consideras que has hecho muchos commits para para algo muy simple, júntalos en uno solo.

Lo más importante es que **cada commit debe contener cambios funcionalmente completos** sin que rompan el código, los test unitarios ni generen conflictos.

Como ya sabrás, un commit están formado por los siguientes elementos:
* Ficheros que se han creado, modificado, renombrado o eliminado
* Un título de comentario 
* Un cuerpo del comentario

La [guía del *"Uso del Control de Versiones (SCM)"*](Guia-SCM.md#reglas-de-uso-del-control-de-versiones) ya establecía una serie recomendaciones sobre cómo debían ser los commits pero además, se debe añadir el hecho que sean *cambios funcionalmente completos*, como el conjunto aislado de modificaciones que implementan por sí solos una especificación concreta *(corregir un problema de visualización en FireFox, implementar un listado, añadir una nueva pantalla... )*.

> *El hecho de que los commits no contengan cambios funcionalmente completos, nos dice que estás usando el SCM como servidor de backup de tu directorio de trabajo...*

### Mensaje de los commits
Como sucede con el nombre de las ramas o el estilo del código fuente, existen diferentes criterios para escribir los mensajes de los commits:

* [Guía de estilo para Git](https://github.com/jeko2000/git-style-guide#commits)
* [Commits Convencionales](https://www.conventionalcommits.org/es/v1.0.0-beta.3/)
* [Buenas Prácticas en Commits de Git](https://codigofacilito.com/articulos/buenas-practicas-en-commits-de-git)

Para el desarrollo de proyectos en Java unificamos el criterio, de manera que **el mensaje del commit se ajuste al siguiente formato**:

```
tipo(ámbito): Resumen

Cuerpo del mensaje  [Opcional]

Pie del mensaje [Opcional]
```
Si quieres ajustarte a la norma tendrás que **usar un editor para escribir los mensajes de los commits y NO usar la consola ```git commit -m "blah, blah..."```**.

#### El título del mensaje
La primera línea del mensaje del commit debe ser descriptiva y concisa. Idealmente, esta línea **NO debe tener más de 50 caracteres**. Debe hacer uso correcto de mayúsculas y también **debe estar escrita en infinitivo**. 

* bien:  *"Marcar registros como obsoletos"*, *"Corregir visualización en Internet Explorer"*
* mal: *"Arreglo ActiveModel::Mensajes"*, *"Se entrega la documentación"*

El **tipo** podrá ser alguno de los siguientes:

* **```feat```**: Una nueva característica.
* **```fix```**:  Los cambios solucionan un bug.
* **```docs```**:  Las modificaciones introducen cambios en la documentación.
* **```style```**:  Se aplica formato, comas y puntos faltantes, etc; Sin cambios en el código.
* **```refactor```**:  Refactorización del código: Algo que ya está funcionando se reescribe para optimizarlo, simplificarlo, etc...
* **```test```**:  Se añaden o modifican pruebas; Sin cambios en el codigo de la aplicación.
* **```chore```**:  Actualización de tareas de build, configuraciones, etc; Sin cambios en el código de la aplicación.

El **ámbito** es opcional y vendrá referido a un módulo del programa. *Ejemplos: (api-rest), (lang), (css)...* 

#### El cuerpo del mensaje
Como no todos los commits son lo suficientemente complejos como para necesitar de una explicación y contextualización, **esta parte es opcional**. 

Después del título, **debe ir una línea en blanco seguida por** una descripción más a fondo del commit, **el cuerpo del mensaje** que se utilizará para **explicar el ¿Por qué? de un commit y no el ¿Cómo?**. 

Cada línea **deberá tener 72 caracteres o menos** y explicará la razón por la cual el cambio era necesario, y no cómo se ha hecho, que eso ya lo vemos en el diff del commit.

#### El pie del mensaje
El pie es opcional, al igual que el cuerpo, y se usa para poder hacer un seguimiento a los Issues (a través de menciones) u otros enlaces de interés que resulten de interés para comprender porqué se han aplicado estos cambios.

*Ejemplos:*

```
Closes: #56, #78
Véase también: #12, #34
Fuente http://tbaggery.com/2008/04/19/a-note-about-git-commit-messages.html
```

Para esto puede servir de ayuda: [Trucos en mensajes de los commits para GitHub](https://platzi.com/blog/trucos-en-mensajes-de-los-commits-para-github/)

## Recursos

- [Guía Commits](https://github.com/retaLazyCodes/guia-commits)
- [Buenas prácticas para escribir commits en Git](https://midu.dev/buenas-practicas-escribir-commits-git/)
- [The Git, the Bad and the Ugly](https://david-estevez.gitbooks.io/the-git-the-bad-and-the-ugly/content/es/)