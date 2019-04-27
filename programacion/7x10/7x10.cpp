#include<iostream>
using namespace std;

class calificacion
{
public:
    int m[7][10];
    void pedir(void)
    {
        int i=0,j=0,;
        while(i<7)
        {
            while(j<10)
            {
                cin>>m[i][j];
                j++;
            }
            i++;
        }
    }

    void mostrar_alumno()
    {
        int opc,i=0,prom=0;
        cin>>opc;
        while(i<10)
        {
            prom=prom+m[opc][i];
            i++;
        }
        prom=prom/10;
    }
    void mostrar_materia()
    {
        int opc,i=0,prom=0;
        cin>>opc;
        while(i<10)
        {
            prom=prom+m[i][opc];
            i++;
        }
        prom=prom/7;
    }
};

int main()
{

}
