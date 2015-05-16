	#include <iostream>
	#include <cstdlib>
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
	    // En el caso de que quisieramos utilizar otra implementación
	    // SÓLO se tendría que cambiar esta línea.
	    TDAList* listafsa = new FSArrayList(15);
	    TDAList* listall = new LinkedList();
	    TDAList* listafsc = new fscursorlist();
	    Integer* intTemp;
	    clock t;
	    int pos;
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
	               							x=rand%()1000;
	               						}while (pos>listafsa);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	              				 break;
	           				case 2: // remove Fsarraylist
	              					for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listafsa);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	               				break;
	           				case 3:// get Fsarraylist
	               					for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listafsa);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	               				break;
	           				case 4: // IndexOf Fsarraylist
	                				for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listafsa);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	               				break;
	           				case 5: //fisrt Fsarraylist
	               					
	              				 break;
	           				case 6: // last Fsarraylist
	           						
	           					break;    
	        		}
	               break;
	           case 2: // Linkedlist
	              	switch(menu2()){
	           				case 1: // Insert Linkedlist
	               					for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listall);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	              				 break;
	           				case 2: // remove Linkedlist
	              					for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listall);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	               				break;
	          				 case 3:// get Linkedlist
	               					for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listall);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	               				break;
	           				case 4: // IndexOf Linkedlist
	                				for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listall);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	              				 break;
	           				case 5: //fisrt Linkedlist
	               					
	               				break;
	           				case 6: // last Linkedlist
	           						
	           					break;    
	       			 }
	               	break;
	           case 3:// fscursorlist
	            	switch(menu2()) {
	           				case 1: // Insert fscursorlist
	               					for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listafsc);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	               				break;
	           				case 2: // remove fscursorlist
	              					for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listafsc);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;

	               					}
	               				break;
	           				case 3:// get fscursorlist
	               					for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listafsc);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	               				break;
	          				 case 4: // IndexOf fscursorlist
	               					for (int i = 0; i < 1000; ++i)
	               					{
	               						t = clock();
	               						do{
	               							x=rand%()1000;
	               						}while (pos>listafsc);
	               						t = clock() - t;
  										printf ("It took me %f clicks (%f seconds).\n",(float)t,((float)t)/CLOCKS_PER_SEC);
										cout<<endl;
	               					}
	               				break;
	           				case 5: //fisrt fscursorlist
	               
	              				 break;
	           				case 6: // last fscursorlist
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
int menu()
{
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

int menu2()
{
    cout << "1. FSArrayList "  << endl;
    cout << "2. LinkedList "  << endl;
    cout << "3. FSCursorlist " << endl;
    cout << "3. Salir " << endl;
    cout << endl << "Opcion? ";
    int opcion;
    cin >> opcion;
    return opcion;
}
