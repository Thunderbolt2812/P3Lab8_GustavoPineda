#ifndef TABLERO_HPP
#define TABLERO_HPP
#include<iostream>
#include<vector>
using namespace std;
class Tablero {
	protected:
		vector<vector<char>> celdas;
	public:
		Tablero();
		Tablero(vector<vector<char>>) ;
		virtual void Imprimir() = 0;
};
#endif