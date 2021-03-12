#ifndef JUGADORPC_HPP
#define JUGADORPC_HPP
#include<vector>
#include<iostream>
#include "Jugador.hpp"
#include "Movimiento.hpp"
using namespace std;
class JugadorPc : public Jugador {
	public:
		JugadorPc(string);
		virtual void ColocarBarcos(TableroBarcos*);
		virtual Movimiento Jugar(TableroAtaque*);
};
#endif