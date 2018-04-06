#include <iostream>
#include <iomanip>


using namespace std;

void wstaw(int T[], int ile){
     for(int i=0; i<ile; i++){
        cout<<"Podaj "<<i+1<<" element tablicy";
        cin>>T[i];
}
}
void wyswietl (int T[],int ile){
    for (int i=0; i<ile;i++){
        cout<<T[i]<<" ";
    }
}
void wczytaj(int *T,int n){
     for (int i=0;i<n; i++){
     cout<<"T["<<i<<"] = ";
     cin>>T[i];
     }
}
void wypisz(int T[], int n){
   cout<<"Elementy w tablicy : "<<endl;
   for (int i=0; i<n;i++){
    cout<<setw(7)<<T[i];
    }
    cout<<endl;
}
void wypiszodwrotnie(int T[], int n){
 cout<<"Elementy tablicy w odwrotnej kolejnoœci"<<endl;
 for (int i=n-1;i>=0;i--){
    cout<<T[i];
 }
 cout<<endl;
}
int suma(int T[],int n){
    int sumaa=0;
for (int i=0;i<n;i++){
    sumaa+=T[i];
}
return sumaa;
}
int iloczyn(int T[],int n){
   int iloczynn=1;
   for (int i=0; i<n; i++){
    if (T[i]>5)
        iloczynn *=T[i];
   }
   if (iloczyn<5)
    iloczynn=0;
    return iloczynn;
}


int main()
{
   int T[5] = {2,3,44,3,5};
  int tablica [10];
  // wyswietl(T,5);
    wczytaj(tablica,10);
    wyswietl(tablica,10);
    wypisz(tablica,10);
    wypiszodwrotnie(tablica,10);
    cout<<"suma elemetow wynosi"<<suma(tablica,10)<<endl;
     cout<<"iloczyn elemetow wynosi"<<iloczyn(tablica,10)<<endl;
return 0;
}
