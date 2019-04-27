#include<iostream>
using namespace std;
class o
{
public:
    int a[6];
    void pedir()
    {
        for(int i=0;i<6;i++)
        {
            cout<<"dame el numero "<<i<<endl;
            cin>>a[i];
        }
    }

    void ver()
    {
        for(int i=0;i<6;i++)
        {
            cout<<"numero "<<i<<"  "<<a[i]<<endl;
        }
    }
};

int main()
{
    o a;
    a.pedir();
    a.ver();
}
