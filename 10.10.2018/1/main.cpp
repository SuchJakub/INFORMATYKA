#include <iostream>

using namespace std;
void dzielnik(int a ){
 for (int i=a;i>0;i--){
 if (a%i==0){
    cout<<i<<" ";
 }

 }
}
int main()
{
    dzielnik(24);
    return 0;
}
