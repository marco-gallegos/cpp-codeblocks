#include <iostream>
#include<cstdlib>
// 33 matriz de 5x5 y guardar su diagonal principal
using namespace std;

int main()
{
    int m[5][5],v[5];

    for(int i=0;i<5;i++)
    {
        srand(time(NULL));
        for(int j=0;j<5;j++)
        {
            m[i][j]=rand()%1000;
        }
        system("sleep 1");
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            (i==j)? v[i]=m[i][j]:v[0]=v[0];
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
}
