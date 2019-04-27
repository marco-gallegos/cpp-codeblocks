#include <iostream>
//26 promedio arreglo 10 y mayores
using namespace std;

int main()
{
    int a[10],num=0,aux[10];
    int prom=0;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        prom=prom+a[i];
    }
    prom=prom/10;
    for(int i=0;i<10;i++)
    {
        if(a[i]>prom)
        {
            aux[num]=a[i];
            num++;
        }
    }
    cout<<"hay "<<num<<" elementos mayores a el promedio "<<prom<<endl;
    int z=0;
    while(aux[z])
    {
        cout<<aux[z]<<endl;
        z++;
    }

}
