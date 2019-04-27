#include <iostream>
// 23 dos vectores sumados en un tercero
using namespace std;

int main()
{
    int a[5],b[5],c[5];
    for(int i=0;i<5;i++)
    {
        cout<<"a "<<i;cin>>a[i];
        cout<<"\nb "<<i;cin>>b[i];
        c[i]=b[i]+a[i];
    }
    cout<<endl<<endl<<"a b c"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;;
    }
}
