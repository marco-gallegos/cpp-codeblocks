#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int m[4][3];

    for(int a=0;a<4;a++)
    {
        srand(time(NULL));
        for(int b=0;b<3;b++)
        {
            m[a][b]=rand()%100;
        }
    }
    int pos=0,neg=0,zero=0;

    for(int a=0;a<4;a++)
    {

        for(int b=0;b<3;b++)
        {
            if(m[a][b]==0)
                zero++;
            if(m[a][b]>0)
                pos++;
            if(m[a][b]<0)
                neg++;
        }
    }
    cout<<"hay : "<<neg<<" negativos "<<pos<<" positivos  "<<zero<<" en cero"<<endl;
}
