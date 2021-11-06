#include <iostream>
#include <string>

using namespace std;


class CuentaBancaria {
	private:
		string numeroCuenta;
		string nombreTitular;
		double saldo;
	
	public:
		CuentaBancaria(string numeroC, string nombreT, double saldo);
		double getSaldo();
		string getnombreTitular();
		string getnumeroCuenta();
		void retirarCuenta(double importeRetiro);
		void depositarCuenta(double importeDeposito);
		

};

//Implementando contructor
CuentaBancaria::CuentaBancaria(string numeroC, string nombreT, double saldo){
	
	this->numeroCuenta = numeroC;
	this->nombreTitular = nombreT;
	
	if(saldo < 0){
		this->saldo = 0.00;
	}else{
		this->saldo = saldo;
	}
	
	 
}

double CuentaBancaria::getSaldo(){
	return this->saldo;
}

string CuentaBancaria::getnumeroCuenta(){
	return this->numeroCuenta; 
}

string CuentaBancaria::getnombreTitular(){
	return this->nombreTitular;
}


void CuentaBancaria::retirarCuenta(double importeRetiro){
	
	if((this->saldo > 0) && (importeRetiro < this->saldo) && (importeRetiro > 0)){
		
		this->saldo -= importeRetiro;
	}
	else{
		cout << "! Retiro no valido " << endl;
	}
}


void CuentaBancaria::depositarCuenta(double importeDeposito){
	
	if(importeDeposito > 0){
		this->saldo += importeDeposito; 
	}
}


int main(){
	
	//Creando Cuenta bancaria 
	CuentaBancaria cuenta("A-480920", "Jonathan Joestar", 2900.00);
	cout << "Titular de la cuenta: " << cuenta.getnombreTitular() << endl;
	cout << "No Cuenta: " << cuenta.getnumeroCuenta() << endl;
	cout << "Saldo: $" << cuenta.getSaldo() << endl;
	cout << "---------------------------------------------" << endl;
	cout << endl;
	
	//Creando segunda cuenta bancaria
	CuentaBancaria cuentaAmigo("C-165426", "Arale Gutierrez", 784661.00);
	cout << "Titular de la cuenta: " << cuentaAmigo.getnombreTitular() << endl;
	cout << "No Cuenta: " << cuentaAmigo.getnumeroCuenta() << endl;
	cout << "Saldo: $" << cuentaAmigo.getSaldo() << endl;
	cout << "-------------------------------------------" << endl;
	cout << endl;
	
	
	//Creando tercera cuenta
	CuentaBancaria cuentaNoValida("A-354698", "John Cena", -500.00);
	cout << "Titular de la cuenta: " << cuentaNoValida.getnombreTitular() << endl;
	cout << "No Cuenta: " << cuentaNoValida.getnumeroCuenta() << endl;
	cout << "Saldo: $" << cuentaNoValida.getSaldo() << endl;
	cout << "--------------------------------------------" << endl;
	cout << endl;
	cout << endl;

	//Retiros de cuentas
	//Retiro mi cuenta
	cout << "Quiero retirar $84 de la cuenta " << cuenta.getnumeroCuenta() << endl;
	cout << "Saldo inicial: $" << cuenta.getSaldo() << endl;
	cuenta.retirarCuenta(84);
	cout << "Saldo despues del retiro: $" << cuenta.getSaldo() << endl;
	cout << "--------------------------------------------" << endl;
	cout << endl;
	
	
	//Retiro de la cuenta mayor a saldo disponible
	cout << "Quiero retirar $3500 de la cuenta " << cuenta.getnumeroCuenta() << endl;
	cout << "Saldo inicial: $" << cuenta.getSaldo() << endl;
	cuenta.retirarCuenta(3500);
	cout << "Saldo despues del retiro: $" << cuenta.getSaldo() << endl;
	cout << "--------------------------------------------" << endl;
	cout << endl;
	
	
	//Retiro de monto negativo
	cout << "Quiero retirar -$725 de la cuenta " << cuenta.getnumeroCuenta() << endl;
	cout << "Saldo inicial: $" << cuenta.getSaldo() << endl;
	cuenta.retirarCuenta(-725);
	cout << "Saldo despues del retiro: $" << cuenta.getSaldo() << endl;
	cout << "--------------------------------------------" << endl;
	cout << endl;
	
	//Deposito a la cuenta
	cout << "Quiero depositar $125000 de la cuenta " << cuenta.getnumeroCuenta() << endl;
	cout << "Saldo inicial: $" << cuenta.getSaldo() << endl;
	cuenta.depositarCuenta(125000);
	cout << "Saldo despues del retiro: $" << cuenta.getSaldo() << endl;
	cout << "--------------------------------------------" << endl;
	cout << endl;
	
	
	//Deposito en negativo
	cout << "Quiero retirar -$5000 de la cuenta " << cuenta.getnumeroCuenta() << endl;
	cout << "Saldo inicial: $" << cuenta.getSaldo() << endl;
	cuenta.depositarCuenta(-5000);
	cout << "Saldo despues del retiro: $" << cuenta.getSaldo() << endl;
	cout << "--------------------------------------------" << endl;
	cout << endl;
	
	return 0;
}

