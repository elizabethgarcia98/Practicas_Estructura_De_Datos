#include <iostream>
#include <iomanip>

//Creamos un arreglo al declarar la funcion
float promedio(const float arr[], const int n){
	float suma = 0.0;
	for(int i = 0; i < n; i++)
		suma += arr[i];
	return suma / n;
}

int main(int arg, const char * argv[]){
	using namespace std;
	
	//Promedio de 5 numeros
	const int N = 5;
	float numeros[N];
	
	for(int i = 0; i < N; i++){
		cout << "Numero " << (i + 1) << ": ";
		cin >> numeros[i];
	}
	
	cout << "El promedio es " << fixed << setprecision(1);
	cout << promedio(numeros, N) << endl;
	
	return 0;
	

}
