#include <iostream>
// llenar 2 vectores de 5 espacios y sumarlos en un vector c para imprimirlos todos
using namespace std;

int main()
{
    int a[5],b[5],c[5];

    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<c[i];
    }
    cout<<endl;
}
