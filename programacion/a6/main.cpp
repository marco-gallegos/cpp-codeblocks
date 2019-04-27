#include <iostream>

using namespace std;

class triangulo
{
public:
    int num;
    void intruducir()
    {
        cout<<"cual es tu triangulo"<<endl;
        cin>>num;
    }
    void ver()
    {
        int h=0,tmp=1;
        while(h<num)
        {
            int tr=num-(h+1);
            while(tr>0)
            {
                cout<<" ";
                tr--;
            }
            if(h==0)
            {
                cout<<"*"<<endl;
            }
            else
            {
                tmp=tmp+2;
                int a=0;
                while(a<tmp)
                {
                    cout<<"*";
                    a++;
                }
                cout<<endl;
            }
            h++;
        }
    }
};

int main()
{
    triangulo a;
    a.intruducir();
    a.ver();
}
