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
    int T[10]={5,4.8,7,8,-10,0};
    cout<<T[1]<<endl;
    double tab[5]={1.5,2.3,3.3,2.3,2.4};
    cout<<tab[1]<<endl;
    int tab1[]={8,1,3};
    tab1[2]=5;
    cout<<tab1[2]<<endl;
    int  tab2[4]={1};
    cout<<tab2[1]<<endl;
    int nowa[3];
    cout<<"podaj pierwszy element tablicy ";
    cin>>nowa[0];
    cout<<"podaj drugi element tablicy ";
    cin>>nowa[1];
    cout<<"podaj trzeci element tablicy ";
    cin>>nowa[2];
    cout<<*nowa<<endl;
    cout<<*(nowa+1)<<endl;
    cout<<*(nowa+2)<<endl;

    double T1[5];
    int x;
    int t;
    do{
        cout<<"Podaj wartosc t1["<<x<<"]"<<endl;
        cin>>T1[x];
        x++;
        t++;
    }while(t<=5);

    for (int i=5;i<5;i++){
        cout<<T1[i]<<" "<<endl;
    }
    int tablica[3];
    int ile=3;
    tablica1(tablica,ile);

    return 0;
}
