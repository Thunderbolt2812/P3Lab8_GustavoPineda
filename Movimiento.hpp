#ifndef MOVIMIENTO_HPP
#define MOVIMIENTO_HPP
#include<iostream>
using namespace std;
class Movimiento{
	private:
		int ataque_fila;
		int ataque_col;
	public:
		Movimiento();
		Movimiento(int, int);
		void Imprimir();
};
#endif