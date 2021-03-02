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

#ifndef _pila_
#define _pila_
#include "lista.h"
#include <iostream>

using namespace std;

template <class T>
class Pila : public Lista<T>{
    public:
        T sacar(){
            if(this->contador==1){
                T retornar=(*this->primero).getValue();
                this->primero=nullptr;
                this->actual=nullptr;
                this->ultimo=nullptr;
                this->contador--;
                return retornar;
            }else{
                if(this->contador>0){
                    while(this->actual->getSiguiente()!=this->ultimo){
                        this->actual=this->actual->getSiguiente();
                    }
                    T retornar=(*this->actual->getSiguiente()).getValue();
                    this->actual->setSiguiente(nullptr);
                    this->ultimo=this->actual;
                    this->contador--;
                    this->actual=this->primero;
                    return retornar;
                }else{
                    cout<<"Pila vacia"<<endl;
                }
            }
            
        }
};
#endif
