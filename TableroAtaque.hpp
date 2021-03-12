#ifndef TABLEROATAQUE_HPP
#define TABLEROATAQUE_HPP
#include<iostream>
#include"Tablero.hpp"
#include "Movimiento.hpp"
using namespace std;
class TableroAtaque: public Tablero {
	public:
		TableroAtaque(string nombre) ;
		void Imprimir();
		bool ValidarMovimiento(Movimiento*);
		void AplicarMovimiento(Movimiento*);
		bool VerificarVictoria();
};
#endif