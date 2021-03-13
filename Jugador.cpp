#include "Jugador.hpp"

Jugador::Jugador(string nombre){
	this->nombre = nombre;
}

string Jugador::getNombre(){
	return this->nombre;
}