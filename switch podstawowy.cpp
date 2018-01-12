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
  cout<<"Witaj uzytkowniku wybierz z menu co chcesz zrobic z tymi dwoma liczbami"<<endl;
    cout<<"1.Dodawanie"<<endl;
    cout<<"2.Odejmowanie"<<endl;
    cin>>wybor;
    switch (wybor)
    {
case 1:
    cout<<"Wynik to"<<x+y;
    break;
    case 2:
    cout<<"Wynik to"<<x-y;
    break;
default: cout<<"Blad";


    }
    return 0;
}
