#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

	int op;
	
	cout<<"*****************"<<endl;
	cout<<"  MENU DE JUEGO  "<<endl;
	cout<<"*****************"<<endl;
	
	cout<<"Seleccione un juego  "<<endl;
	cout<<"1. - StarShip "<<endl;
	cout<<"2. - Snake"<<endl;
	cout<<"Ingrese un numero del menu para seleccionar un juego : ";
	cin>>op;
	switch(op){
		case 1:
			system("cls");
			starShip();
			break;
		case 2: 
			system("cls");
			snake();
			break;
		default:
			break;
	}


    return 0;
}
