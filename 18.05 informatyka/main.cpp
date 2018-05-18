#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Podaj pierwsza liczbe:"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe:"<<endl;
    cin>>b;
    while(a!=b){
        if (a>b){
         a-=b;
        }else {
        b-=a;
        }
    }
     {
        cout<<a;
    }

    return 0;
}
