exe:	main.o tdalist.o linkedlist.o integer.o fsarraylist.o fscursorlist.o 
	g++ main.o tdalist.o linkedlist.o integer.o fsarraylist.o fscursorlist.o  -o exe

main.o:	main.cpp tdalist.cpp linkedlist.cpp integer.cpp fsarraylist.cpp fscursorlist.cpp 
	g++ -c main.cpp

fscursorlist.o:	fscursorlist.cpp fscursorlist.h object.h tdalist.h
	g++  -c fscursorlist.cpp

fsarraylist.o:	fsarraylist.cpp fsarraylist.h object.h tdalist.h
	g++  -c fsarraylist.cpp

linkedlist.o:	linkedlist.cpp linkedlist.h object.h tdalist.h dllnode.h
	g++  -c linkedlist.cpp

dllnode.o:	dllnode.cpp dllnode.h object.h
	g++ -c dllnode.cpp

integer.o:	integer.cpp integer.h object.h
	g++ -c integer.cpp

tdalist.o:	tdalist.cpp tdalist.h object.h
	g++ -c tdalist.cpp

object.o:	object.cpp object.h
	g++ -c object.cpp



