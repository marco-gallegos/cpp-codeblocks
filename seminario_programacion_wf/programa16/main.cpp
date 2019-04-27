#include <iostream>
/* imprimir los multiplos de 7 que esten entre 0 y 50 con  do while */
using namespace std;

int main()
{
    cout<<"do while"<<endl;
    int num=0,r;
    do
    {
        r=num*7;
        cout<<r<<endl;
        num++;

    }while(r<50);
}
