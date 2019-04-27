#ifndef PLANTILLAS_H_INCLUDED
#define PLANTILLAS_H_INCLUDED
#include<iostream>
using namespace std;
template<typename tipo>

class lst
{
public:
    tipo a[100];
    int top;
    lst(int a=-1):top(a){};

    void add(tipo val)
    {
        top++;
        a[top]=val;
    }

    tipo quitar()
    {
        tipo val=a[top];
        a[top]=0;
        top--;
        return val;
    }

    void print()
    {
        cout<<endl<<"----------------------"<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<a[i]<<endl;
        }
        cout<<endl<<"----------------------"<<endl;
    }
};


//especializacion
template<>
class lst<string>
{
public:
    string a[100];
    int top;
    lst(int a=-1):top(a){};

    void add(string val)
    {
        top++;
        a[top]=val;
    }

    string quitar()
    {
        string val=a[top];
        a[top]="\0";
        top--;
        return val;
    }

    void print()
    {
        cout<<endl<<"----------------------"<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<a[i]<<endl;
        }
        cout<<endl<<"----------------------"<<endl;
    }
};
#endif // PLANTILLAS_H_INCLUDED
