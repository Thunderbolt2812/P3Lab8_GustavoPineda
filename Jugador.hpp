#ifndef JUGADOR_HPP
#define JUGADOR_HPP
#include<vector>
#include<iostream>
#include"TableroAtaque.hpp"
#include"TableroBarcos.hpp"
using namespace std;
class Jugador {
	private:
		string Nombre;
	public:
		Jugador(string) ;
		Movimiento Jugar(TableroAtaque*);
		void ColocarBarcos(TableroBarcos*);
};
#endif