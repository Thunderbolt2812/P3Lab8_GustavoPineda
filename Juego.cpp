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
Juego::~Juego(){}

void Juego::PrepararJuego(){
	string nombre;
	cout<<"Jugador 1 Ingrese su nombre: ";
	cin>>nombre;
	JugadorHumano j1 = JugadorHumano(nombre);
	jugadores[0] = &j1;
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
		JugadorHumano j2 = JugadorHumano(nombre2);
		jugadores[1] = &j2;
	}else{
		JugadorHumano j2 = JugadorHumano("Pc");
		jugadores[1] = &j2;
	}
	jugadores[0]->ColocarBarcos(tablerosBarcos[0]);
	jugadores[1]->ColocarBarcos(tablerosBarcos[1]);
}
void Juego::Jugar(){
	int j1x = 0,j2x = 0;
	while(j1x!=17||j2x!=17){
		
	}
	if(j1x==17){
		cout<<"El ganador es: "<<jugadores[0]->getNombre()<<endl;
	}else if(j2x==17){
		cout<<"El ganador es: "<<jugadores[1]->getNombre()<<endl;
	}
}