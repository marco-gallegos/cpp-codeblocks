#include <iostream>
#include<stdlib.h>
/* diseñar un programa que imprima cualquier tabla de multiplicar con while */
using namespace std;

int main()
{int opc=99;

    while(opc!=2)
    {
        if(opc==99)
        {
        int t,cont=1;
        cout <<"que tabla quieres ver"<<endl;
        cin>>t;
        while(cont<=10)
        {
            cout<<t<<" x "<<cont<<" = "<<t*cont<<endl;
            cont++;
        }
        opc=1;
        }
        else
        {
            cout<<"que deseas hacer 1= otra tabla 2= salir"<<endl;
            cin>>opc;
            if(opc==1)
            {
                        int t,cont=1;
                cout <<"que tabla quieres ver"<<endl;
                cin>>t;
                while(cont<=10)
                {
                    cout<<t<<" x "<<cont<<" = "<<t*cont<<endl;
                    cont++;
                }
            }
        }
    }


}
