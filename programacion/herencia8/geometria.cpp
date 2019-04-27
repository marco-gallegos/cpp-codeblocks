#include<iostream>
using namespace std;
class poligonoregular
{
protected:
    int n_lados;
    float tamano[10],perimetro,area,apotema;
    bool l_iguales;
public:

    poligonoregular()
    {
        l_iguales=1;
    }
    virtual void area()
    {
    }
    void perimetro()
    {
            perimetro=tamano[0]*n_lados;
    }
};

class cuadro : public poligonoregular
{
public:

    cuadro()
    {
        cout<<"tamaño de lado"<<endl;
        cin>>tamano[0];
    }
    void area()
    {
        area=tamano[0]*tamano[0];
    }

};

class rectangulo : public poligonoregular
{
public:
    rectangulo()
    {
        cout<<"lado 1";cin>>tamano[0];

        cout<<"lado 2";cin>>tamano[1];
    }
    void area()
    {
        area=tamano[0]*tamano[1];
    }

};
