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

#ifndef _Media_
#define _Media_
// Clase notificador y estrategia
class Media
{
protected:
    bool estado=false;
public:
    Media();
    ~Media();
    virtual void update(bool pEstado)=0;
};

Media::Media()
{
    this->estado=false;
}

Media::~Media()
{
}

#endif
