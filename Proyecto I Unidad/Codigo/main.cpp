#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

main()
{
    int juego;

    system("cls");
    while(juego !=2) 
   {
    cout<<"**************"<<endl;
    cout<<"MENU DE JUEGOS"<<endl;
    cout<<"**************"<<endl; 
     cout<<  "Seleccione un juego"<<endl;
    cout<<"1 - Starship"<<endl;
    cout<<"2 - Snake"<<endl;
   cout<<"Ingrese un numero del menu para seleccionar un juego:"<<endl;
    cin>>juego;
}
  
switch (juego)
{
case 1:
   system("cls");
   cout<<"StarShip"<<endl;
   system("pause");
 break;
 case 2:
   system("cls");
   cout<<"Snake"<<endl;
   system("pause");

default:
   if(juego <1 || juego >2 )
   {
       cout<<"Este numero no es valido..."<<endl;
   
    }
    break;
}  
  starShip();
    snake();

    return 0;
}
