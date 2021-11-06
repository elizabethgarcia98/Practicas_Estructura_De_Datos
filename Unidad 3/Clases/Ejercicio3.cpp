#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Personaje{
	private:
		string nombre;
		int puntosVida;
		
		public:
			Personaje(string nombre, int puntosVida);
			void recibirGolpe(int puntosPerdidos);
			bool estaVivo();
			int getPuntosVida();
			string getNombre();
			void comer(int puntosGanados);
};

//Constructor
Personaje::Personaje(string nombre, int puntosVida){
	this->nombre = nombre;
	this->puntosVida = puntosVida;
}


//Puntos ganados
void Personaje::recibirGolpe(int puntosPerdidos){
	
	if(puntosPerdidos <= this->puntosVida){
		
		this->puntosVida -= puntosPerdidos;
	
	}else{
		
		cout << "No se ha podido dar el golpe" << endl;
		
		Personaje::comer(puntosPerdidos);
	}
	
	
	
}


//Estado del personaje
bool Personaje::estaVivo(){
	
	if(puntosVida > 0){
		return true;
	}else{
		return false;
	}
}

//Total de puntos
int Personaje::getPuntosVida(){
	
	return this->puntosVida;
}


//Nombre
string Personaje::getNombre(){
	
	return this->nombre;
}

//Puntos ganados
void Personaje::comer(int puntosGanados){
	
	bool resultado;
	
	resultado = Personaje::estaVivo();
	
	if(resultado == true){
		
		this->puntosVida += puntosGanados;
		
	}else{
		cout << "No se puede alimentar a un personaje muerto" << endl;
	}
	
}


int main(){
	
	bool resultado;
	string nombre;
	char resp;
	int golpes, puntosVida;
	
	srand(time(0));
	
	puntosVida = rand() % 10 + 1;
	
	cout << "Digite su nombre: "; 
	getline(cin, nombre);
	cout << endl;
	cout << "  **** ----- DATOS DE INICIO ---- ****" << endl;
	cout << endl;
	cout << "Nombre del jugador: " << nombre << endl;
	cout << "Puntos de Vida asignados: " << puntosVida << endl;
	
	Personaje personajes(nombre, puntosVida);
	
	do{
		cout << endl;
		golpes = rand() % 15 + 1;
		
		cout << "cantidad de golpes asignados: " << golpes << endl;
		personajes.recibirGolpe(golpes);
		cout << "Puntos : " << personajes.getPuntosVida() << endl;
		
		resultado = personajes.estaVivo();
		
		if(resultado){
			cout << "Su personaje esta vivo" << endl; 
		}
		else{
			cout << "Su personaje ha muerto" << endl;
			break;
		}
		
		cout << endl;
		cout << "Desea continuar? ";
		cin >> resp;
		cout << endl;
	} while(resp == 'S' || resp == 's');
	
	
	
	
	
	
	
	
	
}
