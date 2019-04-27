#include <iostream>
#include<cstdlib>

using namespace std;

class analisis
{
public:
    int num[200],prom;
    analisis()
    {
        for(int i=0;i<200;i++)
        {
            cin>>num[i];
        }
    }

    void promed()
    {
        prom=0;
        int a=0;
        while(a<(sizeof(num)/sizeof(int)))
        {
            prom=prom+num[a];
            a++;
        }
        prom=prom/(sizeof(num)/sizeof(int));
        cout<<prom;
    }

    void suma_cada5()
    {
        int sum;
        int a=0;
        while(a<(sizeof(num)/sizeof(int)))
        {
            sum=sum+num[a];
            a+=5;
        }
        cout<<sum;
    }

    void mayor()
    {
        int a=0,mayor=num[0],posic;
        while(a<(sizeof(num)/sizeof(int))-1)
        {
            if(num[a]<num[a+1])
            {
                mayor=num[a+1];
                posic=a+1;
            }
            a++;
        }
        cout<<mayor<<posic;
    }
};

int main()
{
    analisis a;

}
