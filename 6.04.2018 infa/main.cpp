#include <iostream>
#include <iomanip>


using namespace std;

void wstaw(int T[], int ile){
     for(int i=0; i<ile; i++){
        cout<<"Podaj "<<i+1<<" element tablicy";
        cin>>T[i];
}
}
void wyswietl (int T[],int ile){
    for (int i=0; i<ile;i++){
        cout<<T[i]<<" ";
    }
}

int main()
{
   int T[5] = {2,3,44,3,5};
  wyswietl(T,5);

return 0;
}
