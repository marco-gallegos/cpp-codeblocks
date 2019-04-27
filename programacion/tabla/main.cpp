#include <iostream>

using namespace std;

class tabla
{
public:
    int num;
    tabla()
    {
        cout<<"que tabla quieres ver"<<endl;
        cin>>num;
    }
    ~tabla()
    {

    }
    void mostrar()
    {
        int c=1;
        while(c<=100)
        {
            cout<<num<<" x "<<c<<" = "<<c*num<<endl;
            c++;
        }
    }
    void mostrar(int i)
    {
        int c=1;
        while(c<=15)
        {
            cout<<i<<" x "<<c<<" = "<<c*i<<endl;
            c++;
        }
    }
};

int main()
{
    tabla *r;

    while(1)
    {
        r = new tabla();
        int a=1;
        while(a<=15)
        {
        r->mostrar(a);
        a++;
        }
        delete r;
    }


}
