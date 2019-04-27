#include <iostream>
#include<cstdlib>

using namespace std;

string cur_ayuda;
int existe=-1;
int bande_v=0;
int n_nota=10;
int n_foli=1347;
int n_piz=0;

class producto
{
public:
    string tipo,nombre;
    int numero;
    float precio;

    producto()
    {
        nombre="libre";
    }

    void iniciar(string nom,int n,float p,string t="pizza")
    {
        tipo=t;
        nombre=nom;
        numero=n;
        precio=p;
        n_piz++;
    }

    void elim()
    {
        nombre="libre";
        n_piz--;
    }

    void ver()
    {
        cout<<"tipo : "<<tipo<<endl;
        cout<<"nombre : "<<nombre<<endl;
        cout<<"precio : "<<precio<<endl;
    }

}pizzas[5];

int busc_piz(producto p[],string nom)
{
    for(int i=0;i<5;i++)
    {
        if(p[i].nombre==nom)
        {
            return i;
        }
    }
    return -1;
}


class persona
{
public:
    string nombre;
    string apellido;
    string domicilio[3];
    string telefono;
    string curp;
    string rfc;
    string imss;
    void alta(string curpp)
    {
            curp=curpp;
            cout<<"nombre\t\t: ";
            cin>>nombre;
            cout<<"apellido\t\t: ";
            cin>>apellido;
            cout<<"telefono\t\t: ";
            cin>>telefono;
            cin.ignore(10000,'\n');
            cout<<"domicilio calle\t : ";
            getline(cin,domicilio[0]);
            cout<<"domicilio numero\t : ";
            getline(cin,domicilio[1]);
            cout<<"domicilio C.P\t: ";
            getline(cin,domicilio[2]);

    }
    void alta(string curpp,string a,int c)
    {
            (c==1)? imss=a:rfc=a;
            curp=curpp;
            cout<<"nombre\t\t\t: ";
            cin>>nombre;
            cout<<"apellido\t\t: ";
            cin>>apellido;
            cout<<"telefono\t\t: ";
            cin>>telefono;
            cin.ignore(10000,'\n');
            cout<<"domicilio calle\t\t: ";
            getline(cin,domicilio[0]);
            cout<<"domicilio numero\t: ";
            getline(cin,domicilio[1]);
            cout<<"domicilio C.P\t\t: ";
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
            cout<<"nombre    \t\t: "<<nombre<<endl;
            cout<<"apellido  \t\t: "<<apellido<<endl;
            cout<<"telefono  \t\t: "<<telefono<<endl;
            cout<<"curp      \t\t: "<<curp<<endl;
            cout<<"domicilio \t\t: "<<domicilio[0]<<endl;
            existe=-1;
    }

};

