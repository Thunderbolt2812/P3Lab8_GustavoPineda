#ifndef TABLERO_HPP
#define TABLERO_HPP
#include<iostream>
#include<vector>
#include "Tablero.hpp"
class JugadorHumano;
class JugadorPC;
class Juego;
using namespace std;
class Tablero {
	friend class JugadorHumano;
	friend class JugadorPc;
	friend class Juego;
	protected:
		vector<vector<char>> celdas;
	public:
		Tablero();
		Tablero(vector<vector<char>>) ;
		virtual void Imprimir() = 0;
};
#endif