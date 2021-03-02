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
#ifndef _nodo_
#define _nodo_

#include <iostream>

using namespace std;

template <class T>
class Nodo{
    private:
        T* data;
        Nodo<T>* siguiente;

    public:
        Nodo(T &pDato){
            this->data=&pDato;
            this->siguiente=nullptr;
        }    

        T getValue(){
            return (*this->data);
        }
    
        Nodo<T>* getSiguiente(){
            return this->siguiente;
        }

        void setSiguiente(Nodo<T>* pSiguiente){
            this->siguiente=pSiguiente;
        }
};

#endif
