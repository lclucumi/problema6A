# problema6A 

## Juego - ahorcado en C++

Universidad del Valle sede Tuluá.

Ingeniería de sistemas- Semestre 2.



**_Protegido por derecho de autor Copyright._**

### Autores:
Luz Carime Lucumí Hernández.


Verónica Montaño Sinisterra.


Stiven Pinzón Triana.


Alejandro Reyes Ibarguen.



### Prerrequisitos
Para jugar ahorcado se necesita que su ordenador cuente con:
Sistema operativo UBUNTU O WINDOWS

**--------------Para Ubuntu---------------------------**
- Sistema operativo Ubuntu 16.04.1 LTS. (para jugar ahorcadoUbuntu.cpp)
- El editor de texto Geany (para correr el archivo .cpp del juego).

**--------------Para Windows---------------------------**
- Cualquier versión del sistema operativo Windows. (para jugar ahorcadoWindows.cpp)
- Editor de texto Dev-C++.




### Para ejecutar el juego
Por favor utilice comandos g++ en el terminal, por ejemplo: 


g++ -c ahorcado.cpp 


g++ -o 'nombre del ejecutable' ahorcado.o. 

### ¿Cómo juego?
Al ejecutar el juego, este le proporcionará una serie de temas, 
(1. animales, 2.canciones, 3. lugares, 4. objetos, 5. películas), usted
debe elegir el número del tema del que desee que le sea asignada 
la palabra de juego, por ejemplo:

Si usted digita 1 y da enter, sabrá entonces que la palabra que debe 
adivinar corresponde al nombre de un animal (gaviota, serpiente, entre
otros), se le pedirá entonces ingresar una letra (debe ser minúscula, 
sin ñ, ni tildes) y dar enter, el programa le indicará si la letra
corresponde o no al animal y el número de intentos que tiene, tenga en 
cuenta que por cada letra que no corresponda a la palabra, se le restará
un intento, gana quien logre adivinar la palabra antes de perder todos 
los intentos (en total son 5 intentos).

## ¡Tener en cuenta!
* La letra que ingrese **NO PUEDE SER MAYÚSCULA, NO PUEDE CONTENER TILDES Y NO DEBE SER ñ (ni mayúscula ni minúscula)**.
* Presione enter una vez haya ingresado el número del tema a elegir, y la letra que crea que corresponda a la palabra.
* Solo puede escribir UNA letra.
* Inicialmente siempre tendrá 5 intentos, estos irán disminuyendo mientras se ingrese una letra que no pertenece a la palabra.


## En cuanto a código - Funcionamiento general
Se lee el tema elegido por el usuario, el cuál representa un archivo txt con diez palabras, al azar se elige una palabra 
de archivo mediante una variable random, con ifstream se recorre y se lee cada palabra y se elige una, se entra a evaluar entonces si la letra ingresada por el usuario corresponde o no a la palabra que se extrajo y mediante funciones obtenemos una interfaz que varía de acuerdo a la letra ingresada y los intentos que van hasta el momento.


> "Si puedes imaginarlo, puedes programarlo"



## ¡Disfruta el juego :D !


