#include <iostream>
#include <regex>
#include <iterator>
#include <string>
#include "pila.hpp"


using namespace std;

bool revisandoEtiquetas(string cadena);
	

int main(){
	
		string etiquetasNoBalanceadas = "<html><head><title>Pagina</title></head><body><h1><p>Hola Mundo</h1></p></body></html>";
		string etiquetasBalanceadas = "<html><head><title>Pagina</title></head><body><h1><p>Hola Mundo</p></h1></body></html>";
		
		cout << " *** COMPROBANDO BALANCEO DE ETIQUETAS HTML *** " << endl;
		cout << endl;
		if(revisandoEtiquetas(etiquetasNoBalanceadas)){
			cout << endl;
			cout << "etiquetas balanceadas " << endl;
		}else{
			cout << endl;
			cout << "etiquetas no balanceadas" << endl;
			cout << endl;
		}
		
		cout << endl;
		
		if(revisandoEtiquetas(etiquetasBalanceadas)){
			cout << endl;
			cout << "etiquetas balanceadas ";
		}else{
			cout << endl;
			cout << "etiquetas no balanceadas";
		}

		cout << endl;
		cout << endl;
		cout << "Desarrollado por Silvia Garcia" << endl;

	return 0;
}

bool revisandoEtiquetas(string etiquetas){
	
	Pila<string> pilaEtiquetas;
	
	regex words_regrex("<\\w+>|</\\w+>"); //Definiendo la expresion regular
	
	 auto words_begin = sregex_iterator(etiquetas.begin(), etiquetas.end(), words_regrex); //funcion para buscar expresiones regulares en un bucle.
	 auto words_end = sregex_iterator(); //Permite poder iterar con los resultados de la esprecion regular
	
	//Imprimiendo el HTML en evaluacion
	for(sregex_iterator i = words_begin; i != words_end; ++i){
		smatch match = *i; //puntero i
		string match_str = match.str();
		cout << match_str << endl;
	}
	
	//Evaluando si se encuentran en balance
	for(sregex_iterator i = words_begin; i != words_end; ++i){
		smatch match = *i; //puntero i
		string match_str = match.str(); // extraigo la etiqueta html en una variable
		if(match_str.substr(0,2) == "</"){
			if(pilaEtiquetas.estaPilaVacia()){
				return false;
			}else if(pilaEtiquetas.extraer() != match_str.replace(match_str.find("/"),1,"")){
				return false;
			}else{
				pilaEtiquetas.pop();
			}
		}else{
			pilaEtiquetas.push(match_str);
		}
	} 
		
	return pilaEtiquetas.estaPilaVacia();
}

