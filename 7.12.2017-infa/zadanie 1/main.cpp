#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
    int b=1000000,liczba,liczba1,liczba2,naj;


liczba=rand()%b;
liczba1=rand()%b;
liczba2=rand()%b;


    if (liczba1>liczba){
        naj=liczba1;

        if (liczba2>liczba1)
       naj=liczba2;
       if (liczba2<liczba)
        naj=liczba;
    }


cout<<"Wylosowane liczby to :"<<liczba<<","<<liczba1<<","<<liczba2 ;
cout<<"Najwieksza liczba to : "<<naj;





    return 0;
}
