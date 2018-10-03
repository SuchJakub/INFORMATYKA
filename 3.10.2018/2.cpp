#include <iostream>
using namespace std;
double silnia(int n )
{
    if (n==1) return 0.2;
    return silnia(n-1)*-3;
}
int main()
{
int x;
cin>>x;
for (int i=0;i<=x;i++)
        cout<<"a("<<i<<")="<<silnia(i)<<endl;
    return 0;
}
