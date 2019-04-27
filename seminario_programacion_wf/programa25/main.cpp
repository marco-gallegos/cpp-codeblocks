#include <iostream>

using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int m=0;
    for(int i=0;i<10;i++)
    {
        if(a[m]<a[i])
        {
            m=i;
        }

    }
    cout<<"el mayor es "<<a[m]<<" en las posicion "<<m+1;
}
