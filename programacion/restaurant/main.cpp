#include <iostream>

using namespace std;

class menu
{
public:
    unsigned int dia,platillo;
    void comida(unsigned int opc,string a,string b)
    {
        if(opc==1)
        {
            cout<<a;
        }
        else
        {
            cout<<b;
        }
    }
    void menus()
    {
        cout<<"que dia es \n1- lunes\n2- martes\n3-miercoles\n4- jueves\n5- viernes\n6-sabado\n7- domingo\n";
        cin>>dia;
        cout<<"que platillo quieres 1 o 2\n";
        cin>>platillo;
        switch(dia)
        {
            case 1:comida(platillo,"pollo","hamburguesa");break;
            case 2:comida(platillo,"quesadilla","dogo");break;
            case 3:comida(platillo,"tacos","pozole");break;
            case 4:comida(platillo,"spaguetti","sandwich");break;
            case 5:comida(platillo,"sopes","guaraches");break;
            case 6:comida(platillo,"pizza","carne");break;
            case 7:comida(platillo,"arroz","chilaquiles");break;
            default:cout<<"opcion equivocada"<<endl;
        }

    }
};

int main()
{
    menu a;
    while(true)
    {
        a.menus();
    }

}
