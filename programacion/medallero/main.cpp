#include <iostream>

using namespace std;

int V_ORO=50;
int V_PLATA=30;
int V_BRONCE=25;

class medallero
{
public:
    int oro,plata,bronce,puntaje,sum;
    string pais;
    void sum_med()
    {
        sum=oro+plata+bronce;
        cout<<pais<<" tiene "<<sum<<" medallas"<<endl;
    }

    void prom()
    {
        int prom=(oro+plata+bronce)/2;
        cout<<pais<<" tiene en promedio "<<prom<<" medallas"<<endl;
    }


    medallero(int oro,int plata,int bronce,string pais)
    {
        this->oro=oro;
        this->plata=plata;
        this->bronce=bronce;
        this->pais=pais;
        puntaje=(oro*V_ORO)+(plata*V_PLATA)+(bronce*V_BRONCE);
    }
    void ver_puntaje()
    {
        cout<<pais<<" tiene un puntaje de "<<puntaje<<endl;
    }
};

void pr_p_tipo(medallero a,medallero b,medallero c,medallero d)
{
    cout<<"se han entregado en promedio "<<(a.bronce+b.bronce+c.bronce+d.bronce)/4<<" medallas de bronce"<<endl;
    cout<<"se han entregado en promedio "<<(a.plata+b.plata+c.plata+d.plata)/4<<" medallas de plata"<<endl;
    cout<<"se han entregado en promedio "<<(a.oro+b.oro+c.oro+d.oro)/4<<" medallas de oro"<<endl;
}

void med_entr(medallero a,medallero b,medallero c,medallero d)
{
    cout<<"se han entregado "<<a.sum+b.sum+c.sum+d.sum<<" medallas"<<endl;
}

int main()
{
    medallero eu(45,45,20,"estados unidos");
    medallero alem(30,55,30,"alemania");
    medallero cuba(20,30,70,"cuba");
    medallero mex(28,50,40,"mexico");

    eu.sum_med();
    alem.sum_med();
    cuba.sum_med();
    mex.sum_med();
    cout<<"-----------------"<<endl;
    eu.prom();
    alem.prom();
    cuba.prom();
    mex.prom();
    cout<<"-----------------"<<endl;
    eu.ver_puntaje();
    alem.ver_puntaje();
    cuba.ver_puntaje();
    mex.ver_puntaje();
    cout<<"-----------------"<<endl;
    med_entr(eu,alem,cuba,mex);
    cout<<"-----------------"<<endl;
    pr_p_tipo(eu,alem,cuba,mex);

}
