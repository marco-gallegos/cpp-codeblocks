/* imprimir los multiplos de 7 que esten entre 0 y 50 con while */

#include <iostream>

using namespace std;

int main()
{
    int num=1,r=num*7;
    while(r<=50)
    {
        cout<<r<<endl;
        num++;
        r=7*num;
    }
}
