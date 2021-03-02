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
#ifndef _Radio_
#define _Radio_
#include <iostream>

#include "Media.h"

using namespace std;

class Radio : public Media
{
private:
    /* data */
public:
    Radio(/* args */);
    ~Radio();
    void update(bool pEstado);
};

Radio::Radio(/* args */)
{
}
void Radio::update(bool pEstado){
    this->estado=pEstado;
    if(estado){
        cout<<"Esta reproduciendo el radio"<<endl;
    }
}
Radio::~Radio()
{
}
#endif
