/*
 * Nombre del archivo: ahorcadoUbuntu.cpp
 * 
 * Descripción: Juego de ahorcado, lee la letra ingresada y 
 * 				verifica si está o no en la palabra que el 
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
#include <cstdlib> //Librería para ejecutar el system("clear")
#include <fstream>
#include <time.h>

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
	
	string palabra;
	int tema;			
	int posicion=-1;		
	int random;			
	string pantalla; 	
	int intentos=5; 	
	char letra; 		
	bool comprobador = false; 

	srand(time(NULL));
	random=0+rand()%(9);
	
	
	cout<<"***************************\n";
	cout<<"*        AHORCADO         *\n";
	cout<<"***************************\n";
	cout<<"Por favor, elija un tema: \n1. Animales.\n2. Canciones.\n3. Lugares.\n4. Objetos.\n5. Peliculas.\n\nOpcion: ";
	
	cin>>tema;
	
	do{
		while (tema>5 || tema <1){
			
			system("clear"); //Limpia pantalla Ubuntu
			
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
					ifstream archivo("animales.txt");
					while(random!=posicion){  
					posicion+=1;			  
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
	pantalla=palabra.length(); 

	for(int i=0; i+1<palabra.length(); i++){
		pantalla=pantalla+'_';
	} 

		
	interfazPrincipal();
	cout<<pantalla<<endl;

	while(intentos>0 and palabra != pantalla){
		
			
		cout<<"***************************\nIngrese una letra y presione enter: "; 
		cin>>letra; 
		cout<<endl;
		for(int i=0; i<palabra.length(); i++){
			if(letra == palabra[i]){
				pantalla[i]=letra;
				comprobador=true;
			}
		}

		system("clear"); // Se refresca la pantalla

		interfazPrincipal();
		cout<<pantalla<<endl;

		if(comprobador==false){
			intentos--;
		}
		
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
		
		comprobador=false;
	}

	if(intentos==0){
		cout<<"\n\t:: Has perdido :( ::\n\n"; 
	}else{ 		
		cout<<"\n\t:: ¡Felicidades, has ganado! :) ::\n\n";
	}

}
