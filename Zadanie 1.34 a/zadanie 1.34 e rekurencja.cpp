#include <iostream>

using namespace std;

int ciag(int n){
if (n==1){
    return 3;}
       if (n%2==0){
        return (n-1)+2;
       }
       if(n%2==1){
        return (n-1)+1;
       }



}


int main()
{
    int x;
   cout<<"Podaj x: ";
    cin>>x;
 cout<<ciag(x);


    return 0;
}