class cliente : public persona
{
public:
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
    string puesto,salario;
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

bool validar_rfc(cliente a[],string rfcc)
{
    for(int i=0;i<5;i++)
    {
        if(a[i].rfc==rfcc)
        {
            cout<<"RFC ya existe";
            return 0;
        }
    }
return 1;
}

int es_unico(string curpcom,cliente a[])
{
    for(int i=0;i<5;i++)
    {
        if(a[i].curp==curpcom)
        {
            existe=i;
            cout<<"curp ya existe"<<endl;
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

bool validar_imss(empleado a[],string ims)
{
    for(int i=0;i<5;i++)
    {
        if(a[i].imss ==ims)
        {
            cout<<"IMSS ya existe";
            return 0;
        }
    }
return 1;
}

int es_unico(string curpcom,empleado a[])
{
    for(int i=0;i<5;i++)
    {
        if(a[i].curp==curpcom)
        {
            existe=i;
            cout<<"curp ya existe"<<endl;
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

// lo ultimo

class nota
{
public:
    int numero;
    void inst(int num)
    {
        numero=num;
    }

};


class factura
{
public:
    int folio;
    string rfc;
    void inst(cliente c)
    {
        rfc=c.rfc;

    }


};

class venta
{
public:
    char nof;
    string fecha[3];
    int cantidad;
    float total;
    factura f;
    nota n;
    cliente a;
    producto pizz;

    venta()
    {
        cantidad=0;
    }



    int inst(cliente boludos[],producto p)
    {
        string curp;
        int lugar=-1;
        while(1)
        {
            cout<<"cual es el la curp"<<endl;cin>>curp;
            for(int i=0;i<boludos[0].band;i++)
            {
                if(boludos[i].curp==curp)
                {
                    lugar=i;
                    break;
                }
            }
            if(lugar>=0)
            {
                break;
            }
            else
            {
                cout<<"curp invalida"<<endl;
                return 0;
            }
        }
        a=boludos[lugar];
        lugar=-1;
        pizz=p;



        cout<<"dia"<<endl;cin>>fecha[0];
        cout<<"mes"<<endl;cin>>fecha[1];
        cout<<"año"<<endl;cin>>fecha[2];
        cout<<"cuantas compro?"<<endl;cin>>cantidad;
        total=cantidad*pizz.precio;
        while(1)
        {
            int opc;
            cout<<"quiere 1- factura o 2- nota"<<endl;cin>>opc;
            if(opc==2)
            {
                n.inst(n_nota);
                n_nota=n_nota+1;
                nof='n';
                break;
            }else if(opc==1)
            {
                f.inst(a);
                n_foli=n_foli+2;
                nof='f';
                break;
            }
        }
        bande_v++;

    }
    void ver_nof()
    {
        if(nof=='n')
        {
            cout<<"nota"<<endl;
            cout<<"numero de nota : "<<n.numero<<endl;
            cout<<"pedido por : "<<a.nombre<<a.apellido<<endl;
            cout<<"el dia : ";
            for(int i=0;i<3;i++)
                cout<<fecha[i]<<"\t";
            cout<<"total : "<<total;
        }
        else
        {
            cout<<"factura"<<endl;
            cout<<"numero de folio : "<<f.folio<<endl;
            cout<<"pedido por : "<<a.nombre<<a.apellido<<endl;
            cout<<"el dia : ";
            for(int i=0;i<3;i++)
                cout<<fecha[i]<<"\t";
            cout<<"total : "<<total;

        }
    }

    void ver(void)
    {
        cout<<pizz.nombre<<endl;
        cout<<a.nombre<<" "<<a.apellido<<endl;
        cout<<total<<endl;
        cout<<"el dia"<<endl;
        for(int i=0;i<3;i++)
            cout<<fecha[i]<<"\t";

    }

    bool elim()
    {
        cantidad=0;

        (bande_v==0)? bande_v=0:bande_v--;
    }
}atm_of_erebus[5];





int cliente::band= 0;
int empleado::band= 0;



//***************************************
//*************************************
int main()
{



    pizzas[0].iniciar("vegetariana",1,80);
    pizzas[1].iniciar("carnesfrias",2,80);
    pizzas[2].iniciar("ranchera",3,80);
    pizzas[3].iniciar("peperoni",4,80);
 //   pizzas[4].iniciar("mexicana",5,80);


    cliente cli[5];

    cli[0].nombre="marco";
    cli[0].apellido="gallegos";
    cli[0].rfc="bash";
    cli[0].curp="12";
    cli[0].telefono="3311318";
    cli[0].band++;
 //   cli[1].alta("13","merge",0);
   // cli[0].band++;

   atm_of_erebus[0].a=cli[0];
   atm_of_erebus[0].cantidad=10;
   atm_of_erebus[0].f.folio=n_foli;
   atm_of_erebus[0].f.rfc="bitch";
   atm_of_erebus[0].fecha[0]="12";
   atm_of_erebus[0].fecha[1]="ene";
   atm_of_erebus[0].fecha[2]="14";
   atm_of_erebus[0].pizz=pizzas[3];
   atm_of_erebus[0].nof='f';
   atm_of_erebus[0].total=atm_of_erebus[0].cantidad*atm_of_erebus[0].pizz.precio;
   atm_of_erebus[1]=atm_of_erebus[0];
   bande_v++;
   bande_v++;


    string c,rfc,ims,pz;
    int v,aux=0;;
    unsigned int opc=0,opc1=0;
    do
    {
        system("clear");



        cout<<"\t\t\t\t\t\t******* PIZZERIA POMPEI *******"<<endl;
        cout<<"\t\t\t\t1 - clientes\t2 - empleados\t3 - ventas\t4 - pizzas\t9 - salir"<<endl;cin>>opc;
        switch(opc)
        {
        case 1:
            do
            {
                system("clear");


                cout<<"\t\t\t\t\t\t\t MENU CLIENTES "<<endl;
                cout<<"\n\t\t\t\t\t\t******** que va a hacer ********\n\t\t1 - insertar\t2 - consultas\t3 - modificaciones\t4 - eliminaciones\t9 - salir del sistema"<<endl;cin>>opc1;
                switch(opc1)
                {
                case 1:
                    cout<<"\t\t\t\t\t\thay que validar la curp a insertar"<<endl;cin>>c;
                    if(es_unico(c,cli)!=0)
                    {
                        cout<<"\t\t\t\t\t\tmuy bien ahora el rfc"<<endl;cin>>rfc;
                        if(validar_rfc(cli,rfc))
                        {
                            if(cli[0].band<5)
                            {
                                cli[cli[0].band].alta(c,rfc,0);
                                cli[0].band++;
                            }
                            else
                            {
                                cout<<"\t\t\t\t\t\t^^^^^^ array lleno ^^^^^^"<<endl;
                            }
                        }
                        else
                        {
                            cout<<"\t\t\t\t\t\tya existe el rfc"<<endl;
                        }
                    }
                    break;
                case 2:
                    cout<<"\t\t\t\t\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,cli);
                    if(existe>=0)
                    {
                        cli[existe].ver();
                    }
                    break;
                case 3:
                    cout<<"\t\t\t\t\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,cli);
                    if(existe>=0)
                    {
                        cli[existe].alta(c);
                        existe=-1;
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t^^^^^^no existe^^^^^^"<<endl;
                    }

                    break;
                case 4:
                    cout<<"\t\t\t\t\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,cli);
                    if(existe>=0)
                    {
                        eliminac(c,cli);
                        existe=-1;
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t^^^^^^^no existe^^^^^^"<<endl;
                    }
                    break;
                default:
                    break;
                }


                system("read vvv");
            }while(opc1!=9);
            break;
        case 2:
            do
            {
                system("clear");


                cout<<"\t\t\t\t\t\t\t MENU EMPLEADOS "<<endl;
                cout<<"\n\t\t\t\t\t\t******** que va a hacer ********\n\t\t1 - insertar\t2 - consultas\t3 - modificaciones\t4 - eliminaciones\t9 - salir del sistema"<<endl;cin>>opc1;
                switch(opc1)
                {
                case 1:
                    cout<<"\t\t\t\t\t\thay que validar la curp a insertar"<<endl;cin>>c;
                    if(es_unico(c,empl)!=0)
                    {
                        cout<<"\t\t\t\t\t\tahora el imss"<<endl;cin>>ims;
                        if(validar_imss(empl,ims))
                        {
                            if(empl[0].band<5)
                            {
                                empl[empl[0].band].alta(cur_ayuda,ims,1);
                                empl[0].band++;
                            }
                            else
                            {
                                cout<<"\t\t\t\t\t\t^^^^^^ array lleno ^^^^^^"<<endl;
                            }
                        }
                        else
                        {
                            cout<<"\t\t\t\t\t\tya existe este numero de imss"<<endl;
                        }
                    }
                    break;
                case 2:
                    cout<<"\t\t\t\t\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,empl);
                    if(existe>=0)
                    {
                        empl[existe].ver();
                    }
                    break;
                case 3:
                    cout<<"\t\t\t\t\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,empl);
                    if(existe>=0)
                    {
                        empl[existe].alta(c);
                        existe=-1;
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t^^^^^^no existe^^^^^^"<<endl;
                    }

                    break;
                case 4:
                    cout<<"\t\t\t\t\t\tcual es la curp"<<endl;cin>>c;
                    es_unico(c,empl);
                    if(existe>=0)
                    {
                        eliminac(c,empl);
                        existe=-1;
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t^^^^^^^no existe^^^^^^"<<endl;
                    }
                }


                system("read vvv");
            }while(opc1!=9);

            break;
        case 3:
            do
            {
                system("clear");


                cout<<"\t\t\t\t\t\t\t MENU VENTAS "<<endl;
                cout<<"\n\t\t\t\t\t\t******** que va a hacer ********\n\t\t1 - insertar\t2 - consultas\t3 - modificaciones\t4 - eliminaciones\t9 - salir del sistema"<<endl;cin>>opc1;
                switch(opc1)
                {
                    case 1:
                        cout<<"\t\t\t\t\t\tcual es la pizza que compro "<<endl;cin>>pz;
                        if(bande_v<5)
                        {
                            v=busc_piz(pizzas,pz);
                            if(v!=-1)
                            {
                                atm_of_erebus[bande_v].inst(cli,pizzas[v]);
                            }
                        }
                        else
                        {
                            cout<<"\t\t\t\t\t\tNO PODEMOS TENER MAS"<<endl;
                        }
                            v=-1;
                        break;
                    case 2:
                        cout<<"\t\t\t\t\t\tcual quiere ver"<<endl;cin>>v;
                        if(v>=5)
                        {
                            cout<<"\t\t\t\t\t\tnoexiste "<<endl;
                            break;
                        }
                        if(atm_of_erebus[v].cantidad==0)
                        {
                            cout<<"\t\t\t\t\t\tno existe"<<endl;
                            break;
                        }
                        atm_of_erebus[v].ver();
                        v=-1;
                        break;
                    case 3:
                        cout<<"\t\t\t\t\t\tla curp de el comprador "<<endl;cin>>c;
                        cout<<"\t\t\t\t\t\tcual es la pizza que compro"<<endl;cin>>pz;
                        if(bande_v==0)
                        {
                            break;
                        }
                        else
                        {

                            for(int i=0;i<5;i++)
                            {
                                if(atm_of_erebus[i].a.curp==c&&atm_of_erebus[i].pizz.nombre==pz)
                                {
                                    v=i;
                                }
                            }
                            if(v!=-1)
                            {
                                atm_of_erebus[v].inst(cli,pizzas[busc_piz(pizzas,pz)]);
                            }
                            else
                            {
                                cout<<"\t\t\t\t\t\tno existe"<<endl;
                            }
                        }
                        v=-1;
                        break;
                    case 4:
                        cout<<"\t\t\t\t\t\tcual es la curp de el comprador"<<endl;cin>>c;
                        cout<<"\t\t\t\t\t\tcual es la piza que compro"<<endl;cin>>pz;
                        for(int i =0;i<5;i++)
                        {
                            if(atm_of_erebus[i].a.curp==c&&atm_of_erebus[i].pizz.nombre==pz)
                            {
                                v=i;
                                break;
                            }
                        }
                        if(v==-1||v==5)
                        {
                            break;
                        }
                        if(v==4)
                        {
                            atm_of_erebus[v].elim();
                        }
                        else
                        {
                            aux=v;
                            atm_of_erebus[v].elim();
                            while(atm_of_erebus[aux+1].cantidad!=0)
                            {
                                atm_of_erebus[aux]=atm_of_erebus[aux+1];
                                atm_of_erebus[aux+1].cantidad=0;
                                aux++;
                            }
                            aux=0;
                        }

                        v=-1;
                        break;
                }


            }while(opc1!=9);
            break;
        case 4:
            do
            {
                system("clear");


                cout<<"\t\t\t\t\t\t\t MENU PIZZAS "<<endl;
                cout<<"\n\t\t\t\t\t\t******** que va a hacer ********\n\t\t1 - insertar\t2 - consultas\t3 - modificaciones\t4 - eliminaciones\t9 - salir del sistema"<<endl;cin>>opc1;
                switch(opc1)
                {
                case 1:
                    cout<<"\t\t\t\t\t\tnombre de la pizza "<<endl;cin>>pz;
                    if(n_piz<5)
                    {
                        pizzas[n_piz].iniciar(pz,10,90);
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\testa lleno"<<endl;
                    }

                    break;
                case 2:
                    while(pizzas[aux].nombre!="libre"&&aux<5)
                    {
                        pizzas[aux].ver();
                        aux++;
                    }
                    aux=0;
                    break;
                case 3:
                    cout<<"\t\t\t\t\t\tque pizza cambiara (nombre)"<<endl;cin>>pz;
                    if(busc_piz(pizzas,pz)!=-1)
                    {
                        v=busc_piz(pizzas,pz);
                        cout<<"\t\t\t\t\t\tnuevo nombre"<<endl;cin>>pz;
                        pizzas[v].iniciar(pz,10,80);
                        n_piz--;
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\tno se encuentra"<<endl;
                    }
                    v=-1;
                    break;
                case 4:
                    cout<<"\t\t\t\t\t\tque pizza eliminaras"<<endl;cin>>pz;
                    v=busc_piz(pizzas,pz);
                    if(busc_piz(pizzas,pz)!=-1)
                    {
                        if(busc_piz(pizzas,pz)==4)
                        {
                            pizzas[busc_piz(pizzas,pz)].elim();

                        }
                        else
                        {
                            pizzas[busc_piz(pizzas,pz)].elim();

                            for(int i=v;i<4;i++)
                            {
                                pizzas[i]=pizzas[i+1];
                                pizzas[i+1].nombre="libre";
                            }
                        }
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\tno existe"<<endl;
                    }
                    v=-1;
                    break;
                }



                system("read vvv");

            }while(opc!=9);

            break;
        default:
            break;
        }
    }while(opc!=9);

}


