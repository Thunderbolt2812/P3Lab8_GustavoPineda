#ifndef JUGADORHUMANO_HPP
#define JUGADORHUMANO_HPP
#include<vector>
#include<iostream>
using namespace std;
class JugadorHumano : public Jugador {
	public:
		void ColocarBarcos(TableroBarcos*);
		void Jugar(TableroAtaque*);
};
#endif