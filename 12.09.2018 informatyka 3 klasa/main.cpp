#include <iostream>

using namespace std;
void linia(int n,string s); //deklaracja funkcji
int main()
{

    linia(7,"$");
    return 0;
}
void linia(int n,string s){ // definicja funckji
for (int i=0;i<n;i++)
    cout<<s;
}
