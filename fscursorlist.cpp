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
	int neo = avail();
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
	rows[neo].data = elem;
	size++;
	return true;
}
int FSCursorList::indexOf(Object* elem)const{
	for (int i = 0; i < size; ++i)
	{
		if (elem == rows[i].data)
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
	if (pos > size)
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
			temp = rows[temp].next;
		}
		rows[rows[temp].prev].next = rows[temp].prev;
		rows[rows[temp].next].prev = rows[temp].next;
	}
	size--;
	return true;
}
int FSCursorList::prev(int pos) const{
	return pos - 1;
}
int FSCursorList::next(int pos) const{
	return pos + 1;
}
Object* FSCursorList::first()const{
	for (int i = 0; i < size; ++i)
	{
		if(rows[i].prev == -1)
			return rows[i].data;
	}
	return NULL;
}
Object* FSCursorList::last()const{
	for (int i = 0; i < size; ++i)
	{
		if(rows[i].next == -1)
			return rows[i].data;
	}
	return NULL;
}
void FSCursorList::reset(){
	if (head)
        delete rows[head].data;
    head = -1;
    size = 0;
}
void FSCursorList::print()const{
	for (int i = size-1; i >= 0; --i)
	{
		rows[i].data->print();
	}
}
bool FSCursorList::isEmpty()const{
	if (size == 0)
		return true;
	return false;
}
bool FSCursorList::isFull()const{
	if(size == capacity)
		return true;
	return false;
}
int FSCursorList::getCapacity()const{
	return capacity;
}
int FSCursorList::avail()const{
	for (int i = 0; i < size; ++i)
	{
		if (rows[i].data == NULL)
		{
			return i;
		}
	}
	return -1;
}