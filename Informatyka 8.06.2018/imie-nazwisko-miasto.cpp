#include <iostream>

using namespace std;

int main()
{
    int n=0;
   cout<<"Podaj ilosc uzytkownikow";
   cin>>n;
   int j=0;
   string Tab[n][3];
   for (int i=1;i<n;i++){
    cout<<"Uzytkownik : "<<j<<endl;
    cout<<"Imie ";
    cin>>Tab[i][1];
    cout<<"Wiek : ";
    cin>>Tab[i][2];
    cout<<"Miasto:";
    cin>>Tab[i][3];
   }


    return 0;
}
