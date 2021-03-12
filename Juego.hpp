#ifndef JUEGO_HPP
#define JUEGO_HPP
#include<vector>
#include<iostream>
using namespace std;
class Juego {
	private:
		TableroBarcos** tablerosBarcos;
		TableroAtaque** tablerosAtaque;
		Jugador** jugadores;
	public:
		Juego(TableroBarcos**,TableroAtaque**,Jugador**) ;
		~Juego();
		void PrepararJuego();
		void Jugar();
};
#endif