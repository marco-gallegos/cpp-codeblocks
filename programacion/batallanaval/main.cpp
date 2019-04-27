#include <iostream>
#include<cstdlib>

using namespace std;

class batallanaval
{
public:
    int tab[10][10],comp[10][10],tiros;

    void barcos()
    {
        srand(time(NULL));
        int x=rand()%4,c=rand()%9,x2;
        int aux=rand()%7;
            for(int i=0;i<5;i++)
            {
                tab[x+i][c]=1;
            }
            srand(time(NULL));

            if(c>=3)// acomodar columnas despues de la 4
            {
                int c1=rand()%c,c2,c3;
                int x1=rand()%7,x2,x3;
                for(int i=0;i<3;i++)
                {

                    tab[x1+i][c1]=1;//se acomoda como columna menor a c
                }


                if(c1>=3)
                {
                    srand(time(NULL));
                    x2=rand()%6;
                    c2=0;
                }
                else
                {
                    if(c<7)
                    {
                        c2=c+1;
                        x2=rand()%6;
                    }
                    else
                    {
                        c2=9;
                        x2=rand()%6;
                    }
                }
                for(int i=0;i<3;i++)
                {
                    tab[x2+i][c2]=1;// columna
                }

                x3=8+rand()%2;
                c3=rand()%7;
                for(int i=0;i<4;i++)
                {
                    tab[x3][c3+i]=1;
                }
            }
            else
            {
                int c1=c+((rand()%4)+1),c2,c3;
                int x1=rand()%10,x2,x3;
                for(int i=0;i<4;i++)
                {
                    tab[x1][c1+i]=1;
                }

                if(x1>2)
                {
                    x2=rand()%3;
                    (x2==2)? x3=x2-((rand()%2)+1):x3=x2+1;

                    c2=3+rand()%3;
                    c3=3+rand()%3;
                    for(int i=0;i<3;i++)
                    {
                        tab[x2][c2+i]=1;
                        tab[x3][c3+i]=1;
                    }
                }
                else
                {
                    x2=3+((rand()%3)+1);
                    x3=3+((rand()%3)+1);
                    c2=3+((rand()%6)+1);
                    while(1)
                    {
                        c3=3+((rand()%6)+1);
                        if(c3!=c2)
                            break;
                    }
                    for(int i=0;i<3;i++)
                    {
                        tab[x2+i][c2]=1;
                        tab[x3+i][c3]=1;
                    }

                }



            }

        }


    int beg()
    {
        for(int i=0;i<10;i++)
           {for(int j=0;j<10;j++)
                    {comp[i][j]=0;tab[i][j]=0;}}
        tiros=36;
        barcos();

    }

    int p_tabl()
    {
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(comp[i][j]==1)
                {
                    cout<<"x ";
                }
                else
                 {cout<<comp[i][j]<<" ";}
            }
            cout<<endl;
        }

    }
        int p_tabl2()
    {
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(tab[i][j]==1)
                {
                    cout<<"x ";
                }
                else
                 {cout<<tab[i][j]<<" ";}
            }
            cout<<endl;
        }

    }
    bool igual()
    {
        int cont=0;
        for(int i=0;i<10;i++)
                for(int j=0;j<10;j++)
                    if(tab[i][j]==1&&comp[i][j]==1)
                    {
                        cont++;
                    }
        if(cont==15)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    int jugar()
    {
        while(igual()&&tiros>0)
        {
            p_tabl();

            unsigned int x,y;
            x=y=0;
            cout<<" recuerda poner numeros de el 1 al 10"<<endl;
            cout<<"x : ";cin>>x;
            cout<<"y : ";cin>>y;
            if((x>9||y>9)||(x<=0||y<=0))
            {
                cout<<"invalido"<<endl;
                continue;
            }
            // para probar cuando se igualo

          /*
            if(tiros==35)
            {
                for(int i=0;i<10;i++)
                    for(int j=0;j<10;j++)
                    comp[i][j]=tab[i][j];
            }
            */
            //si quieren probar los tiros :)
            /*
            if(tiros==35)
                tiros=0;
            */
            if(tab[y-1][x-1]==1)
            {
                comp[y-1][x-1]=1;
            }
            else
            {
                tiros--;
                if(tiros<=1)
                {
                    cout<<"perdiste >_<'  "<<endl;
                    return 0;
                }
            }
        }

    }
};


int main()
{
    batallanaval game;
    while(1)
    {
        cout<<"*********  juego nuevo *********"<<endl;
        game.beg();

        //para ver la tabla solucion
        /*
        game.p_tabl2();
        cout<<endl;
        */
        game.jugar();

    }


}
