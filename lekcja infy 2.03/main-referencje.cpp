#include <iostream>

using namespace std;
void f(int &n){
 n=n*2;
 cout<<"Wewnatrz funkcji n: "<<n;
}

int main()
{
    int a=5;
    f(a);
    cout<<"Na zewnatrz funkcji: "<<a<<endl;

    return 0;
}
