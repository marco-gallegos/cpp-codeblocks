#include <iostream>

using namespace std;

string cur_ayuda;
int existe=-1;

class producto
{
public:
    string tipo,nombre;
    int numero;
};

class nota
{
public:

};

class factura
{
public:

};

class venta
{
public:

};

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
            cin.ignore(10000,'\n');
            cout<<"\tdomicilio calle"<<endl;
            getline(cin,domicilio[0]);
            cout<<"\tdomicilio numero"<<endl;
            getline(cin,domicilio[1]);
            cout<<"\tdomicilio C.P"<<endl;
            getline(cin,domicilio[2]);

    }
    persona()
    {
        curp="disponible";
    }
    void baja()
    {
        curp="disponible";
    }
    void ver()
    {
            cout<<"nombre    : "<<nombre<<endl;
            cout<<"apellido  : "<<apellido<<endl;
            cout<<"telefono  : "<<telefono<<endl;
            cout<<"curp      : "<<curp<<endl;
            cout<<"domicilio : "<<domicilio[0]<<endl;
            existe=-1;
    }

};

class cliente : public persona
{
public:
    string rfc;
    static int band;
    cliente()
    {
    }
    void altac(cliente a)
    {
            curp=a.curp;
            nombre=a.nombre;
            apellido=a.apellido;
            telefono=a.telefono;
            for(int i=0;i<3;i++)
            {
                domicilio[i]=a.domicilio[i];
            }

    }

};

class empleado : public persona
{
public:
    static int band;
    string imss,puesto,salario;
    empleado()
    {
    }
    void altac(empleado a)
    {
            curp=a.curp;
            nombre=a.nombre;
            apellido=a.apellido;
            telefono=a.telefono;
            for(int i=0;i<3;i++)
            {
                domicilio[i]=a.domicilio[i];
            }

    }

}empl[5];

// funciones

//para clientes
int es_unico(string curpcom,cliente a[])
{
    for(int i=0;i<5;i++)
    {
        if(a[i].curp==curpcom)
        {
            existe=i;
            cout<<"curp existe en "<<existe<<endl<<endl;
            return 0;
        }
    }
cur_ayuda =curpcom;
return 1;
}
void eliminac(string curpcom,cliente a[])
{
    if(a[existe+1].curp=="disponible")
    {
        a[existe].baja();
        a[0].band--;
    }
    if(a[existe+1].curp!="disponible")
    {
        for(int i=existe;i<4;i++)
        {
            a[i].altac(a[i+1]);
        }
        a[0].band--;
    }


}


// para empleados
int es_unico(string curpcom,empleado a[])
{
    for(int i=0;i<5;i++)
    {
        if(a[i].curp==curpcom)
        {
            existe=i;
            cout<<"curp existe en "<<existe<<endl<<endl;
            return 0;
        }
    }
cur_ayuda =curpcom;
return 1;
}

void eliminac(string curpcom,empleado a[])
{
    if(a[existe+1].curp=="disponible")
    {
        a[existe].baja();
        a[0].band--;
    }
    if(a[existe+1].curp!="disponible")
    {
        for(int i=existe;i<4;i++)
        {
            a[i].altac(a[i+1]);
        }
        a[0].band--;
    }


}



int cliente::band= 0;
int empleado::band= 0;

