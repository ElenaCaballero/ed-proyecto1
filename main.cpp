#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "tdalist.h"
#include "linkedlist.h"
#include "integer.h"
#include "fsarraylist.h"
#include "fscursorlist.h"


using namespace std;


int menu();
int menu2();

int main(int argc, char *argv[])
{
    
    TDAList* listafsa = new FSArrayList(1000);
    TDAList* listall = new LinkedList();
    TDAList* listafsc = new FSCursorList(1000);
    Integer* intTemp;
    clock_t t;
    Object* val;
    int pos;
    int ran;
    srand (time(0));
    bool flag = true;
    while (flag)
    {
        switch(menu2())
        {
           case 1: // Fsarraylist 
               	switch(menu()){
           				case 1: // Insert Fsarraylist
               					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listafsa->getSize());
               						t = clock() - t;
               						listafsa->insert( new Integer(i),ran);
									printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
               					}
              				 break;
           				case 2: // remove Fsarraylist
              					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listafsa->getSize());
               						t = clock() - t;
               						listafsa->erase(ran);
									printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
               					}
               				break;
           				case 3:// get Fsarraylist
               					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listafsa->getSize());
               						
               						t = clock() - t;
               						val=listafsa->get(i);
									printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
               					}
               				break;
           				case 4: // IndexOf Fsarraylist
                				for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listafsa->getSize());
               						intTemp = new Integer(i);
               						t = clock() - t;
               						pos=listafsa->indexOf(intTemp);
									printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
									delete intTemp;
               					}
               				break;
           				case 5: //fisrt Fsarraylist
               					for (int i = 0; i < 1000; ++i)
               					{
               						val=listafsa->first();
               					}
              				 break;
           				case 6: // last Fsarraylist
           						for (int i = 0; i < 1000; ++i)
               					{
               						val=listafsa->last();
               					}
           						
           					break;    
        		}
               break;
           case 2: // Linkedlist
              	switch(menu()){
           				case 1: // Insert Linkedlist
               					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listall->getSize());
               						t = clock() - t;
               						listall->insert( new Integer(i),ran);
										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
               					}
              				 break;
           				case 2: // remove Linkedlist
              					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listall->getSize());
               						t = clock() - t;
               						listall->erase(ran);
										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
               					}
               				break;
          				 case 3:// get Linkedlist
               					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listall->getSize());
               						t = clock() - t;
               						val=listall->get(i);
										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
               					}
               				break;
           				case 4: // IndexOf Linkedlist
                				for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listall->getSize());
               						intTemp = new Integer(i);
               						t = clock() - t;
               						pos=listall->indexOf(intTemp);
										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
									delete intTemp;
               					}
              				 break;
           				case 5: //fisrt Linkedlist
               					for (int i = 0; i < 1000; ++i)
               					{
               						val=listall->first();
               					}
               				break;
           				case 6: // last Linkedlist
           						for (int i = 0; i < 1000; ++i)
               					{
               						val=listall->last();
               					}
           					break;    
       			 }
               	break;
           case 3:// fscursorlist
            	switch(menu()) {
           				case 1: // Insert fscursorlist
               					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listafsc->getSize());
               						t = clock() - t;
               						listafsc->insert( new Integer(i),ran);
										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
               					}
               				break;
           				case 2: // remove fscursorlist
              					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listafsc->getSize());
               						t = clock() - t;
               						listafsc->erase(ran);
										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;

               					}
               				break;
           				case 3:// get fscursorlist
               					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listafsc->getSize());
               						t = clock() - t;
               						val=listafsc->get(i);
										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
               					}
               				break;
          				 case 4: // IndexOf fscursorlist
               					for (int i = 0; i < 1000; ++i)
               					{
               						t = clock();
               						do{
               							ran=rand()%1000;
               						}while (ran>listafsc->getSize());
               						intTemp = new Integer(i);
               						t = clock() - t;
               						pos=listafsc->indexOf(intTemp);
										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
									cout<<endl;
									delete intTemp;
               					}
               				break;
           				case 5: //fisrt fscursorlist
               					for (int i = 0; i < 1000; ++i)
               					{
               						val=listafsc->first();
               					}
              				 break;
           				case 6: // last fscursorlist
           						for (int i = 0; i < 1000; ++i)
               					{
               						val=listafsc->last();
               					}
           					break;    
        		}
               
               break;
            case 4: // salir
                flag = false;
               break; 
        }
    }
delete listafsa; 
delete listafsc;
delete listall;

return 0;
}
	int menu(){
	cout << "1. Insert "  << endl;
	cout << "2. Remove "  << endl;
	cout << "3. Get " << endl;
	cout << "4. IndexOf " << endl;
	cout << "5. First " << endl;
	cout << "6. Last " << endl;
	cout << endl << "Opcion? ";
	int opcion;
	cin >> opcion;
	return opcion;
}

int menu2(){
	cout << "1. FSArrayList "  << endl;
	cout << "2. LinkedList "  << endl;
	cout << "3. FSCursorlist " << endl;
	cout << "4. Salir " << endl;
	cout << endl << "Opcion? ";
	int opcion;
	cin >> opcion;
	return opcion;
}
