#include <iostream>

using namespace std;

class tigre
{
public:
    float peso;
    string sexo,color;
    int comida;

    void capturar(float peso,string sexo,string color,int comida)
    {
        this->peso=peso;
        this->sexo=sexo;
        this->comida=comida;
        this->color=color;
    }

    void actualizar(float peso,int comida)
    {
        this->comida=comida;
        this->peso=peso;
    }
    void mostrar()
    {
        cout<<peso<<" kg"<<endl;
        cout<<sexo<<endl;;
        cout<<comida<<" consumen de comida"<<endl;
        cout<<color<<endl;;
    }

    tigre()
    {
        peso=9000;
    }
}pequenos[3];

int main()
{
    int a;
    while(true)
    {
        int i=0;
        cout<<"1 - capturar 1\n2 - actualizar 1\n3 - capturar 2\n4 - actualizar 2\n5 - capturar 3\n6 - actualizar 3\n7 - ver todos\n";
        cin>>a;
        switch (a)
        {
        case 1:
            if(pequenos[0].peso==9000)
            {
                int c;
                float p;
                string s,col;
                cout<<"cuanta comida consume"<<endl;cin>>c;
                cout<<"cual es su peso"<<endl;cin>>p;
                cout<<"sexo"<<endl;cin>>s;
                cout<<"color"<<endl;cin>>col;
                pequenos[0].capturar(p,s,col,c);
            }
            else
            {
                cout<<"ya capturado"<<endl;
            }
            break;
        case 2:
            if(pequenos[0].peso==9000)
            {
                cout<<"aun no registrado"<<endl;
            }
            else
            {
                int c;
                float p;
                cout<<"nuevo peso"<<endl;cin>>p;
                cout<<"cuanto alimento consume ahora"<<endl;cin>>c;
                pequenos[0].actualizar(p,c);
            }
            break;
        case 3:
            if(pequenos[1].peso==9000)
            {
                int c;
                float p;
                string s,col;
                cout<<"cuanta comida consume"<<endl;cin>>c;
                cout<<"cual es su peso"<<endl;cin>>p;
                cout<<"sexo"<<endl;cin>>s;
                cout<<"color"<<endl;cin>>col;
                pequenos[1].capturar(p,s,col,c);
            }
            else
            {
                cout<<"ya capturado"<<endl;
            }
            break;
        case 4:
            if(pequenos[1].peso==9000)
            {
                cout<<"aun no registrado"<<endl;
            }
            else
            {
                int c;
                float p;
                cout<<"nuevo peso"<<endl;cin>>p;
                cout<<"cuanto alimento consume ahora"<<endl;cin>>c;
                pequenos[1].actualizar(p,c);
            }
            break;

        case 5:
            if(pequenos[2].peso==9000)
            {
                int c;
                float p;
                string s,col;
                cout<<"cuanta comida consume"<<endl;cin>>c;
                cout<<"cual es su peso"<<endl;cin>>p;
                cout<<"sexo"<<endl;cin>>s;
                cout<<"color"<<endl;cin>>col;
                pequenos[2].capturar(p,s,col,c);
            }
            else
            {
                cout<<"ya capturado"<<endl;
            }
            break;
        case 6:
            if(pequenos[2].peso==9000)
            {
                cout<<"aun no registrado"<<endl;
            }
            else
            {
                int c;
                float p;
                cout<<"nuevo peso"<<endl;cin>>p;
                cout<<"cuanto alimento consume ahora"<<endl;cin>>c;
                pequenos[2].actualizar(p,c);
            }
            break;
        case 7:
            while(i<3)
            {
                if(pequenos[i].peso!=9000)
                {
                cout<<"gatito "<<i+1<<endl;
                pequenos[i].mostrar();
                }
                i++;
            }
            break;
        default:
            cout<<"invalido"<<endl;
            break;

        }
    }


}
