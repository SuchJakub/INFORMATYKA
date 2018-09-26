#include <iostream>

using namespace std;

int silnia(int a){
    if (a==0) return 1;

    return silnia(a-1)*a;



}

int main()
{
int x;
cin>>x;
cout<<x<<"!="<<silnia(x)<<endl;
    return 0;
}
