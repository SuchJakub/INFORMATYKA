#include <iostream>

using namespace std;
int a=5 ;
int oblicz(void){
int b=3; /* zmiennna lokalna */
return a+b;
}

int wyswietl(a){
return a;
}

int main()
{
int c=3; /*zmienna lokalna */
c=oblicz();
cout<<c<<endl;


    return 0;
}
