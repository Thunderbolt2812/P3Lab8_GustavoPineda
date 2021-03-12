#ifndef JUGADORHUMANO_HPP
#define JUGADORHUMANO_HPP
#include<vector>
#include<iostream>
#include "Jugador.hpp"
#include "Movimiento.hpp"
using namespace std;
class JugadorHumano : public Jugador {
	public:
		JugadorHumano(string);
		virtual void ColocarBarcos(TableroBarcos*);
		virtual Movimiento Jugar(TableroAtaque*);
};
#endif