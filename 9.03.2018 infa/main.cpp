#include <iostream>

using namespace std;

int a;

void oblicz1 (void) {
int a;
a=10;
cout<<"w funkcji o nazwie oblicz1: "<<a;
}

void oblicz2(void){
    a=20;
    cout<<"W funkcji oblicz2:"<<a<<endl;
}

void oblicz3(int &z){
    z=-5;
    cout<<"w funkcji oblicz 3: "<<z<<endl;
}
void oblicz4 (int z){
    z=-7;
    cout<<"w funkcji oblicz 4: "<<z<<endl;
}
int main()
{
a=0;
cout<<"zmienna a: "<<a<<endl;
oblicz1();
cout<<"Zmienna a: "<<a<<endl;
oblicz2();
cout<<"Zmienna a: "<<a<<endl;
oblicz3(a);
cout<<"Zmienna a: "<<a<<endl;
oblicz4(a);
cout<<"Zmienna a: "<<a<<endl;
    return 0;
}
