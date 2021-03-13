#include "Juego.hpp"

Juego::Juego(){
	jugadores=new Jugador*[2];
	tablerosBarcos = new TableroBarcos*[2];
	tablerosAtaque = new TableroAtaque*[2];
	tablerosBarcos[0]=new TableroBarcos();
	tablerosBarcos[1]=new TableroBarcos();
	tablerosAtaque[0]=new TableroAtaque();
	tablerosAtaque[1]=new TableroAtaque();
	for(int i=0; i<10; i++) {
		tablerosBarcos[0]->celdas.push_back(vector<char>());
		tablerosBarcos[1]->celdas.push_back(vector<char>());
		tablerosAtaque[0]->celdas.push_back(vector<char>());
		tablerosAtaque[1]->celdas.push_back(vector<char>());
	}
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			tablerosBarcos[0]->celdas[i].push_back('-');
			tablerosBarcos[1]->celdas[i].push_back('-');
			tablerosAtaque[0]->celdas[i].push_back('-');
			tablerosAtaque[1]->celdas[i].push_back('-');
		}
	}
}
Juego::~Juego(){
}

void Juego::PrepararJuego(){
	string nombre;
	cout<<"Jugador 1 Ingrese su nombre: ";
	cin>>nombre;
	jugadores[0] = new JugadorHumano(nombre);
	string nombre2;
	int opcion;
	cout<<"Ingrese el tipo de oponente"<<endl;
	cout<<"1) Humano"<<endl;
	cout<<"2) Pc"<<endl;
	cout<<"Opcion: ";
	cin>>opcion;
	cout<<endl;
	while(opcion<1||opcion>2){
		cout<<"Valor ingresado invalido, ingrese de nuevo: ";
		cin>>opcion;
	}
	if(opcion == 1){
		cout<<"Jugador 2 Ingrese su nombre: ";
		cin>>nombre2;
		jugadores[1] = new JugadorHumano(nombre2);
	}else{
		jugadores[1] = new JugadorPc("PC");
	}
	jugadores[0]->ColocarBarcos(tablerosBarcos[0]);
	cout<<"Coloque sus Barcos jugador 2"<<endl;
	jugadores[1]->ColocarBarcos(tablerosBarcos[1]);
}
void Juego::Jugar(){
	int j1x = 0,j2x = 0,cont = 1, x, y;
	while(j1x!=17||j2x!=17){
		cout<<"Turno: "<<cont<<endl;
		bool valido = false;
		while(!valido){
			cout<<"Jugador 1: Ingrese Coordenada x y y"<<endl;
			cout<<"x: ";
			cin>>x;
			cout<<endl;
			cout<<"y: ";
			cin>>y;
			cout<<endl;
			Movimiento* m = new Movimiento(x,y);
			if(tablerosAtaque[1]->ValidarMovimiento(m)){
				tablerosAtaque[1]->AplicarMovimiento(m);
				valido = true;
			}else{
				cout<<"Movimiento invalido"<<endl;
			}
		}
	}
	if(j1x==17){
		cout<<"El ganador es: "<<jugadores[0]->getNombre()<<endl;
	}else if(j2x==17){
		cout<<"El ganador es: "<<jugadores[1]->getNombre()<<endl;
	}
}