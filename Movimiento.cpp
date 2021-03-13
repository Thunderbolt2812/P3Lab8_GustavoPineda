#include "Movimiento.hpp"

Movimiento::Movimiento(int ataque_fila, int ataque_col){
	this->ataque_fila=ataque_fila;
	this->ataque_col=ataque_col;
}
Movimiento::Movimiento(){}
void Imprimir(){
	
}
int Movimiento::getFila(){
	return this->ataque_fila;
}
int Movimiento::getColumna(){
	return this->ataque_col;
}