#include <iostream>
#include<cstdlib>
// matriz 4x4 que almacene la suma de los renglones y de las columnas en un vector
using namespace std;

int main()
{
    int m[4][4];
    int v[8];
    for(int a=0;a<4;a++)
    {
        srand(time(NULL));
        for(int b=0;b<4;b++)
        {
            m[a][b]=rand()%100;
        }
    }
    for(int a=0;a<4;a++)
    {
        int sum=0,sum1=0;
        for(int b=0;b<4;b++)
        {
            sum=sum+m[a][b];
            sum1=sum1+m[b][a];
        }
        v[a]=sum;
        v[a+4]=sum1;
    }

    for(int a=0;a<4;a++)
    {
        for(int b=0;b<4;b++)
        {
            cout<<m[a][b]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<8;i++)
    {
        cout<<v[i]<<" ";
    }
}
