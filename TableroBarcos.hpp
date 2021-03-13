#ifndef TABLEROBARCOS_HPP
#define TABLEROBARCOS_HPP
#include<iostream>
#include"Tablero.hpp"
#include"Movimiento.hpp"
using namespace std;
class TableroBarcos: public Tablero {
	public:
		TableroBarcos();
		virtual void Imprimir();
		bool AtaqueExitoso(Movimiento*);
};
#endif