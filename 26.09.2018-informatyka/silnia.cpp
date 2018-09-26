#include <iostream>

using namespace std;

int silnia(int a){
    int s=1;
for (int i=2;i<=a;i++)
    s*=i;
return s;



}

int main()
{
int x;
cin>>x;
cout<<x<<"!="<<silnia(x)<<endl;
    return 0;
}
