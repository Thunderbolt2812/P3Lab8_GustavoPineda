#ifndef TABLERO_HPP
#define TABLERO_HPP
#include<iostream>
using namespace std;
class Tablero {
	private:
		vector<vector<char>> celdas;
	public:
		Tablero(vector<vector<char>>) ;
		void Imprimir();
};
#endif