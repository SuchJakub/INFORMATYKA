#include <iostream>
#include <iomanip>
using namespace std;

void tablica1(int T[],int ile){
    for (int i=0; i<ile; i++){
        cout<<"Podaj "<<i+1<<"element tablicy ";
        cin>>T[i];
    }

}


int main()
{

    int tablica[3];
    int ile=3;
    tablica1(tablica,ile);

    return 0;
}
