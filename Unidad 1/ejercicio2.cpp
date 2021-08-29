#include <iostream>
using namespace std;

int main(){
	double x;
	double y;
	
	cout << " ** Calcula operaciones aritmeticas de dos numeros *** \n";
	
	cout << "Inserta un numero: \n";
	cin >> x;
	cout << "Inserta otro numero: \n";
	cin >> y;
	
	cout << "Suma: " << x + y << endl;
	cout << "Resta: " << x - y << endl;
	cout << "Multiplicacion: " << x / y << endl;
	
	int z = x;
	int w = y;
	
	cout << "Residuo de la division: " << z % w << endl;
	
	++x;
	++y;
	cout << "Incremento en uno: " << "x: " << x << " y: " << y << endl;
	
	--x;
	--y; 
	cout << "Decremento en uno: " << "x: " << x << " y: " << y << endl;
	
	return 0;

}
