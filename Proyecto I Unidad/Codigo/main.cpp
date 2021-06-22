#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<endl;
    int juego = 0;
    system("cls");
   
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
        starShip();
        break;
    case 2:
        snake();
        break;
    default:
        break;
    }
    cout<<endl;
    

    return 0;
}