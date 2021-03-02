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
#ifndef _cola_
#define _cola_

#include "lista.h"

using namespace std;
template <class T>
class Cola : public Lista<T>{
    public:
        T sacar(){
            if(this->contador>0){
                T retornar=(*this->primero).getValue();
                this->primero=this->primero->getSiguiente();
                this->contador--;
                return retornar;
            }else{
                cout<<"Cola vacia"<<endl;
            }
        }
};
#endif