//***************************************
//*************************************
int main()
{
    cliente cli[5];
    string c;
    unsigned int opc=0,opc1=0;
    do
    {
        cout<<"\t\t\t\t\t\t******* pizzeria pompei *******"<<endl;
        cout<<"\t\t\t\t1 - clientes\t2 - empleados\t3 - ventas\t9 - salir"<<endl;cin>>opc;
        switch(opc)
        {
        case 1:
            do
            {
                cout<<"\n\t\t\t\t\t\t******** que va a hacer ********\n\t\t1 - insertar\t2 - consultas\t3 - modificaciones\t4 - eliminaciones\t9 - salir del sistema"<<endl;cin>>opc1;
                switch(opc1)
                {
                case 1:
                    cout<<"\t\thay que validar la curp a insertar"<<endl;cin>>c;
                    if(es_unico(c,cli)!=0)
                    {
                        if(cli[0].band<5)
                        {
                            cli[cli[0].band].alta(cur_ayuda);
                            cli[0].band++;
                        }
                        else
                        {
                            cout<<"^^^^^^ array lleno ^^^^^^"<<endl;
                        }
                    }
                    break;
                case 2:
                    cout<<"\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,cli);
                    if(existe>=0)
                    {
                        cli[existe].ver();
                    }
                    break;
                case 3:
                    cout<<"\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,cli);
                    if(existe>=0)
                    {
                        cli[existe].alta(c);
                        existe=-1;
                    }
                    else
                    {
                        cout<<"\t^^^^^^no existe^^^^^^"<<endl;
                    }

                    break;
                case 4:
                    cout<<"\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,cli);
                    if(existe>=0)
                    {
                        eliminac(c,cli);
                        existe=-1;
                    }
                    else
                    {
                        cout<<"\t^^^^^^^no existe^^^^^^"<<endl;
                    }
                    break;
                default:
                    break;
                }
            }while(opc1!=9);
            break;
        case 2:
            do
            {
                cout<<"\n\t\t\t\t\t\t******** que va a hacer ********\n\t\t1 - insertar\t2 - consultas\t3 - modificaciones\t4 - eliminaciones\t9 - salir del sistema"<<endl;cin>>opc1;
                switch(opc1)
                {
                case 1:
                    cout<<"\t\thay que validar la curp a insertar"<<endl;cin>>c;
                    if(es_unico(c,empl)!=0)
                    {
                        if(empl[0].band<5)
                        {
                            empl[empl[0].band].alta(cur_ayuda);
                            empl[0].band++;
                        }
                        else
                        {
                            cout<<"^^^^^^ array lleno ^^^^^^"<<endl;
                        }
                    }
                    break;
                case 2:
                    cout<<"\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,empl);
                    if(existe>=0)
                    {
                        empl[existe].ver();
                    }
                    break;
                case 3:
                    cout<<"\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,empl);
                    if(existe>=0)
                    {
                        empl[existe].alta(c);
                        existe=-1;
                    }
                    else
                    {
                        cout<<"\t^^^^^^no existe^^^^^^"<<endl;
                    }

                    break;
                case 4:
                    cout<<"\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,empl);
                    if(existe>=0)
                    {
                        eliminac(c,empl);
                        existe=-1;
                    }
                    else
                    {
                        cout<<"\t^^^^^^^no existe^^^^^^"<<endl;
                    }
                }
            }while(opc1!=9);

            break;
        default:
            break;
        }
    }while(opc!=9);


//codigo valido hasta antes de la herencia "pizzeria 7"
 /*   do
    {
    existe=-1;
    cout<<"bandera  "<<bandera<<endl;
    cout<<"\t******** que va a hacer ********\n\t\t1: insertar\n\t\t2: consultas\n\t\t3: modificaciones\n\t\t4: eliminaciones\n\t\t5: salir del sistema\n";
    cin>>opc;
    switch(opc)
    {
    case 1:
        cout<<"validar curp\n";cin>>c;
        if(es_unico(c,personas)!=0)
        {
            personas[bandera].alta(cur_ayuda);
        }
        else
        {
            cout<<"no es valido ya existe este cliente\n";
        }
        break;
    case 2:
        cout<<"cual es la curp"<<endl;cin>>c;
        es_unico(c,personas);
        if(existe>=0)
        {
            personas[existe].ver();
        }
        else
        {
            cout<<"no existe dicha curp"<<endl;
        }

    break;
    case 3:
        cout<<"cual es la curp"<<endl;cin>>c;
        es_unico(c,personas);
        if(existe>=0)
        {
            personas[existe].alta(cur_ayuda);
        }
        else
        {
            cout<<"no existe dicha curp"<<endl;
        }

    break;
    case 4:cout<<"cual es la curp"<<endl;cin>>c;
        es_unico(c,personas);
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
*/
}

