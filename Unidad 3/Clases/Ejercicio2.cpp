#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona{
	private: 
		string nombres;
		string apellidos;
		int anioNacimiento;
	
	public:
		Persona(string nombres, string apellidos, int anioNacimiento);
		string nombreCompleto();
		int edad();
	
};

//Inicializando constructor
Persona::Persona(string nombres, string apellidos, int anioNacimiento){
	
	this->nombres = nombres;
	this->apellidos = apellidos;
	this->anioNacimiento = anioNacimiento;
}

string Persona::nombreCompleto(){
	
	string nombreC;
	
	nombreC = this->nombres + " " + this->apellidos;
	
	return nombreC;
}

int Persona::edad(){
	
	int edad;
	
	time_t now = time(0);
	tm*  ltm = localtime(&now);
	
	int anioA = 1900 + ltm->tm_year;
	
	edad = (anioA - this->anioNacimiento);
	
	return edad;
}


int main(){
	
	string nombre;
	string apellidos;
	int anioNacimiento;
	
	cout << "Ingrese sus nombres: ";
	getline(cin, nombre);
	cout << "Igrese sus apellidos: ";
	getline(cin, apellidos);
	cout << "Ingrese su ano de nacimiento: ";
	cin >> anioNacimiento;
	
	Persona personas(nombre, apellidos, anioNacimiento);
	cout << endl;
	cout << " *** ------ DATOS DE LA PERSONA ------ **" << endl;
	cout << endl;
	cout << "Nombre Completo: " << personas.nombreCompleto() << endl;
	cout << "Edad: " << personas.edad() << endl;
	
	return 0;
}

