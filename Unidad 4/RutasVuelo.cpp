#include <iostream>
#include <fstream>		// procesar archivos de texto
#include <string>		// cadenas de caracteres
#include <sstream>		// flujos de cadenas de caracteres
#include <vector>		// vectores (similares a los arrelgos, pero pueden crecer dinamicamente)
#include <list> 
#include <map>			// mapas (funcionan como los arboles binarios)
#include <iterator>

#include "Digrafo.h"
#include "RutaBFS.h"

using std::ifstream;		// sirve para porcesar archivos de texto
using std::string;
using std::cout;
using std::cin;
using std::stoi;			// convertir cadenas a enteros
using std::endl;
using std::istringstream;	// flujo de caracteres de entrada
using std::vector;
using std::map; 			// mapas
using std::pair;			// pares clave-valor de un mapa
using std::list;
using std::iterator;

map<string, int> codigosCiudades;
vector<string> ciudades;

Digrafo rutas;

void procesarArchivoCiudades(string nombreArchivo){
	cout << "Abriendo archivo de ciudades: " << nombreArchivo << "..." << endl;
	ifstream archivo(nombreArchivo);
	string ciudad;
	
	if(!archivo.is_open()){
		cout << "No se pudo abrir el archivo de ciudades. \n";
		return;
	}
	
	cout << "\nProcesando archivo de ciudades..." << endl;
	
	vector<string> fila;
	int numeroVertices = 0;
	while(getline(archivo, ciudad)){
		codigosCiudades.insert(pair<string, int>(ciudad, numeroVertices++));
		ciudades.push_back(ciudad);
		cout << "Se agrego la ciudad " << ciudad << endl;
	}
	
	cout << "Cerrando archivo de ciudades" << nombreArchivo << "..." << endl;
	archivo.close();
	
	cout << endl;
}

void procesarArchivoVuelos(string nombreArchivo){
	cout << "Abriendo archivo de vuelos " << nombreArchivo << "..." << endl;
	ifstream archivo(nombreArchivo);
	string linea, token;
	string origen, destino;
	
	if(!archivo.is_open()){
		cout << "No se pudo abrir el archivo de vuelos. \n";
		return;
	}
	
	cout << "\nProcesando archivos de vuelos..." << endl;
	
	// crear el grafo
	// obtener el numero de aristas
	rutas.setVertices(ciudades.size());
	
	vector<string> fila;
	while(getline(archivo, linea)){
		fila.clear();
		istringstream ss(linea);
		while(getline(ss, token, ',')){
			fila.push_back(token);
		}
		origen = fila[0];
		destino = fila[1];
		rutas.agregarArista(codigosCiudades[origen], codigosCiudades[destino]);
		cout << "Se agrego el vuelo " << origen << " -> " << destino << endl;
	}
	
	cout << "Cerrando archivo de vuelos" << nombreArchivo << "..." << endl;
	archivo.close();
	
	cout << endl;
	
	cout << "Se creo el siguiente grafo: " << endl;
	
	rutas.imprimir();
	
	cout << endl;
}

void procesarSolicitudVuelo(){
	string ciudadOrigen, ciudadDestino;
	
	cout << "Ciudad de origen: ";
	getline(cin, ciudadOrigen);
	
	if(codigosCiudades.count(ciudadOrigen) == 0) {
		cout << "Lo siento, no volamos hacia esa ciudad. "<< endl;
		return;
	}
	
	cout << "Ciudad destino: ";
	getline(cin, ciudadDestino);
	
	if(codigosCiudades.count(ciudadDestino) == 0) {
		cout << "Lo siento, no volamos hacia esa ciudad. "<< endl;
		return;
	}
	
	RutaBFS itinerario(rutas, codigosCiudades[ciudadOrigen]);
	
	if(!itinerario.existeCaminoHacia(codigosCiudades[ciudadDestino])){
		cout << "No se pudo encontrar un itinerario de vuelo. " << endl; 
	}else{
		cout << "Itinerario sugerido: " << endl;
		list<int>::iterator it;
		list<int> conexiones = itinerario.getRutaHacia(codigosCiudades[ciudadDestino]);
		for(it = conexiones.begin(); it != conexiones.end(); it++){
			int codigo = *it;
			if(codigo == codigosCiudades[ciudadDestino]){
				cout << ciudadDestino << endl;
			}else{
				cout << ciudades[codigo] << " -> ";
			}
		}
	}
}

int mostrarMenu(){
	string eleccion;
	cout << "\nMenu principal" << endl;
	cout << "1- Buscar vuelo" << endl;
	cout << "2- Salir" << endl;
	cout << "Su eleccion: ";
	getline(cin, eleccion);
	cout << endl;
	return stoi(eleccion);
}

int main(){
	procesarArchivoCiudades("ciudades.txt");
	procesarArchivoVuelos("vuelos.txt");
	
	int opcion = mostrarMenu();
	
	while(opcion != 2){
		procesarSolicitudVuelo();
		opcion = mostrarMenu();
	}
	
	return 0;
}
