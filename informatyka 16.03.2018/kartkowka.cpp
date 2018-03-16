#include <iostream>

using namespace std;
    int a;

    void oblicz1(void){
    int a;
    a=5;
    cout<<"W funkcji o nazwie oblicz1 "<<a<<endl;
    }
    void oblicz2(void){
    a=4;
    cout<<"w funkcji o nazwie oblicz2 "<<a<<endl;
    }
    void oblicz3(int &z){
    z=-3;
    z++;
    cout<<"W funkcji oblicz3 zmienna z"<<z<<endl;
    }
    void oblicz4(int z){
    z=17;
    z=z%3;
    a++;
    cout<<"w funkcji oblicz 4 zmienna z: "<<z<<endl;
    }
int main()
{
    a=3;
    cout<<"Zmienna a: "<<a<<endl;
    oblicz1();
    cout<<"Zmienna a: "<<a<<endl;
    oblicz2();
    cout<<"Zmienna a: "<<a<<endl;
    oblicz3(a);
    cout<<"Zmienna a: "<<a<<endl;
    oblicz4(a);
    ++a;
    cout<<"zmienna a: "<<a<<endl;




    return 0;
}
