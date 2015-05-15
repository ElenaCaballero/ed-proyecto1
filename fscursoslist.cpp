#include <iostream>
#include "object.h"
#include "tdalist.h"
#include "fscursoslist.h"
// Para tener la definición del NULL sin declarar más identificadores
// innecesarios
#include <stddef.h>

using namespace std;

FSCursorList::FSCursorList(int capacity){
	rows = new Row[capacity];
	if(!rows)
		throw "no memory";
}
FSCursorList::~FSCursorList(){

}
bool FSCursorList::insert(Object* elem, int pos){
	if (pos < 0 || pos > size)
		return false;
	if(size == capacity)
		return false;
	int neo = next.avail();
	if (p == 0 && head == -1){
		head = neo;
		rows[head].prev = -1;
		rows[head].next = -1;
		rows[head].data = elem;
	}else(pos == 0 && head != -1){
		rows[neo].prev = -1
	}
}
int FSCursorList::indexOf(Object* elem)const{

}
Object* FSCursorList::get(unsigned index)const{

}
bool FSCursorList::erase(unsigned pos){
	if(head == -1)
		return NULL;
	if (pos == 0)
	{
		
	}
}
int FSCursorList::prev(int pos) const{

}
int FSCursorList::next(int pos) const{

}
void FSCursorList::reset(){

}
Object* FSCursorList::first()const{

}
Object* FSCursorList::last()const{

}
void FSCursorList::print()const{

}
bool FSCursorList::isEmpty()const{

}
bool FSCursorList::isFull()const{

}
int FSCursorList::getCapacity()const{

}