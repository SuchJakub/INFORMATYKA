#include <iostream>

using namespace std;

int main()
{
   int liczba;
   cout<<"Podaj liczbe dziesietna: ";
 cin>>liczba;
 string wynik;
 while(liczba){
  wynik=(liczba%2?"1":"0")+wynik;
  liczba/= 2;
 }
 cout<<"Binarnie to: "<< wynik;
    return 0;
}
