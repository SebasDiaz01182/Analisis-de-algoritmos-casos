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

#ifndef _persona_
#define _persona_

#include <iostream>
#include <stdio.h>

using namespace std;
class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string pNombre, int pEdad){
            this->nombre=pNombre;
            this->edad=pEdad;
        }
        void mostrarDatos(){
            cout<<"El nombre es "<<nombre<<" y la edad es "<<edad<<endl;
        }
};
#endif
