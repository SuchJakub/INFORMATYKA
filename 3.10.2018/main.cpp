#include <iostream>

using namespace std;

int silnia(int n )
{
    if (n==0) return 1;
    return silnia(n-1)+3;
}
int main()
{
int x;
cin>>x;
for (int i=0;i<=x;i++);
        cout<<"a("<<i<<")="<<silnia(i)<<endl;
    return 0;
}
