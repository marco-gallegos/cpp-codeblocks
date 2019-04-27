#include <iostream>
#include<cstdlib>
// 32 matriz 4x4 suma de cols y cual es mayor
using namespace std;

int main()
{
    int m[4][4],s[4]={0,0,0,0};
    for(int i=0;i<4;i++)
    {
        srand(time(NULL));
        for(int j=0;j<4;j++)
            m[i][j]=rand()%1000;

        system("sleep 1");
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            s[i]=s[i]+m[j][i];
    }
    int may=s[0];
    for(int i=0;i<4;i++)
        (may<s[i])? may=s[i]:may=may;
    cout<<"el mayor es "<<may<<endl<<endl;

    for(int i=0;i<4;i++)
    {

        for(int j=0;j<4;j++)
        cout<<m[i][j]<<" ";

     cout<<endl;
    }
}
