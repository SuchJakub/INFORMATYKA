#include <iostream>

using namespace std;
int funkcja(int x){
    int r , y=0;

    while (x>0){

        r=x%10;
        x=x/10;
        y=y*10+r;


    }
    cout<<y;
    return y;




}
int main()
{
    funkcja(78);
    return 0;
}
