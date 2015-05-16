#include <iostream>
#include "object.h"
#include "tdalist.h"
#include "fsarraylist.h"
// Para tener la definición del NULL sin declarar más identificadores
// innecesarios
#include <stddef.h>

using namespace std;

//Constructor por defecto de FSArrayList
FSArrayList::FSArrayList(int param){
	capacity = param;
	data = new Object*[capacity];
}
//Destructor de FSArrayList
FSArrayList::~FSArrayList(){
	for (int i = 0; i < size; ++i)
	{
		delete data[i];
	}
	delete data;
}
/*
* Inserción en la lista
* En esta operación se consideran dos condiciones generales de inserción:
* (A) La lista está llena
* (B) La posición es válida
* Si se presentan estas condiciones, se retorna false al no realizarze la inserción
* Si no se presentan se consideran tres opciones:
* (A) Se inserta en medio de la lista, en el cual se moveran los siguientes una posición
* (B) Se inserta al final de la lista
* (C) Se inserta al principio de la lista
*/
bool FSArrayList::insert(Object* elem, int pos){
	if(size == capacity)
		return false;
	if (pos < 0 || pos > size)
		return false;
	if (pos != size){
		for (int i = size; i > pos; --i)
		{
			data[i] = data[i-1];
		}
	}
	data[pos] = elem;
	size++;
	return true;
}
// Búsqueda del índice (posición) de un objeto
int FSArrayList::indexOf(Object* other)const{
	for (int i = 0; i < size; ++i){
		if (data[i]->equals(other))
		{
			return i;
		}
	}
	return -1;
}
// Consigue el elemento index de la lista, si index es una posición válida
Object* FSArrayList::get(unsigned index)const{
	if (index > size)
		return NULL;
	return data[index];
}
//Elimina el elemento en la posición dada
bool FSArrayList::erase(unsigned pos){
	if (pos >= size)
	{
		return false;
	}
	data[pos] = NULL;
	if (pos != size-1)
	{
		for (int i = pos; i < size-1; ++i)
		{
			data[i] = data[i+1];
		}
		data[size-1] = NULL;
	}
	size--;
	return true;
}
// Retorna el anterior a la posición pos
int FSArrayList::prev(int pos)const{
	return pos - 1;
}
// Retorna el siguiente a la posición pos
int FSArrayList::next(int pos)const{
	return pos + 1;
}
// Elimina todos los elementos de la lista, coloca size en cero
void FSArrayList::reset(){

}
// Retorna el primer elemento en la lista
Object* FSArrayList::first()const{
	if (size > 0)
		return data[0];
	else
		return NULL;
}
//Retorna el último elemento existente de la lista
Object* FSArrayList::last()const{
	return data[size];
}
// Imprime cada uno de los elementos que hay en la lista
void FSArrayList::print()const{
	for (int i = size-1; i >= 0; --i)
	{
		data[i]->print();
	}
}
//Retorna true si la lista está vacía
bool FSArrayList::isEmpty()const{
	if (size == 0)
		return true;
	else
		return false;
}
//Retorna true si la lista está llena
bool FSArrayList::isFull()const{
	if (size == capacity)
		return true;
	else
		return false;
}
//Retorna la capacidad de la lista
int FSArrayList::getCapacity()const{
	return capacity;
}