#include <iostream>
#include <array>

using namespace std;

int main(int argc, char *argv[]){
	array<int, 3> a = {8,9,10};
	
	cout << a.size() << endl; //Tamanio del arreglo
	cout << a.front() << endl; //Primer elemento del arreglo
	cout << a.back() << endl; //Ultimo elemento del arreglo
	
	cout << a[0] << a[1] << a[2] << endl;
	
	return 0;
}
