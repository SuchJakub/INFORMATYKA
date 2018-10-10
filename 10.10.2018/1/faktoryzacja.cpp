#include <iostream>

using namespace std;
void fakt(int a){
    int b=2;
    while (a>1)
    {
    if (a%b==0){
        a=a/b;
        cout<<b<<endl;
        }
  b++;
    }
 }

int main()
{
  fakt(15);

    return 0;
}
