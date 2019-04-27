#include<iostream>
using namespace std;

class prenda
{
protected:
    string color,marca;
    char talla,sexo;
};

class playera : public prenda
{
    int mangas;
    string tipo_de_mangas,dibujo;
    bool lisa;
public:
    playera()
    {
        string comp;
        mangas=2;
        cout<<"es lisa ";cin>>comp;
        if(comp!="no")
        {
            lisa=0;
            cout<<"describe lo que tiene";
            getline(cin,dibujo);
        }
        else
        {
            lisa=0;
            dibujo="nada";
        }
        cout<<"color";
        cin>>color;
        cout<<"para mujer m o hombre h";
        cin>>sexo;
        cout<<"talla c/m/g";
        cin>>talla;
        cout<<"marca";
        cin>>marca;
        tipo_de_mangas="corta";

    }

};

class jean: public prenda
{
    bool recto;
    int n_bolsas;
public:
    jean()
    {
cout<<"color";
        cin>>color;
        cout<<"para mujer m o hombre h";
        cin>>sexo;
        cout<<"talla c/m/g";
        cin>>talla;
        cout<<"marca";
        cin>>marca;
        cout<<"recto 1/0?";
        cin>>recto;
        cout<<"color";
        cin>>color;
        cout<<"para mujer m o hombre h";
        cin>>sexo;
        cout<<"talla c/m/g";
        cin>>talla;
        cout<<"numero de bolsas";
        cin>>n_bolsas;
    }
};
