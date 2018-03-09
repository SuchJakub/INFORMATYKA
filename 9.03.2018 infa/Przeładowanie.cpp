#include <iostream>

using namespace std;

int obliczSume(int a){
    return a;
}

int obliczSume (int a, int b){
    return a+b;
}
int obliczSume (int a,int b,int c){
return a+b+c;
}

void wypisz(int a){
cout<<"Liczba calowita: "<<a<<endl;
}

void wypisz(double a){
cout<<"Liczba rzeczywista"<<a<<endl;
}
void wypisz(char a){
    cout<<"Znak:"<<a<<endl;
}

double oblicz (int a,double b){
    return a+b;
}

double oblicz(double a,double b){
    return a+b;
}

double oblicz(int a,int b){
    return a+b;
}
double oblicz(int a,double b,double c)
    return (a+b)/c;
int main()
{
    cout<<"T :Przeladowanie funkcji ze wzgledu na typ parametru "<<endl<<endl;
int x=2,y=5,z=10;
double k=5.6;
double j=2.5;
char znak='J';
cout<<obliczSume(z)<<endl;
cout<<obliczSume(z,x)<<endl;
cout<<obliczSume(x,z,z)<<endl;
wypisz(x);
wypisz(k);
wypisz(znak);
cout<<oblicz(x,k)<<endl;
cout<<oblicz(k,j)<<endl;


    return 0;
}
