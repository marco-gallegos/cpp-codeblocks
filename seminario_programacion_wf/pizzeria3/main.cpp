#include <iostream>
#include <string.h>
#include<string>
using namespace std;

string cur_ayuda;
int existe=-1;
int bandera=0;

class persona
{
public:
    string nombre;
    string apellido;
    string domicilio;
    string telefono;
    string curp;
    void alta(string curpp)
    {
            curp=curpp;
            cout<<"nombre"<<endl;
            cin>>nombre;
            cout<<"apellido"<<endl;
            cin>>apellido;
            cout<<"telefono"<<endl;
            cin>>telefono;
            cout<<"domicilio"<<endl;
            cin>>domicilio;
            bandera=bandera+1;
            existe=-1;
    }
    void baja()
    {
        curp="";
        bandera=bandera-1;

    }
    void ver()
    {
            cout<<"nombre    : "<<nombre<<endl;
            cout<<"apellido  : "<<apellido<<endl;
            cout<<"telefono  : "<<telefono<<endl;
            cout<<"curp      : "<<curp<<endl;
            cout<<"domicilio : "<<domicilio<<endl;

    }

};

int es_unico(string curpcom,persona a[])
{
    for(int i=0;i<200;i++)
    {
        if(a[i].curp==curpcom)
        {
            cout<<"en el lugar              "<<i<<endl;
            existe=i;
            cout<<"variable globar existe = "<<existe<<endl;
            return 0;
        }
    }
cur_ayuda =curpcom;
return 1;
}





int main()
{
    string c;
    persona clientes[200];
    unsigned int opc=0;

    cout<<"bandera  "<<bandera<<endl;
    cout<<"que va a hacer\n1: insertar\n2: consultas\n3: modificaciones\n4: eliminaciones\n5: salir del sistema\n";
    cin>>opc;
    switch(opc)
    {
    case 1:
        cout<<"validar curp\n";cin>>c;
        if(es_unico(c,clientes)!=0)
        {
            clientes[bandera].alta(cur_ayuda);
        }
        else
        {
            cout<<"no es valido ya existe este cliente\n";
        }
        break;
    case 2:
        cout<<"cual es la curp"<<endl;cin>>c;
        es_unico(c,clientes);
        if(existe>=0)
        {
            clientes[existe].ver();
        }
        else
        {
            cout<<"no existe dicha curp"<<endl;
        }

        break;
    case 3:
        cout<<"cual es la curp"<<endl;cin>>c;
        es_unico(c,clientes);
        if(existe>=0)
        {
            clientes[existe].alta(cur_ayuda);
        }
        else
        {
            cout<<"no existe dicha curp"<<endl;
        }

        break;
    case 4:
        break;
    case 5:
        cout<<"adios\n";
        break;
    default:
        cout<<"opcion invalida\n";
        break;
    }

}
