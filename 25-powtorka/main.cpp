#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

 wartosc(int b)
{
    if (b<0){
        cout<<-b;
    }else{
    cout<<b;
    }
}
int main()
{
    int a;
    cout<<"Podaj liczbe: "<<endl;
    cin>>a;
    wartosc(a);
    return 0;
}
