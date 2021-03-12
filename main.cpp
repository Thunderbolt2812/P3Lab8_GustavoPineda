#include <iostream>
#include "JugadorHumano.hpp"
#include "Jugador.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int opcion = 0;
	while(opcion!=2){
		cout<<"Ingrese Opcion: "<<endl;
		cout<<"1) Iniciar Juego"<<endl;
		cout<<"2) Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		if(opcion==1){
			int opcion2 = 0;
			int cont = 0;
			if(cont != 2){
				cout<<"Ingrese Opcion: "<<endl;
				cout<<"1) Jugador vs Jugador"<<endl;
				cout<<"2) Jugador vs Pc"<<endl;
				cout<<"Opcion: ";
				cin>>opcion2;
				if(opcion2 == 1){
					string nombre;
					cout<<"Jugador 1 Ingrese su nombre: ";
					cin>>nombre;
					Jugador j1 = JugadorHumano(nombre);
					string nombre2;
					cout<<"Jugador 2 Ingrese su nombre: ";
					cin>>nombre2;
					Jugador j2 = JugadorHumano(nombre2);					
				}
			}	
		}
	}
	return 0;
}