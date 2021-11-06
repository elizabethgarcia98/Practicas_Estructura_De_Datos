#ifndef LISTA_H
#define LISTA_H
#include <iostream>

class ListaEnteros{
	private:
		int cuenta;
		int capacidad;
		int *items; 
		void agrandar();
	
	public:
		ListaEnteros(int capacidad); //Constructor que recibe el tamanio de una lista
		listaEnteros(); //Constructor vacio
		ListaEnteros(const ListaEnteros &otraLista); //Construir una lista a partir de otra
		~ListaEnteros(); //Destructor
		bool estaVacia();
		int tamanio();
		void insertar(int indice, int item);
		void adjuntar(int item);
		int obtener(int indice);
		bool contiene(int item);
		int remover(int indice);
		void imprimirLista();
};

//Implementando constructor
ListaEnteros::ListaEnteros(int capacidad){
	this->cuenta = 0;
	this->capacidad = capacidad;
	this->items = new int[capacidad];
}

//Implementar destructor
ListaEnteros::~ListaEnteros(){
	delete[] items;
}

//Evaluar si la lista esta vacia
bool ListaEnteros::estaVacia(){
	return this->cuenta == 0; //Regresa true si se cumple la condicion
}


//Obtener el tamanio de la lista
int ListaEnteros::tamanio(){
	return this->cuenta;
}

//Obtener un elemento en el indice indicado
int ListaEnteros::obtener(int indice){
	if(indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";
	if(this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
	return this->items[indice];
}

//Insertar elemento en un indice especifico
void ListaEnteros::insertar(int indice, int item){
	if(indice < 0 || indice > this->cuenta) throw "Indice fuera de rango";
	if(this->cuenta >= this->capacidad) this->agrandar();
	
	//Desplazar elementos a partir del indice a la derecha
	for(int i = cuenta - 1; i >= indice; i--){
		this->items[i+1] = this->items[i];
	}
	
	this->items[indice] = item; //agregamos el valor en el indice indicado
	this->cuenta++;
}

//Agrandar el tamanio de la lista
void ListaEnteros::agrandar(){
	int *temp = this->items; //Guardo en un puntero el contenido de la lsita
	this->capacidad *= 2;
	this->items = new int[capacidad];
	for(int i =0; i < this->cuenta; i++){
		this->items[i] = temp[i];
	}
	
	delete[] temp;
}

//Agregar elemento al final de la lista
void ListaEnteros::adjuntar(int item){
	this->insertar(this->cuenta, item);
}

//Verificar si se encuentra el elemento en la lista
bool ListaEnteros::contiene(int item){
	for(int i =0; i < this->cuenta; i++){
		if(this->items[i] == item) return true;
	}
	
	return false;
}

//Eliminar un elemento de la lista
int ListaEnteros::remover(int indice){
	if(this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
	if(indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";
	
	//leer valor del indice y desplazar elementos a la izquierda
	int valor = this->items[indice];
	for(int i = indice; i < cuenta - 1; i++){
		this->items[i] = this->items[i+1];
	}
	
	this->cuenta--;
	return valor;
}

//Imprimir los elemtentos de la lista
void ListaEnteros::imprimirLista(){
	std::cout << "| ";
	for(int i = 0; i < this->cuenta; i++){
		std::cout << this->obtener(i) << " | ";
	}
	std::cout << std::endl;
}
