#include <iostream>


using namespace std;

int main()


{
  {
    string pass,keks;
    int i;
    pass="zsk";
    i=1;
    do
    {
    cout<<"Podejscie: "<<i<<endl;
    cout<< "Wpisz haslo:";
    cin>>keks;
    if(keks==pass)
    {
        cout<<"Gratuluje, odgadles za "<<i<<" proba.";
        i+=4;
    }
    else if(i==3)
    {
        cout<<"Nie zgadles hasla";
        i=i+2;
    }
    else
    {
        i++;
    }
    }while(i<5);
 return 0;
}
}
