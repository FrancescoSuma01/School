#include <iostream>
using namespace std;

int nletti[10];
int nmax=0;
int nmin=0;

int main(){
	cout<<"Questo programma legge 10 numeri e ti mostra il numero piu grande inserito e il numero piu piccolo inserito"<<endl;
	for(int i=0; i=10; i++){
		cout<<"Inserisci un numero: ";
		cin>>nletti[i];
		nmin=nletti[0];
		for(int i=0; i<10; i++){
			if(nletti[i]<nmin){
			nmin=nletti[i];
			}
		}
		nmax=nletti[0];
		for(int i=0; i<10; i++){
			if(nletti[i]<nmax){
				nmax=nletti[i];
			}
		}
	}
	cout<<"Il numero massimo inserito \212: "<<nmax<<" mentre il numero minimo \212: "<<nmin;
}
