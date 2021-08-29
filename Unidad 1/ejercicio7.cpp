#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << "Inserta un numero: \n";
	cin >> x;
	cout << "Inserta otro numero: \n";
	cin >> y;
	
	bool var1 = true;
	bool var2 = false;
	
	cout << "Valores" << endl;
	cout << var1 << endl;
	cout << var2 << endl;
	//  0 = false y 1 = true
	
	cout << (x < y) << endl; //menor que
	cout << (x > y) << endl; //mayor que
	cout << (x <= y) << endl; //menor o igual
	cout << (x >= y) << endl; //mayor o igual
	cout << (x != y) << endl; //diferente que
	cout << (x == y) << endl; //igual que
	
	return 0;
	
	
}
