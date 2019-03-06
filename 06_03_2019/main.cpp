#include <iostream>

using namespace std;

void wypisz(int t[],int n)
{
    for(int i=0;i<n;i++)
    cout<<t[i]<<"\t";
    cout<<endl;
}
int main()
{
    int n=5;
    int t[]={15,10,6,7,8};
    int i=0;
    for (i=0;i<n-1;i++)
    {
        int min=t[i];
        int k=i;
        for(int j=i+1;j<n;j++)
            if(t[j]<min)
        {
            min=t[j];
            k=j;
        }

    swap(t[i],t[k]);
    wypisz(t,n);
    }
    return 0;
}
