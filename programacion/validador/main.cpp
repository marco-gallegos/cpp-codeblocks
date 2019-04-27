#include <iostream>
// 2y 3 4 octubre 12

using namespace std;

class validador
{
public:
    int anio,dia,mes;
    void insertar()
    {
        cout<<"dia"<<endl;
        cin>>dia;
        cout<<"mes"<<endl;
        cin>>mes;
        cout<<"anio"<<endl;
        cin>>anio;
    }

    void mostrar()
    {
        cout<<dia<<":"<<mes<<":"<<anio<<endl;;
    }

    void validar()
    {
        if((anio%4==0)&&(anio!=100))
        {
            if(anio<0)
            {
                cout<<"año erroneo"<<endl;
            }
            switch(mes)
            {
            case 1:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 2:
                if((dia<1) || (dia>29))
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 3:
                if(dia<1 || dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 4:
                if(dia<1||dia>30)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 5:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 6:
                if(dia<1||dia>30)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 7:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 8:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 9:
                if(dia<1||dia>30)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 10:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 11:
                if(dia<1||dia>30)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 12:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            default:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                cout<<"mes erroneo"<<endl;
                break;
            }
        }
        else
        {
            if(anio<0)
            {
                cout<<"año erroneo"<<endl;
            }
          switch(mes)
            {
            case 1:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 2:
                if((dia<1) || (dia>29))
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 3:
                if(dia<1 || dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 4:
                if(dia<1||dia>30)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 5:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 6:
                if(dia<1||dia>30)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 7:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 8:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 9:
                if(dia<1||dia>30)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 10:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 11:
                if(dia<1||dia>30)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            case 12:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                break;
            default:
                if(dia<1||dia>31)
                {
                    cout<<"fecha erronea"<<endl;
                }
                cout<<"mes erroneo"<<endl;
                break;
            }
        }
    }
}a;

int main()
{
    while(1)
    {
    a.insertar();
    a.validar();
    a.mostrar();
    cout<<endl;
    }
}
