#include<iostream>
using namespace std;

class serp
{
public:
    int m[6][6];
    void doserp()
    {
        int num=1,i=0,j=0;
        while(i<6)
        {
            while(j<6)
            {
                m[i][j]=num;
                num++;
                j++;
            }
            j--;
            i++;
            while(j>=0)
            {
                m[i][j]=num;
                num++;
                j--;
            }
            i++;
        }
    }

    void ver()
    {
        int i=0;
        while(i<6)
        {
            j=0;
            while(j<6)
            {
                cout<<m[i[j];
                j++;
            }
            cout<<endl;
            i++;
        }

    }
};
