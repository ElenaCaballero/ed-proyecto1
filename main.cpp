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
	    int val, pos;
	    bool flag = true;
	    while (flag)
	    {
	        switch(menu2())
	        {
	           case 1: // Fsarraylist 
	               	switch(menu()){
	           				case 1: // Insert Fsarraylist
	               
	              				 break;
	           				case 2: // remove Fsarraylist
	              
	               				break;
	           				case 3:// get Fsarraylist
	               
	               				break;
	           				case 4: // IndexOf Fsarraylist
	                
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
	               
	              				 break;
	           				case 2: // remove Linkedlist
	              
	               				break;
	          				 case 3:// get Linkedlist
	               
	               				break;
	           				case 4: // IndexOf Linkedlist
	                
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
	               
	               				break;
	           				case 2: // remove fscursorlist
	              
	               				break;
	           				case 3:// get fscursorlist
	               
	               				break;
	          				 case 4: // IndexOf fscursorlist
	               
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
