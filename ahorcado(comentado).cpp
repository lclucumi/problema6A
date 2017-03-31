/*
 * Nombre del archivo: ahorcado(comentado).cpp
 * 
 * Descripción: Juego de ahorcado comentado, especificando
 * 				el por qué del uso de cada variable, librería
 * 				e iteración, su función es leer la letra ingresada
 * 				y verificar si está o no en la palabra que el 
 * 				juego asigna, gana quien logre adivinar la 
 * 				palabra sin haber perdido antes todos los 
 * 				intentos.
 * 
 * Autores: Luz Carime Lucumí Hernández - Verónica Montaño Sinisterra
 * 					201667564					201667570	
 * 			
 * 			   Stiven Pinzón Triana      - Alejandro Reyes Ibarguen
 * 					201667614					 201667528
 * 
 * Fecha de creación: Marzo 29 2017
 * 
 * Última fecha de modificación: Marzo 31 2017	
 *
 */

#include <iostream>
#include <string> 
#include <cstdlib> // Para poder ejecutar el system("clear")
#include <fstream>	//Para lectura de archivos
#include <time.h>	//Para generar el random

using namespace std;

void interfazPrincipal(){
		cout<<"***************************\n";
		cout<<"*        AHORCADO         *\n";
		cout<<"***************************\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"***************************\n";
		cout<<"Palabra: ";
	}
	
	void interfazCabeza(){
		cout<<"***************************\n";
		cout<<"*        AHORCADO         *\n";
		cout<<"***************************\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*         X     X         *\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"***************************\n";
		cout<<"Palabra: ";
	}
	
	void interfazTorso(){
		cout<<"***************************\n";
		cout<<"*        AHORCADO         *\n";
		cout<<"***************************\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*         X     X         *\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*            x            *\n";
		cout<<"*            x            *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"***************************\n";
		cout<<"Palabra: ";
	}
	
	void interfazIzquierda(){
		cout<<"***************************\n";
		cout<<"*        AHORCADO         *\n";
		cout<<"***************************\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*         X     X         *\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*        xxxxx            *\n";
		cout<<"*        x   x            *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"***************************\n";
		cout<<"Palabra: ";
	}
	
	void interfazDerecha(){
		cout<<"***************************\n";
		cout<<"*        AHORCADO         *\n";
		cout<<"***************************\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*         X     X         *\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*        xxxxxxxxx        *\n";
		cout<<"*        x   x   x        *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"*                         *\n";
		cout<<"***************************\n";
		cout<<"Palabra: ";
	}
	
	void interfazPiernas(){
		cout<<"***************************\n";
		cout<<"*        AHORCADO         *\n";
		cout<<"***************************\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*         X     X         *\n";
		cout<<"*         XXXXXXX         *\n";
		cout<<"*        xxxxxxxxx        *\n";
		cout<<"*        x   x   x        *\n";
		cout<<"*           x x           *\n";
		cout<<"*          x   x          *\n";
		cout<<"*                         *\n";
		cout<<"***************************\n";
		cout<<"Palabra: ";
	}


