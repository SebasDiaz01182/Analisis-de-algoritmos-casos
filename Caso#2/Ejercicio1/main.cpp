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

#include <iostream>
#include "lista.h"
#include "persona.h"
#include "pila.h"
#include "stdio.h"
#include "cola.h"

using namespace std;

struct fecha{
    int dia;
    int mes;
    int agno;
};

int main(){
    Persona p1("Fabian", 24);
    Persona p2("Adrian", 23);
    Persona p3("Diego", 22);

    Lista<Persona> listaPrueba;
    listaPrueba.meterAlFinal(p1);
    listaPrueba.meterAlFinal(p2);
    listaPrueba.meterAlFinal(p3);
    cout<<"Esto es la lista:"<<endl;
    while (listaPrueba.tieneMas()){
        Persona actual=listaPrueba.getSiguiente();
        actual.mostrarDatos();
    }
    Pila<Persona> pilaPrueba;
    pilaPrueba.meterAlFinal(p1);
    pilaPrueba.meterAlFinal(p2);
    pilaPrueba.meterAlFinal(p3);
    cout<<"Esto es la Pila:"<<endl;
    pilaPrueba.sacar().mostrarDatos();
    pilaPrueba.sacar().mostrarDatos();
    pilaPrueba.sacar().mostrarDatos();
    Cola<Persona> colaPrueba;
    colaPrueba.meterAlFinal(p1);
    colaPrueba.meterAlFinal(p2);
    colaPrueba.meterAlFinal(p3);
    cout<<"Esto es la Cola:"<<endl;
    colaPrueba.sacar().mostrarDatos();
    colaPrueba.sacar().mostrarDatos();
    colaPrueba.sacar().mostrarDatos();
    fecha fecha1;
    fecha1.dia=1;
    fecha1.mes=1;
    fecha1.agno=1;
    fecha fecha2;
    fecha2.dia=2;
    fecha2.mes=2;
    fecha2.agno=2;
    fecha fecha3;
    fecha3.dia=4;
    fecha3.mes=3;
    fecha3.agno=3;
    Cola<fecha> colaFechas;
    colaFechas.meterAlFinal(fecha1);
    colaFechas.meterAlFinal(fecha2);
    colaFechas.meterAlFinal(fecha3);
    cout<<"Esto es Cola con estructura"<<endl;
    cout<<colaFechas.sacar().dia<<endl;
    cout<<colaFechas.sacar().dia<<endl;
    cout<<colaFechas.sacar().dia<<endl;
}
