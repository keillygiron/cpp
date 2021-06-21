#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

main()
{
    int juego;
   do{
       system ("cls")
    cout<<"**************"<<endl;
    cout<<"MENU DE JUEGOS"<<endl;
    cout<<"**************"<<endl; 
     cout<<  "Seleccione un juego"<<endl;
    cout<<"1 - Starship"<<endl;
    cout<<"2 - Snake"<<endl;
   
   cout<<"Ingrese un numero del menu para seleccionar un juego:"<<endl;
    cin>>juego;

    int starship,snake;
  
switch (juego)
{
case 1:
   system("pause");
   cout<<"seleccionaste StarShip";
    cin>>starship;
 
 break;
 case 2:
   system("cls");
   cout<<" seleccionaste Snake"<<endl;
   system("pause");
   cin>>snake;
   break;

   
    
}  
  //starShip();
// snake();

}while
 return 0;
}
