#ifndef UTILIDADESCOMUNES_H_INCLUDED
#define UTILIDADESCOMUNES_H_INCLUDED
#include<cstdio>
#include<iostream>
#include<sstream>
using namespace std;


class alumno
{
    string id;
    int n;
public:
    alumno(){id="marco";n=12;}
    string tostring()
    {
        stringstream stm;
        stm<<"Nombre : "<<id<<"\nNumero : "<<n;
        return stm.str();
    }
}marco;


//cambiar enteros
void swapint(int a,int b)
{
    int z=a;
    a=b;
    b=z;
}

void gotoxy(int x, int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}

//arirmetica de punteros
class aritmetica
{
public:
    int edad;
    string nom;
};

ostream &operator<<(ostream &o,aritmetica *a)
{
    o<<"edad "<<a->edad<<endl<<"nombre "<<a->nom;
    return o;
}

void aritmeticap()
{
    aritmetica a[4];
    for(int i=0;i<4;i++)
    {
        srand(time(NULL));
        a[i].edad=rand();
        a[i].nom="marco";
    }

    a[1].nom="lupihsz";

    aritmetica *p=a;
    cout<<p[1].nom;
    cout<<p+1;

}



#endif // UTILIDADESCOMUNES_H_INCLUDED
