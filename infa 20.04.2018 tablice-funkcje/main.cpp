#include <iostream>
#include <iomanip>
using namespace std;

void f1(int tablica[10]){

}

void f2(int tablica[]){

}
void f3 (int *tablica){

}
void wypelnijT ( int tab[] , int rozmiar ){
 for (int i=0;i<rozmiar;i++){
    cout<<"Podaj"<<i+1<<"Element tablicy";
    cin>>tab[i];
 }
}


int main()
{
    cout<<"sadas";
 int T[8];
 wypelnijT(T,8);

    return 0;
}
