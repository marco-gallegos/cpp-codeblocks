#include <iostream>
/* diseñar un programa que imprima cualquier tabla de multiplicar con do while */
using namespace std;

int main()
{

    cout << "tabla dowhile\n" <<"que tabal quieres ver"<< endl;
    int t,cont=1;
    cin>>t;
    do
    {
        cout<<t<<" x "<<cont<<" = "<<t*cont<<endl;
        cont++;
    }while(cont<11);

}
