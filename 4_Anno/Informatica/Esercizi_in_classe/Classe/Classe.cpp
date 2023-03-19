#include <iostream>
using namespace std;

int fattoriale ( int n){
    if(n ==0){
        return 1;
    }
    int p = n * fattoriale(n-1);
    return p;
}

int main(){
    int n = 0, risultato = 0;
    cout<<"Inserisci il valore di cui calcolare il fattoriale: ";
    cin>>n;
    risultato = fattoriale(n);
    cout<<"Il fattoriale del numero inserito da tastiera \212: "<<risultato<<endl;
    
    system("PAUSE");
}