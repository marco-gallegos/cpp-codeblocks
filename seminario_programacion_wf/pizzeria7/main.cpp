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
    string domicilio[3];
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
            cout<<"\t\tdomicilio calle"<<endl;
            cin>>domicilio[0];
            cout<<"\t\tdomicilio numero"<<endl;
            cin>>domicilio[1];
            cout<<"\t\tdomicilio C.P"<<endl;
            cin>>domicilio[2];

            bandera=bandera+1;
            //existe=-1;
    }
    persona()
    {
        curp="disponible";
    }
    void baja()
    {
        curp="disponible";
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
            existe=i;
            cout<<"variable existe = "<<existe<<endl<<endl;
            return 0;
        }
    }
cur_ayuda =curpcom;
return 1;
}

void eliminac()
{

}



int main()
{
    string c;
    persona clientes[200];
    unsigned int opc=0;
    do{
    existe=-1;
    cout<<"bandera  "<<bandera<<endl;
    cout<<"\t******** que va a hacer ********\n\t\t1: insertar\n\t\t2: consultas\n\t\t3: modificaciones\n\t\t4: eliminaciones\n\t\t5: salir del sistema\n";
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
    case 4:cout<<"cual es la curp"<<endl;cin>>c;
        es_unico(c,clientes);
        if(existe>=0)
        {

        }



    break;
    case 5:
        cout<<"adios\n";
    break;
    default:
        cout<<"opcion invalida\n";
        break;
    }
    }while(opc!=5);

}

