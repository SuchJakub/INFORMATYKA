#include <iostream>

using namespace std;

void latawiec(int n,char z)
{ int j,i;
 for(i=1;i<=n;i++)
  {
  for(j=1;j<=2*n;j++){
   if (j==n-i+1 || j==n+i)
     cout<<z;
   else
     cout<<" ";

}
cout<<endl;
  }
}0
int main()
{
 latawiec(4,'*');
    return 0;
}
