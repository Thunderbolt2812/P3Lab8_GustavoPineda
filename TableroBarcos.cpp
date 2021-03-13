#include "TableroBarcos.hpp"
TableroBarcos::TableroBarcos():Tablero(){
	
}
void TableroBarcos::Imprimir(TableroBarcos* b){
	for(int i = 0;i<10;i++){
		for(int j = 0;j<10;j++){
			cout<<"["<<b->celdas[i][j]<<"] ";
		}
		cout<<endl;
	}
}
bool TableroBarcos::AtaqueExitoso(Movimiento*){
	bool exitoso;
	return exitoso;
}