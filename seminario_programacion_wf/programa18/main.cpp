#include <iostream>
// 14 dowhile- del 0 al 9 con for
using namespace std;

int main()
{
    for(int i=0;i<10;(i==5)?i=i+2:i++)
    {
        cout<<i<<endl;
    }
}
