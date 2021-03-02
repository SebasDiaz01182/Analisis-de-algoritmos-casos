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

#ifndef _Television_
#define _Television_
#include <iostream>

#include "Media.h"
class Television : public Media
{
private:
    /* data */
public:
    Television(/* args */);
    ~Television();
    void update(bool pEstado);
};

Television::Television(/* args */)
{
}

Television::~Television()
{
}
void Television::update(bool pEstado)
{
    this->estado=pEstado;
    if(estado){
        cout<<"Esta reproduciendo el televisor"<<endl;
    }
}
#endif
