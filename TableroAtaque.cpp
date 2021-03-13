#include "TableroAtaque.hpp"

TableroAtaque::TableroAtaque():Tablero(){
	
}
void TableroAtaque::Imprimir(){
	
}
bool TableroAtaque::ValidarMovimiento(Movimiento* m){
	bool validar,validar2 = true;
	int x=m->getFila();
	int y=m->getColumna();
	while(x<0||x>10){
		cout<<"Valor de X no es correcto"<<endl;
		validar2 = false;
	}
	while(y<0||y>10){
		cout<<"Valor de y no es correcto"<<endl;
		validar2 = false;
	}
	if(validar2){
		validar = true;
	}else{
		validar = false;
	}
	return validar;
}
void TableroAtaque::AplicarMovimiento(Movimiento* m2){
	for(int i = 0;i<10;i++){
		for(int j = 0;j<10;j++){
			if(this->celdas[i][j]=='-'){
				if(m2->getFila()==i&&m2->getColumna()==j){
					this->celdas[i][j] = 'O';
				}
			}else{
				if(m2->getFila()==i&&m2->getColumna()==j){
					this->celdas[i][j] = 'X';
				}
			}
		}
	}
}
bool TableroAtaque::VerificarVictoria(){
	bool validar;
	return validar;
}