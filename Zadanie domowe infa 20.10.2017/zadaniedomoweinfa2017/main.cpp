#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,naj;
    cout<<"Podaj a:";
    cin>>a;
    cout<<"Podaj b:";
    cin>>b;
    cout<<"Podaj c:";
    cin>>c;
    cout<<"Podaj d:";
    cin>>d;
    naj=a;
    if (b<a){
        naj=b;
    }
    if (c<b){
        naj=c;
    }
    if (d<c){
        naj=d;
    }
    cout<<"Najmniejsza liczba to"<<naj;




    return 0;
}
