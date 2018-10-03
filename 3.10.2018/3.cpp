#include <iostream>

using namespace std;

int nwd (int a, int b){
 while (a!=b)
        if (a>b) a-=b;
    else b-=a;
    return a;
}
int main()
{
cout<<nwd(64,60);
    return 0;
}
