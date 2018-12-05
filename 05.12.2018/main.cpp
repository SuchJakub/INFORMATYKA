#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int t[10000]={0};
   int n=10000;
   int i=2;
   int pn=sqrt(n);
   for (int i=2;i<pn;i++)
        if(t[i]==0)
   for (int j=i+i;j<n;j+=i) t[j]=1;

   for (int i=2;i<n;i++)
    if (t[i]==0) cout<<i<<endl;


    return 0;
}
