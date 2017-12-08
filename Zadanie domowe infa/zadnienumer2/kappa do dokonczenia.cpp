#include <iostream>

using namespace std;

int main()
{
     int liczba1;
   cout<<"Podaj pierwsza czesc adres ip: ";
 cin>>liczba1;
 string wynik1;
 while(liczba1){
wynik1=(liczba1%2?"1":"0")+wynik1;
  liczba1/= 2;
 }
  int liczba2;
   cout<<"Podaj 2 czesc adresu ip ip: ";
 cin>>liczba2;
 string wynik2;
 while(liczba2){
  wynik2=(liczba2%2?"1":"0")+wynik2;
  liczba2/= 2;
 }

 int liczba3;
   cout<<"Podaj trzecia adres ip: ";
 cin>>liczba3;
 string wynik3;
 while(liczba3){
  wynik3=(liczba3%2?"1":"0")+wynik3;
  liczba3/= 2;
 }

 int liczba4;
   cout<<"Podaj czwarta czesc adres ip: ";
 cin>>liczba4;
 string wynik4;
 while(liczba4){
  wynik4=(liczba4%2?"1":"0")+wynik4;
  liczba4/= 2;
 }
 cout<<wynik1<<"."<<wynik2<<"."<<wynik3<<"."<<wynik4;
    return 0;
}
