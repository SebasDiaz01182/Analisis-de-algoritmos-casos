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

#ifndef _Spotify_
#define _Spotify_
#include <iostream>

#include "Media.h"
class Spotify : public Media
{
private:
    /* data */
public:
    Spotify(/* args */);
    ~Spotify();
    void update(bool pEstado);
};

Spotify::Spotify(/* args */)
{
}

Spotify::~Spotify()
{
}

void Spotify::update(bool pEstado)
{
    this->estado=pEstado;
    if(estado){
        cout<<"Esta reproduciendo Spotify"<<endl;
    }
}
#endif
