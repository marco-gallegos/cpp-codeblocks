#include <iostream>

using namespace std;
class persona
{
public:
    string nombre;
    string apellido;
    string telefono;
    string curp;
    void alta(string curpp,int band)
    {
            curp=curpp;
            cout<<"nombre"<<endl;
            cin>>nombre;
            cout<<"apellido"<<endl;
            cin>>apellido;
            cout<<"telefono"<<endl;
            cin>>telefono;
            band+=1;
    }
    void baja(int band)
    {
        //en construccion :D
    }
    void ver()
    {
            cout<<"nombre   : "<<nombre<<endl;
            cout<<"apellido : "<<apellido<<endl;
            cout<<"telefono : "<<telefono<<endl;
            cout<<"curp     : "<<curp<<endl;

    }
};
int main()
{
}

