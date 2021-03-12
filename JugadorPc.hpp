#ifndef JUGADORPC_HPP
#define JUGADORPC_HPP
#include<vector>
#include<iostream>
using namespace std;
class JugadorPc : public Jugador {
	public:
		void ColocarBarcos(TableroBarcos*);
		void Jugar(TableroAtaque*);
};
#endif