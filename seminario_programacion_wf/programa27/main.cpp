#include <iostream>

using namespace std;

int main()
{
    int a[5],b[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        b[i]=a[i]*a[i];
    }
    cout<<"a b"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" "<<b[i]<<endl;
    }
}
