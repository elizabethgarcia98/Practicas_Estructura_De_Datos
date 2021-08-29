#include <iostream>

using namespace std;

int main(){
	
	float x;
	float y;
	float r;
	char op;
	
	cout << "Calculadora Sencilla" << endl;
	cout << "Numero 1: ";
	cin >> x;
	cout << endl;
	cout << "Numero 2: ";
	cin >> y;
	cout << endl;
	cout << " OPERACIONES ( + | - | * | /): ";
	cin >> op;
	
	switch(op){
		case '+':
			r = x + y;
			break;
		case '-':
			r = x - y;
			break;
		case '*':
			r = x * y;
			break;
		case '/':
			r = x / y;
			break;
		default:
			cout << "Operador no valido" << endl;
	}
	
	cout << "x " << op << " y = " << r << endl;
	
	return 0;
}
