/*
 * Nombre del archivo: ahorcadoWindows.cpp
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
#include <stdlib.h> //librería para ejecutar el system("cls")
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
		cout<<"*         x     x         *\n";
		cout<<"*                         *\n";
		cout<<"***************************\n";
		cout<<"Palabra: ";
	}


int main(){
	
	int tema;		 
	int posicion=-1;  
	int random;     
	string palabra;  
	string pantalla; 
	int intentos=5;  
	char letra;      
	bool comprobar = false;
	
	srand(time(NULL)); 
	random = 0 + rand() % (9);
	
	cout<<"***************************\n";
	cout<<"*        AHORCADO         *\n";
	cout<<"***************************\n";
	cout<<"Por favor, elija un tema: \n1. Animales.\n2. Canciones.\n3. Lugares.\n4. Objetos.\n5. Peliculas.\n\nOpcion: ";
	
	cin>>tema;
	
	do{
		while(tema>5 || tema<1){
			
			system("cls"); //Limpia pantalla Windows
			cout<<"Por favor ingrese una opcion valida\n";
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
	}
		
	}while(tema<=0 and tema>5);
	
	system("cls");
	pantalla=palabra.length();
	
	for(int i=0; i+1<palabra.length(); i++){
		pantalla=pantalla+'-';
	} 

	interfazPrincipal();
	cout<<pantalla<<endl;
	
	while(intentos>0 and palabra != pantalla){
		
		cout<<"Ingrese una letra: "; cin>>letra;
		cout<<endl;
		
		for(int i=0; i<palabra.length(); i++){
			if(letra == palabra[i]){
				pantalla[i]=letra;
				comprobar=true;
			}
		}
		
		system("cls");
		interfazPrincipal();
			
		cout<<pantalla<<endl;
	
		if(comprobar==false){
		intentos--;
		}
		
		system("cls"); 
		
		switch(intentos){
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
		}
		
			cout<<"Le restan "<<intentos<<" Intentos"<<endl;
	
		comprobar=false;
	}
	
	if(intentos==0){
		cout<<"\n\t:: Tenemos un PERDEDOOOOOOR ::\n\t:: La palabra era: "<<palabra<<" ::"<<endl; 
	}else{
		cout<<"\n\t:: Fue pura SUERTE! ::";
	}
	
	return 0;
}
