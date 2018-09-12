#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int funkcja(int a){
if(a<10){
    return a*a;
}else
return a+5;
}

int main()
{
    int c;
    cin>>c;
funkcja(c);

    return 0;
}

