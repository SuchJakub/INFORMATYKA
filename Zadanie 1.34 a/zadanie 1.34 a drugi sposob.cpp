#include <iostream>

using namespace std;

int ciag(int n){
if (n==1){
    return 2;
        }else{
        return ciag(n-1)*2;}


}


int main()
{
    int x;
   cout<<"Podaj x";
    cin>>x;
 cout<<ciag(x);


    return 0;
}
