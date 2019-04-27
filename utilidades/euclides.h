#ifndef EUCLIDES_H_INCLUDED
#define EUCLIDES_H_INCLUDED
#include<iostream>
using namespace std;

int maximocomundivisor(int a,int b) // algortmo de auclides
{
    int aux;
    if(a<b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    while(b)
    {
        aux=a%b;
        a=b;
        b=r;
    }
}


#endif // EUCLIDES_H_INCLUDED