int main(){
	
	string palabra; 	//Palabra que se debe adivinar
	int tema;			//El tema que se eligirá para elegir una palara del txt al azar
	int posicion=-1;		//Contador que permitirá almacenar en la variable palabra una de las líneas del archivo txt
	int random;			//número que se generará para almacenar una palabra en la posición n del archivo txt
	string pantalla; 	//Sera la palabra con la que el usuario va a interactuar
	int intentos=5; 	//Numero de fallos permitidos
	char letra; 		//Almacenara la letra que el usuario digitara cada ves que se le indique
	bool comprobador = false; //Servira para verificar si la letra digitada pertenece a la palabra a adivinar

	srand(time(NULL));
	random=0+rand()%(9);
	
	
	cout<<"***************************\n";
	cout<<"*        AHORCADO         *\n";
	cout<<"***************************\n";
	cout<<"Por favor, elija un tema: \n1. Animales.\n2. Canciones.\n3. Lugares.\n4. Objetos.\n5. Peliculas.\n\nOpcion: ";
	
	cin>>tema;
	
	do{
		while (tema>5 || tema <1){
			system("clear");
			cout<<"¡ERROR! Por favor, asegúrese de elejir un tema existente.\n";
			cout<<"***************************\n";
			cout<<"*        AHORCADO         *\n";
			cout<<"***************************\n";
			cout<<"Por favor, elija un tema: \n1. Animales.\n2. Canciones.\n3. Lugares.\n4. Objetos.\n5. Peliculas.\n\nOpcion: ";
			
			cin>>tema;
		}
		switch (tema){
			case 1:
				for (int i=0; i<random ;i++){
					ifstream archivo("animales.txt"); //lee archivo txt
					while(random!=posicion){  //permite que se itere random veces, obteniendo la palabra de la posición random
					posicion+=1;			  //aumenta hasta ser igual a random, es decir, hasta obtener una palabra en 
											 //posición random en el archivo txt
					archivo>> palabra;
					}
				}
			break;
			case 2:
				for (int i=0; i<random ;i++){
					ifstream archivo("canciones.txt");
					while(random!=posicion){
					posicion+=1;
					archivo>> palabra;
					}
				}
			break;
			case 3:
				for (int i=0; i<random;i++){
					ifstream archivo("lugares.txt");
					while(random!=posicion){
					posicion+=1;
					archivo>> palabra;
					}
				}
			break;
			case 4:
				for (int i=0; i<random ;i++){
					ifstream archivo("objetos.txt");
					while(random!=posicion){
					posicion+=1;
					archivo>> palabra;
					}
				}
			break;
			case 5:
				for (int i=0; i<random ;i++){
					ifstream archivo("peliculas.txt");
					while(random!=posicion){
					posicion+=1;
					archivo>> palabra;
					}
				}
			break;
			default:
			 cout<<"¡ERROR! Por favor, asegúrese de elejir un tema existente.\n";
			break;
		}
	
	}while(tema<=0 && tema>5);
	
	system("clear");
	pantalla=palabra.length(); // Se le asignara a pantalla el mismo tamaño de la palabra a adivinar

	//	Se reemplazara la palabra adivinar por '-' y se almacenara en la variable pantalla	
	for(int i=0; i+1<palabra.length(); i++){
		pantalla=pantalla+'_';
	} 

		
	interfazPrincipal();
	cout<<pantalla<<endl;

	//Empezará el juego.
	//El juego seguirá hasta que el usuario gane o pierda todos sus intentos.
	while(intentos>0 and palabra != pantalla){
		
			
		cout<<"***************************\nIngrese una letra y presione enter: "; 
		cin>>letra; // El usuario ingresa una letra
		cout<<endl;
		for(int i=0; i<palabra.length(); i++){
			//Se empezará a validar si la letra ingresada es igual a alguna de la palabra a adivinar
			if(letra == palabra[i]){
				pantalla[i]=letra; //Si la palabra se encuentra: el '*' sera reemplazado por la letra: letra: j --> --> ---j---
				comprobador=true;	//Como la palabra se encuentra no se restaran intentos
			}
		}

		system("clear"); // Se refresca la pantalla

		interfazPrincipal();
		cout<<pantalla<<endl;

		// Imprime el resultado del bucle anterior
		//	system("clear");
		//  Si comprobador==false, esto implicara que la palabra ingresada no se encuentra lo que reducira el numero de intentos en -1

		if(comprobador==false){
			intentos--;
			system("clear");
			switch (intentos){
				case 0:
					interfazPiernas();
					cout<<pantalla<<endl;
					break;
				case 1:
					interfazDerecha();
					cout<<pantalla<<endl;
					break;
				case 2:
					interfazIzquierda();
					cout<<pantalla<<endl;
					break;
				case 3:
					interfazTorso();
					cout<<pantalla<<endl;
					break;
			    case 4:
					interfazCabeza();
					cout<<pantalla<<endl;
					break;
				default:
					interfazPrincipal();
					cout<<pantalla<<endl;
					break;
			 }
				
			cout<<"Le restan "<<intentos<<" Intentos"<<endl;
			
		}
		//la variable comprobador se reinicia a su estado original para que siga
		//haciendo la comprobacion cada ves que se le pida una letra al usuario
		comprobador=false;
	}
	
	//Termina el ciclo while
	//Al llegar aqui significa que el juego habra acabado	
	//caso 1. acabara tras haber agotado todos sus intentos lo que implica que el usuario perdio
	if(intentos==0){
		cout<<"\n\t:: Has perdido :( ::\n\n"; 
	}else{ 
	//caso 2. La palabra a adivinar y la digitada por el usuario son iguales, esto significa que el usuario gano		
		cout<<"\n\t:: ¡Felicidades, has ganado! :) ::\n\n";
	}

}
