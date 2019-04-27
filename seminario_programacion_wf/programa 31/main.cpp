#include <iostream>
//31 matriz de 3x3 sumar filas en un vector y col en otro
using namespace std;

int main()
{
    int m[3][3],f[3],c[3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" numero en posicion "<<i<<" "<<j<<"\n";
            cin>>m[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++)
    {
        int sum=0,sum1=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+m[i][j];
            sum1=sum1+m[j][i];
        }
        f[i]=sum;
        c[i]=sum1;
    }
    cout<<f[0]<<" "<<f[1]<<" "<<f[2]<<" "<<endl;
    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<endl;


}
