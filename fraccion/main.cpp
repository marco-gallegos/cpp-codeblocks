#include <iostream>

using namespace std;

int maximocomundivisor(int a,int b)
{
    int aux;
    if(a<b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    while(b!=0)
    {
        aux=a%b;
        a=b;
        b=aux;
    }
    return a;
}

class fraccion
{
    int num,den;
public:
    void setnum(int a)
    {
        num=a;
    }
    void setden(int a)
    {
        den=a;
    }
    int getden(){return den;}
    int getnum(){return num;}

    void inicializar(int a,int b)
    {
        num=a;
        if(b!=0)
        {
            den=b;
        }
        else{cout<<"error";}
        int m;
        m=maximocomundivisor(num,den);
        num=num/m;
        den=den/m;
    }

    fraccion()
    {
        num=1;den=1;
    }

};

fraccion operator +(fraccion izq,fraccion der)
{
    fraccion resultado;
    int u,v,w,x,y,z;
    if(izq.getden()==der.getden())
    {
        x=izq.getnum()+izq.getnum();
        y=izq.getden();
    }
    else
    {
        w=maximocomundivisor(izq.getden(),der.getden());
        u=izq.getden()*der.getden();
        u=u/w;
        y=(u/izq.getden())*izq.getnum();
        v=(u/der.getden())*der.getnum();
        x=y+v;
        z=u;
    }
    resultado.inicializar(x,z);
    return resultado;
}

fraccion operator +(fraccion fracc,int a)
{
    fraccion res;
    int x,y;
    x=(a*fracc.getden())+fracc.getnum();
    y=fracc.getden();
    res.inicializar(x,y);
    return res;
}

fraccion operator *(fraccion izq,fraccion der)
{
    fraccion res;
    int x,y;
    x=izq.getnum()*der.getnum();
    y=izq.getden()*der.getden();
    res.inicializar(x,y);
    return res;
}

int main()
{
    fraccion a,b,c;
    a.inicializar(1,3);
    b.inicializar(1,2);
    //c=a+b;
    c=a*b;
    cout<<c.getnum()<<" / "<<c.getden()<<endl;


}
