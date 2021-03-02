/*
Case#2
Topic: #pointers
Date: 02/03/2021, 9:00 pm 
Team size: two or three
Students: 
-Sebastian Diaz Obando
-Arturo Diego Esquivel Alvarez
-Andres Fabian Siles Granados
*/ 

#ifndef _MediaSelector_
#define _MediaSelector_
#include <iostream>
#include "Media.h"
#include "Radio.h"
#include "Television.h"
#include "Spotify.h"
#include "YoutubeMusic.h"

//Clase sujeto y contexto
class MediaSelector{

    private:
        Media* actual;
        
        Radio* radio;
        Television* television;
        Spotify* spotify;
        YoutubeMusic* youtubeMusic;

    public:
        MediaSelector();
        void seleccionarMedia(int pSeleccion);

};
MediaSelector::MediaSelector(){
    this->radio = new Radio();
    this->television = new Television();
    this->youtubeMusic = new YoutubeMusic();
    this->spotify = new Spotify();
    this->actual=nullptr;
}

void MediaSelector::seleccionarMedia(int pSeleccion){
    switch(pSeleccion){
        case 0:
            this->actual=this->radio;
            break;
        case 1:
            this->actual=this->television;
            break;
        case 2:
            this->actual=this->spotify;
            break;
        case 3:
            this->actual=this->youtubeMusic;
            break;
    }
    Media* arraysMedias[]={this->radio, this->television, this->spotify, this->youtubeMusic};
    for(int i=0; i<4; i++){ 

        if(i!=pSeleccion){
           arraysMedias[i]->update(false);
        }
        else{
            arraysMedias[i]->update(true);
        }
    }
}
#endif
