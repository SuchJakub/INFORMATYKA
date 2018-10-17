#include <iostream>

int fib(int n)
{
    if(n==0) return 0;
    if (n==1) return 1 ;
    return fib(n-1)+fib(n-2);
}
using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=0;i<=x;i++)
        cout<<"f"<<i<<"="<<fib(i)<<endl;
    return 0;
}
