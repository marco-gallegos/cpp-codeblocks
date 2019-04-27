#include <iostream>
#include<stdio.h>
#include<stdlib.h>
//cualquier tabla con for
using namespace std;

int main()
{
    cout<<sizeof(int)<<endl;
    for(int i=0;;)
    {
        cout<<"que tabla quieres ver"<<endl;int a;
        cin>>a;
        for(int z=1;z<11;z++)
        {
            cout<<a<<" x "<<z<<" = "<<a*z<<endl;
        }
    }
}
