/*
@file Esercizio_3.cpp
@author Francesco Suma
@esercizio: funzioni ricorsive
*/

#include <iostream>
using namespace std;

/*
int sommaR(int a){
    if (a==1){
        return a;
    }else{
        cout<<"Ricorsione per a = "<<a<<endl;
        return a + sommaR(a-1);
    }
}
*/

/*
int sommaR(int a){
    int rr = 0;
    if (a==1){
        return a;
    }else{
        cout<<"Ricorsione per a = "<<a<<" + F("<<a-1<<")"<<endl;
        rr = a + sommaR(a-1);
        cout<<"rr = "<<rr<<endl;
    }
    return rr;
}
*/

int sommaR(int a){
    int n = 1;
    if (n>=a){
        return n;
    }else{
        cout<<"Ricorsione per a = "<<a<<" + F("<<n+1<<")"<<endl;
        return n + sommaR(n-1);
        n++;
    }
}

int fattorialeR(int a){
    int rr = 0;
    if (a==1){
        return a;
    }else{
        cout<<"Ricorsione per a = "<<a<<" * "<<a-1<<")"<<endl;
        rr = a * fattorialeR(a-1);
        cout<<"rr = "<<rr<<endl;
    }
    return rr;
}

int main(){
    int a = 0, somma = 0, fattoriale = 0;

    cout<<"Dimmi un numero: ";
    cin>>a;
    cout<<"-------------------------------------------"<<endl;

    somma = sommaR(a);
    cout<<"La somma \212 pari a: "<<somma<<endl;
    cout<<"-------------------------------------------"<<endl;

    fattoriale = fattorialeR(a);
    cout<<"Il fattoriale \212 pari a: "<<fattoriale<<endl;

}