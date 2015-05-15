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
	if (head == -1){
		head = neo;
		rows[head].prev = -1;
		rows[head].next = -1;
		rows[head].data = elem;
	}else{
		int temp = head;
		for (int i = 0; i < pos -1; ++i)
		{
			temp = rows[temp].next;
		}
		rows[neo].prev = temp;
		rows[neo].next = rows[temp].next;
		rows[temp].next = neo;
		if(pos < size)
			rows[rows[neo].next].prev = neo;
	}
}
int FSCursorList::indexOf(Object* elem)const{
	for (int i = 0; i < size; ++i)
	{
		if (rows[elem].data == rows[i].data)
		{
			return i;
		}
	}
	return -1;
}
Object* FSCursorList::get(unsigned index)const{
	for (int i = 0; i < size; ++i)
	{
		if(rows[i].data == rows[index].data){
			return rows[index].data;
		}
	}
	return NULL;
}
bool FSCursorList::erase(unsigned pos){
	if(head == -1)
		return false;
	if (pos < 0 || pos > size)
		return false;
	if (pos == size){
		int temp = head;
		for (int i = 0; i < pos -1; ++i)
		{
			temp = rows[temp].next;
		}
		rows[rows[temp].prev].next = -1;
	}else{
		int temp = head;
		for (int i = 0; i < pos; ++i)
		{
			temp = rows[head].next;
		}
		rows[rows[temp].prev].next = rows[temp].prev;
		rows[rows[temp].next].prev = rows[temp].next;
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