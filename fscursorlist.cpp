#include <iostream>
#include "object.h"
#include "tdalist.h"
#include "fscursorlist.h"
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
	delete[] rows;
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
		rows[neo].prev = -1;
		rows[neo].next = head;
		rows[head].prev = neo;
		head = neo;
	}else{
		int temp = head;
		for (int i = 0; i < pos -1; ++i)
		{
			temp = rows[temp].next;
		}
		rows[neo].prev = temp;
		rows[neo].next = rows[temp].next;
		rows[temp].next = neo;
		if(p < size)
			rows[rows[neo].next].prev = neo;
	}
}
int FSCursorList::indexOf(Object* elem)const{

}
Object* FSCursorList::get(unsigned index)const{

}
bool FSCursorList::erase(unsigned pos){
	if(head == -1)
		return NULL;
	int old = head;
	if (pos == 0){
		int temp = old;
		for (int i = 0; i < pos+1; ++i)
		{
			temp = rows[temp].next;
		}
		rows[temp].prev = rows[old].prev;
		delete rows[old];
	}else{
		int temp = old;
		for (int i = 0; i < pos-1; ++i)
		{
			temp = rows[temp].next;
		}
		rows[temp].next = rows[old].next;
		if(pos == size)
			rows[rows[old].next].prev = rows[old].prev;
		delete rows[old];
	}
}
int FSCursorList::prev(int pos) const{
	return pos - 1;
}
int FSCursorList::next(int pos) const{
	return pos + 1;
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