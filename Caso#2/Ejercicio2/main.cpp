/*
Case#2
Topic: #pointers
Date: 02/03/2021, 9:00 pm 
Team size: two or three
Students: 
-Sebastián Díaz Obando
-Arturo Diego Esquivel Alvarez
-Andres Fabian Siles Granados
*/
#include <iostream>
#include "MediaSelector.h"

using namespace std;

int main(){
    MediaSelector* selectorMedias = new MediaSelector();
    int opcion;
    while(true){
        cout<<"Ingrese la opcion deseada:\n0.Radio\n1.Television\n2.Spotify\n3.Youtube Music\n4.Salir\n";
        cin>>opcion;
        if(opcion==4){
            break;
        }else if(opcion>=0&&opcion<4){
            selectorMedias->seleccionarMedia(opcion);
        }else{
            cout<<"Ingrese una opcion vÃ¡lida\n";
        }
    }
    return 0;
}
