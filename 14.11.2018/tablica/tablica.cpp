#include <iostream>

using namespace std;




int main()
{
  int t[100];
  int n;
  cout<<"Ile elementow chcesz wpisac:"<<endl;
  cin>>n;

  for (int i=0;i<n;i++)
  {
    cout<<"Wpisz "<<i<<" element ";
    cin>>t[i];
  }
   int szukana;
   cout<<"Jaka liczbe chcesz szukac";
   cin>>szukana;
    int i;
    for (int i=0;i<n;i++)
        if (t[i]==szukana) break;

    if (i<n) cout<<"Jest !"<<endl;
    else cout<<"Nie ma :"<<endl;

    int s=0;
    for (int i=0;i<n;i++) s+=t[i];
    cout<<"Suma"<<s;
    cout<<"Srednia"<<(double)s/n;
    return 0;
}
