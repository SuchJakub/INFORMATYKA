#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int nwd(int a,int b){
while (a!=b)
if (a>b)
    a=a-b;
else
    b=b-a;
return a;


}


int main()
{
 nwd(100,20);
    return 0;
}

