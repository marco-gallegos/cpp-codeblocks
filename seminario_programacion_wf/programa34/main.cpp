#include <iostream>
//34 5x5 identidad
using namespace std;

int main()
{
    int m[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        (i==j)? m[i][j]=1:m[i][j]=0;

    for(int i=0;i<5;i++)
        {
        for(int j=0;j<5;j++)
         cout<<m[i][j]<<" ";
         cout<<endl;
        }
}
