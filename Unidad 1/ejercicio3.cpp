#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << "Inserta un numero: \n";
	cin >> x;
	cout << "Inserta otro numero: \n";
	cin >> y;
	cout << endl;
	
	x += y; //Equivale a x = x + 3;
	cout << x << endl;
	
	x -= y; //Equivale a x = x - 3;
	cout << x << endl;
	
	x *= y; //Equivale a x = x * 3;
	cout << x << endl;
	
	x /= y; //Equivale a x = x /y;
	cout << x << endl;
	
	x %= y;
	cout << x << endl;
	
	return 0;
	
}
