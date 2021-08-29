#include <iostream>
#include <limits> //Incluye la libreria para poder utilizar las funciones de limits 

using namespace std;

int main(){
	
	int imin = numeric_limits<int>::min(); //Valor minimo que puede tener un integer
	int imax = numeric_limits<int>::max(); //Valor maximo que puede tener un integer
	
	cout << "El valor minimo de un entero es: " << imin << endl;
	cout << "El valor maximo de un entero es: " << imax << endl;
	cout << "El tamanio de un entero es: " << sizeof(int) << endl;
	cout << endl;
	
	
	float fmin = numeric_limits<float>::min(); //Valor minimo que puede tener un float
	float fmax = numeric_limits<float>::max(); //Valor maximo que puede tener un float
	
	cout << "El valor minimo de un float es: " << fmin << endl;
	cout << "El valor maximo de un float es: " << fmax << endl;
	cout << "El tamanio de un float es: " << sizeof(float) << endl;
	cout << endl;
	
	double dmin = numeric_limits<double>::min(); //Valor minimo que puede tener un double
	double dmax = numeric_limits<double>::max(); //Valor maximo que puede tener un double
	
	cout << "El valor minimo de un double es: " << dmin << endl;
	cout << "El valor maximo de un double es: " << dmax << endl;
	cout << "El tamanio de un double es: " << sizeof(double) << endl;
	cout << endl;
	
	
	bool bmin = numeric_limits<bool>::min(); //Valor minimo que puede tener un boolean
	bool bmax = numeric_limits<bool>::max(); //Valor maximo que puede tener un boolean
	
	cout << "El valor minimo de un boolean es: " << bmin << endl;
	cout << "El valor maximo de un boolean es: " << bmax << endl;
	cout << "El tamanio de un boolean es: " << sizeof(bool) << endl;
	cout << endl;
	
	
	
	char cmin = numeric_limits<char>::min(); //Valor minimo que acepta un char
	char cmax = numeric_limits<char>::max(); //Valor maximo que acepta un char
	
	cout << "El valor minimo de un char es: " << cmin << endl;
	cout << "El valor maximo de un char es: " << cmax << endl;
	cout << "El tamanio de un char es: " << sizeof(char) << endl;
	cout << endl;
	
	
	short int simin = numeric_limits<short int>::min(); //Valor minimo que puede tener una variable de tipo short int
	short int simax = numeric_limits<short int>::max(); //Valor maximo que puede tener una variable de tipo short int
	
	cout << "El valor minimo de un short int es: " << simin << endl;
	cout << "El valor maximo de un short int es: " << simax << endl;
	cout << "El tamanio de un short int es: " << sizeof(short int) << endl;
	cout << endl;
	
	
	long int limin = numeric_limits<long int>::min(); //Valor minimo que puede tener una variable de tipo long int
	long int limax = numeric_limits<long int>::max(); //Valor maximo que puede tener una variable de tipo loong int
	
	cout << "El valor minimo de un long int es: " << limin << endl;
	cout << "El valor maximo de un long int es: " << limax << endl;
	cout << "El tamanio de un long int es: " << sizeof(long int) << endl;
	cout << endl;
	
	
	
	long double ldmin = numeric_limits<long double>::min(); //Valor minimo que puede tener una variable de tipo long double
	long double ldmax = numeric_limits<long double>::max(); //Valor maximo que puede tener una variable de tipo long double
	
	cout << "El valor minimo de un long double es: " << ldmin << endl;
	cout << "El valor maximo de un long double es: " << ldmax << endl;
	cout << endl;
	
	return 0;
}
