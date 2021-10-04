#include <iostream>

using namespace std;
int main(){

int a = 5, b = 10;
 int *p1, *p2;
p1 = &a;
p2 = &b;

cout << "p1 = " << p1 << "* p1: " << *p1 << endl;
cout << "p2 = " << p2 << "* p2: " << *p2 << endl;
cout << endl;
//*p1 = 10;
*p1 = *p2;
cout << "p1 = " << p1 << "* p1: " << *p1 << endl;
cout << "p2 = " << p2 << "* p2: " << *p2 << endl;
cout << endl;
*p1 = 20;


cout << "a =" << a << endl;
cout << "b = " << b << endl;

return 0; 

/*int c[5] = {1,2,3,4,5};
int *p3;
p3 = &c[1]; // obtiene la dirección de este elemento
cout << "*p3 = " << *p3 << endl;
p3++; // apunta al siguiente elemento
cout << "*p3 = " << *p3 << endl; */

/*int c[5] = {1,2,3,4,5};
int *p3;
p3 = &c[1]; // obtiene la dirección de este elemento
int sam;
sam = *(p3+3);
cout << "*p3 = " << *p3 << endl;
cout << "sam = " << sam << endl; */

/*int **ramon; 
int *paul; 
int melissa = 5; 
cout << "&melissa = " << &melissa << endl; //imprime el espacio de memoria de melissa
cout << endl;
paul = &melissa;  // el apuntador paul almacena el valor de memoria de melissa
cout << "paul = " << paul << endl;  //Imprime lo que almacena paul
cout << endl;
ramon = &paul;  //Ramon almacena el valor de memoria de paul 
cout << "ramon = " << ramon << endl;  //ramon imprime el valor de memoria de paul
cout << "&paul = " << &paul << endl;  //imprime el valor de memoria de paul
cout << "*ramon =" << *ramon << endl;  //ramon mediante el primer apunte de puntero accede al valor de memoria de melisa
cout << "&melissa = " << &melissa << endl; 
cout << "**ramon = " << **ramon << endl; //ramon mediante la doble apuntacion puede acceder al valor que guarda en su casa melissa
*/
}
