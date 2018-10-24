#include <iostream>

using namespace std;
int pierwsza(int a)
{
    int d=0;
    for(int i=1;i<=a;i++){
        if (a%i==0) d++;
    }  return d;
    }

int main()
{
    int y;
    cin>>y;
    int id=pierwsza(y);
    cout<<"Liczba dzielnikow:"<<id<<endl;
    if (id==2)  cout<<"liczba pierwsza";
    else if(id>2) cout<<"liczba zlozona";
    else cout<<"ani pierwsza,ani zlozona";

    return 0;
}
