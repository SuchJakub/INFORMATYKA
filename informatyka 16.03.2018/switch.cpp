#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()

{
    int x;
    int y;
    int wybor;
  cout<<"Podaj x: ";
  cin>>x;
  cout<<"Podaj y: ";
  cin>>y;
  cout<<"Witaj uzytkowniku wybierz trojkat lub prostokat"<<endl;
    cout<<"1.Prostokat"<<endl;
    cout<<"2.Trojkat"<<endl;
    cin>>wybor;
    switch (wybor)
    {
case 1:
    cout<<"Wynik to: "<<x*y;
    break;
    case 2:
    cout<<"Wynik to"<<(x*y)/2;
    break;
default: cout<<"Blad";

    }
    return 0;
}
