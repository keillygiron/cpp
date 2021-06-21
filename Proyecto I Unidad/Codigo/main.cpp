#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

main()
{
    int juego;
   {
    cout<<"**************"<<endl;
    cout<<"MENU DE JUEGOS"<<endl;
    cout<<"**************"<<endl; 
     cout<<  "Seleccione un juego"<<endl;
    cout<<"1 - Starship"<<endl;
    cout<<"2 - Snake"<<endl;
   cout<<"Ingrese un numero del menu para seleccionar un juego:"<<endl;
    cin>>juego;
  
switch (juego)
{
case 1:
   system("cls");
   cout<<"seleccionaste StarShip"<<endl;
   system("pause");
   system("cls");
 break;
 case 2:
   system("cls");
   cout<<" seleccionaste Snake"<<endl;
   system("pause");
   system("cls");
   break;

   
    
}  
  //starShip();
// snake();

    return 0;
}
