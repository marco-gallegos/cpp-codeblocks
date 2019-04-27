#include <iostream>
// 30 matriz de 4x4  y determinar posicion de el mayor
using namespace std;

int main()
{
    int m[4][4],mayor;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<" numero en posicion "<<i<<" "<<j<<endl;
            cin>>m[i][j];
        }
    }

    mayor=m[0][0];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            (mayor<m[i][j])? mayor=m[i][j]:mayor=mayor;
        }
    }

    cout<<"mayor = "<<mayor;
}
