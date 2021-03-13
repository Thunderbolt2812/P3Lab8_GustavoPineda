#include "JugadorHumano.hpp"

JugadorHumano::JugadorHumano(string nombre):Jugador(nombre){}

void JugadorHumano::ColocarBarcos(TableroBarcos* b){
	//Aircraft Carrier
	
	int opcion = 0;
	cout<<"Como desea posiscionar el barco Aircraft Carrier"<<endl;
	cout<<"1) Vertical"<<endl;
	cout<<"2) Horizontal"<<endl;
	cout<<"Opcion: ";
	cin>>opcion;
	cout<<endl;
	while(opcion<1||opcion>2){
		cout<<"Opcion invalida ingrese dato de nuevo: ";
		cin>>opcion;
	}
	cout<<endl;
	int x,y;
	cout<<"Ingrese posicion x y donde se colocaria la cabeza del barco: "<<endl;
	cout<<"x: ";
	cin>>x;
	cout<<"y: ";
	cin>>y;
	while(opcion==1&&x+5>10){
		cout<<"Verifique que la posicion en x sea entre 1 y 5 ya que los espacios del barco son 5"<<endl;
		cout<<"Ingrese el x otra vez: ";
		cin>>x;
	}
	while(opcion==2&&y+5>10){
		cout<<"Verifique que la posicion en y sea entre 1 y 5 ya que los espacios del barco son 5"<<endl;
		cout<<"Ingrese el y otra vez: ";
		cin>>y;
	}
	if(opcion==1){
		for(int i = 0;i<5;i++){
			b->celdas[x][y]='A';
			x++;
		}
	}
	if(opcion==2){
		for(int i = 0;i<5;i++){
			b->celdas[x][y]='A';
			y++;
		}
	}
	//Battleship
	b->Imprimir(b);
	int opcion2 = 0;
	cout<<"Como desea posiscionar el barco Battleship"<<endl;
	cout<<"1) Vertical"<<endl;
	cout<<"2) Horizontal"<<endl;
	cout<<"Opcion: ";
	cin>>opcion2;
	cout<<endl;
	while(opcion2<1||opcion2>2){
		cout<<"Opcion invalida ingrese dato de nuevo: ";
		cin>>opcion2;
	}
	cout<<endl;
	int x2,y2;
	cout<<"Ingrese posicion x y donde se colocaria la cabeza del barco: "<<endl;
	cout<<"x: ";
	cin>>x2;
	cout<<"y: ";
	cin>>y2;
	while(opcion2==1 && x2+4>10){
		cout<<"Verifique que la posicion en x sea entre 1 y 6 ya que los espacios del barco son 4"<<endl;
		cout<<"Ingrese el x otra vez: ";
		cin>>x2;
	}
	cout<<endl;
	while(opcion2==2 && y2+4>10){
		cout<<"Verifique que la posicion en y sea entre 1 y 6 ya que los espacios del barco son 4"<<endl;
		cout<<"Ingrese el y otra vez: ";
		cin>>y2;
	}
	cout<<endl;
	if(opcion2==1){
		for(int i = 0;i<4;i++){
			b->celdas[x2][y2]='B';
			x2++;
		}
	}
	if(opcion2==2){
		for(int i = 0;i<4;i++){
			b->celdas[x2][y2]='B';
			y2++;
		}
	}
	b->Imprimir(b);
	//Cruiser 
	int opcion3 = 0;
	cout<<"Como desea posiscionar el barco Cruiser"<<endl;
	cout<<"1) Vertical"<<endl;
	cout<<"2) Horizontal"<<endl;
	cout<<"Opcion: ";
	cin>>opcion3;
	cout<<endl;
	while(opcion3<1||opcion3>2){
		cout<<"Opcion invalida ingrese dato de nuevo: ";
		cin>>opcion3;
	}
	cout<<endl;
	int x3,y3;
	cout<<"Ingrese posicion x y donde se colocaria la cabeza del barco: "<<endl;
	cout<<"x: ";
	cin>>x3;
	cout<<"y: ";
	cin>>y3;
	while(opcion3==1 && x3+3>10){
		cout<<"Verifique que la posicion en x sea entre 1 y 7 ya que los espacios del barco son 3"<<endl;
		cout<<"Ingrese el x otra vez: ";
		cin>>x3;
	}
	cout<<endl;
	while(opcion3==2 && y3+3>10){
		cout<<"Verifique que la posicion en y sea entre 1 y 7 ya que los espacios del barco son 3"<<endl;
		cout<<"Ingrese el y otra vez: ";
		cin>>y3;
	}
	cout<<endl;
	if(opcion3==1){
		for(int i = 0;i<3;i++){
			b->celdas[x3][y3]='c';
			x3++;
		}
	}
	if(opcion3==2){
		for(int i = 0;i<3;i++){
			b->celdas[x3][y3]='c';
			y3++;
		}
	}
	b->Imprimir(b);
	//Submarine
	int opcion4 = 0;
	cout<<"Como desea posiscionar el barco Submarine"<<endl;
	cout<<"1) Vertical"<<endl;
	cout<<"2) Horizontal"<<endl;
	cout<<"Opcion: ";
	cin>>opcion4;
	cout<<endl;
	while(opcion4<1||opcion4>2){
		cout<<"Opcion invalida ingrese dato de nuevo: ";
		cin>>opcion4;
	}
	cout<<endl;
	int x4,y4;
	cout<<"Ingrese posicion x y donde se colocaria la cabeza del barco: "<<endl;
	cout<<"x: ";
	cin>>x4;
	cout<<"y: ";
	cin>>y4;
	while(opcion4==1 && x4+3>10){
		cout<<"Verifique que la posicion en x sea entre 1 y 7 ya que los espacios del barco son 3"<<endl;
		cout<<"Ingrese el x otra vez: ";
		cin>>x4;
	}
	cout<<endl;
	while(opcion4==2 && y4+3>10){
		cout<<"Verifique que la posicion en y sea entre 1 y 7 ya que los espacios del barco son 3"<<endl;
		cout<<"Ingrese el y otra vez: ";
		cin>>y4;
	}
	cout<<endl;
	if(opcion4==1){
		for(int i = 0;i<3;i++){
			b->celdas[x4][y4]='S';
			x4++;
		}
	}
	if(opcion4==2){
		for(int i = 0;i<3;i++){
			b->celdas[x4][y4]='S';
			y4++;
		}
	}
	b->Imprimir(b);
	//Destroyer
	int opcion5 = 0;
	cout<<"Como desea posiscionar el barco Submarine"<<endl;
	cout<<"1) Vertical"<<endl;
	cout<<"2) Horizontal"<<endl;
	cout<<"Opcion: ";
	cin>>opcion5;
	cout<<endl;
	while(opcion5<1||opcion5>2){
		cout<<"Opcion invalida ingrese dato de nuevo: ";
		cin>>opcion5;
	}
	cout<<endl;
	int x5,y5;
	cout<<"Ingrese posicion x y donde se colocaria la cabeza del barco: "<<endl;
	cout<<"x: ";
	cin>>x5;
	cout<<"y: ";
	cin>>y5;
	while(opcion5==1 && x5+2>10){
		cout<<"Verifique que la posicion en x sea entre 1 y 8 ya que los espacios del barco son 2"<<endl;
		cout<<"Ingrese el x otra vez: ";
		cin>>x5;
	}
	cout<<endl;
	while(opcion5==2 && y5+2>10){
		cout<<"Verifique que la posicion en y sea entre 1 y 8 ya que los espacios del barco son 2"<<endl;
		cout<<"Ingrese el y otra vez: ";
		cin>>y5;
	}
	cout<<endl;
	if(opcion5==1){
		for(int i = 0;i<2;i++){
			b->celdas[x5][y5]='D';
			x5++;
		}
	}
	if(opcion5==2){
		for(int i = 0;i<2;i++){
			b->celdas[x5][y5]='D';
			y5++;
		}
	}
	b->Imprimir(b);
}
Movimiento JugadorHumano::Jugar(TableroAtaque* a){
	Movimiento res;
	return res;
}