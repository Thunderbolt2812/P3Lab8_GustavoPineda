#include <iostream>
#include "JugadorPc.hpp"
#include "JugadorHumano.hpp"
#include "Jugador.hpp"
#include "Juego.hpp"
#include "Movimiento.hpp"
#include "Tablero.hpp"
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"


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
			Juego* j = new Juego();	
			j->PrepararJuego();
			j->Jugar();
			j->~Juego();
		}
	}
	return 0;
}