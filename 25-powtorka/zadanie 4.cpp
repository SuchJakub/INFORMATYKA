#include<iostream>
#include<cstdlib>
using namespace std;


int p(int a, int b){

int d=1,suma=0;
for (int i=0;i<<a;i++)
    {
    if (a%d==0)
    {
      suma=suma+d;
       d++;
    }

else
{
    d++;
}
    }
if (suma==b){
    cout<<suma;
    cout<<"Zaprzyjaznione";
}
else{
    cout<<suma;
    cout<<"Niezaprzyjaznione";
}
}

int main() {

int x,d;
cout<<"Wpisz pierwsza liczbe";
cin>>x;
cout<<"Wpisz druga liczbe";
cin>>d;
p(x,d);


   return 0;
}
