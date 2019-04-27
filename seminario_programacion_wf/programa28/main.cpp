#include <iostream>

using namespace std;

int main()
{
    int a[10]={0,0,0,0,1,2,3,-1,-1,-1},neg[10]={0,0,0,0,0,0,0,0,0,0},pos[10]={0,0,0,0,0,0,0,0,0,0},z=0,n=0,p=0;
/*    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
 */   for(int i=0;i<10;i++)
    {
        if(a[i]==0)
        {
            z++;
            continue;
        }
        if(a[i]<0)
        {
            neg[n]=a[i];
            n++;
            continue;
        }
        if(a[i]>0)
        {
            pos[p]=a[i];
            p++;
            continue;
        }
    }
    cout<<"hay "<<z<<"elementos 0"<<endl;
    cout<<"hay "<<n<<"elementos negativos y su suma es ";
    int i=0,sum=0;
    while(neg[i])
    {
        sum=sum+neg[i];
        i++;
    }
    cout<<sum<<endl;
    cout<<"hay "<<n<<"elementos negativos y su suma es ";
    i=0,sum=0;
    while(pos[i])
    {
        sum=sum+pos[i];
        i++;
    }
    cout<<sum<<endl;



}
