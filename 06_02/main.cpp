#include <iostream>

using namespace std;
void wypisz(int t[],int n)
{
    for (int i=0;i<n;i++)
    cout<<t[i]<<"\t";
    cout<<endl;

}
int main()
{
    int t[]={5,10,15,20,25};
    int n=5;

    for (i=0;i<n-1;i++)
    if (t[i]>t[i+1])
    {
        int pom=t[i];
        t[i]=t[i+1];
        t[i+1]=pom;
    }

    return 0;
}
