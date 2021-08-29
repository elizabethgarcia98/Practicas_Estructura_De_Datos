#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

//prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

int main(){
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	cout << endl;
	cout << "Desarrollado por: Silvia Garcia";
	
	return 0;
}


//Implementacion

std::string generarMovimientoComputadora(){
	
	std::string movimiento;
	int numeroAleatorio;
	
	//Generar numero aleatorio
	srand(time(0));
	numeroAleatorio = rand() % 5 + 1;
	
	switch(numeroAleatorio){
		
		case 1:
			movimiento = "piedra";
			break;
		case 2:
			movimiento = "papel";
			break;
		case 3:
			movimiento = "tijera";
			break;
		case 4:
			movimiento = "lagarto";
			break;
		case 5: 
		movimiento = "spock";
		break;
	}
	
	std:: cout << "Computadora: " << movimiento << "\n";
	
	return movimiento;
}

std::string obtenerMovimientoJugador(){
	using namespace std;
	
	string movimiento;
	
	cout << "1. Piedra, \n 2. Papel \n 3. Tijera \n 4. Lagato \n 5. Spock \n";
	cin >> movimiento;
	
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador){
	
	if(computadora == jugador){
		std::cout << "Empate!\n";
	}
	else if(computadora == "piedra"){
		procesarEntradaJugadorPiedra(computadora);
	}
	else if(computadora == "papel"){
		procesarEntradaJugadorPapel(computadora);
	}
	else if(computadora == "tijera"){
		procesarEntradaJugadorTijera(computadora);
	}
	else if(computadora == "lagarto"){
		procesarEntradaJugadorLagarto(computadora);
	}
	else if(computadora == "spock"){
		procesarEntradaJugadorSpock(computadora);
	}
	else{
		std::cout << "Entrada no valida. Ingrese piedra, papel, tijera, lagarto, spock \n";
	}
}

//Funciones de ganador

void procesarEntradaJugadorPiedra(std::string computadora){
	
	if(computadora == "piedra"){
		std:: cout << "La computadora gana. Papel cubre piedra/ \n";
	}
	else if(computadora == "tijera"){
		std:: cout << "Usted gana. Piedra rompe tijera. \n";
	}
	else if(computadora == "lagarto"){
		std:: cout << "Usted gana. Piedra aplasta lagarto. \n";
	}
	else{
		std:: cout << "La computadora gana. Spock vaporiza piedra. \n";
	}
}

void procesarEntradaJugadorPapel(std::string computadora){
	
	if(computadora == "piedra"){
		std:: cout << "Usted gana. Papel cubre piedra. \n";
	}
	else if(computadora == "tijera"){
		std:: cout << "La computadora gana. Tijera corta papel. \n";
	}
	else if(computadora == "lagarto"){
		std:: cout << "La comptadora gana. Lagarto devora papel. \n";
	}
	else{
		std:: cout << "Usted gana. Papel desautoriza Spock \n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora){
	
	if(computadora == "piedra"){
		std:: cout << "La computadora gana. Piedra destruye tijera. \n";
	}
	else if(computadora == "papel"){
		std:: cout << "Usted gana. Tijera corta papel. \n";
	}
	else if(computadora == "lagarto"){
		std:: cout << "Usted gana. Tijera decapita lagarto. \n";
	}
	else{
		std:: cout << "La computadora gana. Spock rompe tijera. \n";
	}
}

void procesarEntradaJugadorLagarto(std::string computadora){
	
	if(computadora == "piedra"){
		std:: cout << "La computadora gana. Piedra aplasta lagarto. \n";
	}
	else if(computadora == "papel"){
		std:: cout << "Usted gana. Lagarto devora papel. \n";
	}
	else if(computadora == "spock"){
		std:: cout << "Usted gana. Lagarto envenena a spock. \n";
	}
	else{
		std:: cout << "La computadora gana. Tijera decapita lagarto. \n";
	}
}

void procesarEntradaJugadorSpock(std::string computadora){
	
		
	if(computadora == "piedra"){
		std:: cout << "Usted gana. Spock vaporiza piedra. \n";
	}
	else if(computadora == "papel"){
		std:: cout << "La computadora gana. Papel desautoriza Spock. \n";
	}
	else if(computadora == "tijera"){
		std:: cout << "Usted gana. Spock rompe tijera \n";
	}
	else{
		std:: cout << "La computadora gana. Lagarto envenea a spock. \n";
	}
}







