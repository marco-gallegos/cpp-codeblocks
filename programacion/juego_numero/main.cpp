#include <iostream>
#include<stdlib.h>
using namespace std;

class juego
{
public:
    int numero;
    void iniciar(int s)
    {
        srand(s);
        numero=rand()% (100-1+1)+1;
        //cout<<numero<<endl;
    }

    void jugar()
    {
        int tr=0;
        while(tr<10)
        {
            int opc;
            cout<<"que numero crees que es "<<endl;
            cin>>opc;
            if(opc==numero)
            {
                cout<<"correcto"<<endl;
                tr=10;
            }
            else
            {
                cout<<"no"<<endl;
                tr++;
            }
        }
        cout<<"el numero era "<<numero<<endl;
    }
};

int main()
{
    juego a1;
    int opc=1;
    while(opc!=0)
    {
        cout<<"juego nuevo"<<endl;
        a1.iniciar(rand());
        a1.jugar();
    }

}
