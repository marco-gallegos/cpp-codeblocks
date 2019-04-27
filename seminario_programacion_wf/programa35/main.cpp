#include <iostream>
#include<cstdlib>
// 3x4que almacene la matriz en un vector e imprimirlo
using namespace std;

int main()
{
    int m[3][4],v[12];
    int a=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            v[a]=m[i][j]=rand()%100;
            a++;
        }
        srand(time(NULL));
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int o=0;o<12;o++)
        cout<<v[o]<<" ";


}
