#include "TableroBarcos.hpp"
TableroBarcos::TableroBarcos():Tablero(){
	
}
TableroBarcos::TableroBarcos(vector<vector<char>> celdas) :Tablero(celdas){
	this->celdas=celdas;
}
void TableroBarcos::Imprimir(){
	
}
bool TableroBarcos::AtaqueExitoso(Movimiento*){
	bool exitoso;
	return exitoso;
}