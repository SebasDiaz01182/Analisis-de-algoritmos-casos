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

#ifndef _lista_
#define _lista_

#include "nodo.h"

using namespace std;

template <class T>
class Lista{
    protected:
        int contador;
        Nodo<T>* primero;
        Nodo<T>* ultimo;
        Nodo<T>* actual;

    public:
    
    Lista(){
        this->primero=nullptr;
        this->ultimo=nullptr;
        this->actual=nullptr;
        this->contador=0; 
    }

    void meterAlFinal(T &pValor){
        Nodo<T>* nuevoNodo=nullptr;
        nuevoNodo= new Nodo<T>(pValor);
        if(this->ultimo!=nullptr){
            this->ultimo->setSiguiente(nuevoNodo);
            this->ultimo=nuevoNodo;
        }else{
            this->ultimo=nuevoNodo;
            this->primero=nuevoNodo;
        }
        this->contador++;
        this->actual=this->primero;
    }

    void meterAlPrincipio(T &pValor){
        Nodo<T>* nuevoNodo=nullptr;
        nuevoNodo= new Nodo<T>(pValor);
        if(this->primero!=nullptr){
            nuevoNodo->setSiguiente(this->primero);
            this->primero=nuevoNodo;
        }else{
            this->ultimo=nuevoNodo;
            this->primero=nuevoNodo;
        }
        this->contador++;
        this->actual=this->primero;
    }

    T getPrimero(){
        this->actual=this->primero;
        return (T)(*this->actual).getValue();
    }

    T getUltimo(){
        this->actual=this->primero;
        return (T)(*this->ultimo).getValue();
    }

    T getSiguiente(){
        T result = (*this->actual).getValue();
        this->actual = this->actual->getSiguiente();
        return result;
    }

    int getContador(){
        return this->contador;
    }

    bool tieneMas(){
        bool result=this->actual!=nullptr;
        this->actual=!result? this->primero : this->actual;
        return result;
    }
};
#endif
