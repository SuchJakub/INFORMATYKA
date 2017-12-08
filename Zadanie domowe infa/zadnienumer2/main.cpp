#include <iostream>

using namespace std;

int main()
{
     int liczba1;
   cout<<"Podaj pierwsza czesc adres ip: ";
 cin>>liczba1;
 string wynik1;
 while(liczba1){
  wynik1=(liczba%2?"1":"0")+wynik1;
  liczba/= 2;
 }
  int liczba2;
   cout<<"Podaj 2 czesc adresu ip ip: ";
 cin>>liczba2;
 string wynik1;
 while(liczba2){
  wynik1=(liczba%2?"1":"0")+wynik1;
  liczba/= 2;
 }

 int liczba3;
   cout<<"Podaj trzecia adres ip: ";
 cin>>liczba3;
 string wynik1;
 while(liczba3){
  wynik3=(liczba3%2?"1":"0")+wynik3;
  liczba/= 2;
 }

 int liczba1;
   cout<<"Podaj czwarta czesc adres ip: ";
 cin>>liczba1;
 string wynik1;
 while(liczba){
  wynik1=(liczba%2?"1":"0")+wynik1;
  liczba/= 2;
 }
    return 0;
}
