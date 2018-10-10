#include <iostream>

using namespace std;
int sumacyfr(int n){
    int s=0;
    while (n>0)
    {
        s+=n%10;
        n/=10;
    }
  return s;
 }

int main()
{
  sumacyfr(122);

    return 0;
}
