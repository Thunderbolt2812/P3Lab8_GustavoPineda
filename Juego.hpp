#ifndef JUEGO_HPP
#define JUEGO_HPP
#include<vector>
#include<iostream>
#include "JugadorHumano.hpp"
#include "JugadorPc.hpp"
#include "TableroBarcos.hpp"
#include "TableroAtaque.hpp"
#include "Jugador.hpp"
using namespace std;
class Juego {
	private:
		TableroBarcos** tablerosBarcos;
		TableroAtaque** tablerosAtaque;
		Jugador** jugadores;
	public:
		Juego();
		~Juego();
		void PrepararJuego();
		void Jugar();
};
#endif