#include <iostream>

using namespace std;

class insecto
{
protected:
    bool alas;
    float tam,peso;
    string familia,habitad;
    int n_patas,periodo_vida;
public:
    virtual void comunicar()
    {
        cout<<"no hay sonido"<<endl;
    }
};

class cucaracha : public insecto
{
public:
    cucaracha()
    {
        n_patas=8;
        alas=1;
        tam=1.6;
        familia="no tengo la menor idea";
        periodo_vida=2;
        peso=0.1;
        habitad="humedad";
    }

    void comunicar()
    {
        cout<<"no hago ruido soy una cucaracha"<<endl;
    }

};


class cienpies : public insecto
{
public:
    cienpies()
    {
        n_patas=68;
        alas=0;
        tam=7;
        familia="no tengo la menor idea";
        periodo_vida=2;
        peso=0.2;
        habitad="humedad";
    }
    void comunicar()
    {
        cout<<"no hago ruido soy cienpies"<<endl;
    }
};

int main()
{

}
