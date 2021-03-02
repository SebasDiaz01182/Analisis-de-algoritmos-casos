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

#ifndef _YoutubeMusic_
#define _YoutubeMusic_
#include <iostream>

#include "Media.h"
class YoutubeMusic : public Media
{
private:
    /* data */
public:
    YoutubeMusic(/* args */);
    ~YoutubeMusic();
    void update(bool pEstado);
};

YoutubeMusic::YoutubeMusic(/* args */)
{
}

YoutubeMusic::~YoutubeMusic()
{
}
void YoutubeMusic::update(bool pEstado){
    this->estado=pEstado;
    if(estado){
        cout<<"Esta reproduciendo YoutubeMusic"<<endl;
    }
}
#endif
