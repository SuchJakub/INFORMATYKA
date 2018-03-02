#include <iostream>

using namespace std;
void f(int *n){
    *n=*n*10;
    cout<<"Wartosc zmiennej n wewnatrz funkcji: "<<*n<<endl;
    }

void f1(int x){
x=x*10;
cout<<"wartosc zmiennej x wewnatrz funkcji: "<<x<<endl;
}

int main()
{
    int x=5;
int a=5;
f(&a);
cout<<"Wartosc zmiennej a na zewnatrz wynosi "<<a<<endl;
f1(x);
cout<<"wartosc zmiennej x na zewnatz funkcji wynosi: "<<x<<endl;

    return 0;
}
