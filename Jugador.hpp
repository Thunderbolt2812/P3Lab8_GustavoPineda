#ifndef JUGADOR_HPP
#define JUGADOR_HPP
#include<vector>
#include<iostream>
#include"TableroAtaque.hpp"
#include"TableroBarcos.hpp"
using namespace std;
class Jugador {
	protected:
		string nombre;
	public:
		Jugador(string) ;
		virtual Movimiento Jugar(TableroAtaque*) = 0;
		virtual void ColocarBarcos(TableroBarcos*) = 0;
};
#endif