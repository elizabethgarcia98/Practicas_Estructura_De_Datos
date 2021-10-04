#include <iostream>
#include <array>

using namespace std;

int main(){
	
	array<int, 5> numeros = {1, 2, 3, 4, 5};
	int inf = 0;							//Indice inferior
	int sup = (int) numeros.size() - 1; 	//Indice superior
	int med;								//Indice central
	int valor = 9, indice = -1; 			//Valor a buscar
	
	while(inf <= sup){
		
		//Valor esta en numeros [inf...sup] p no existe
		med = inf + (sup - inf) / 2;
		if(valor < numeros[med])
			sup = med - 1;
		else if(valor > numeros[med])
			inf = med + 1;
		else{
			indice = med;
			break;
		}	
	}
	
	cout << "El valor " << valor << "Esta en el indice: " << indice << endl;
	
	return 0;
	
}
