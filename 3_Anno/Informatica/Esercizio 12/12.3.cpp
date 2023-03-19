#include <iostream>
using namespace std;

int contatore=0, i;
int numeroa=0, numerob=0, somma1=0, somma2=0, sommamaggiore=0;

int main(){
	cout<<"Inserisci quante coppie di numeri vuoi inserire: ";
	cin>>contatore;
	while(i!=contatore){
		cout<<"Inserisci il primo numero: ";
		cin>>numeroa;
		cout<<"Inserisci il secondo numero: ";
		cin>>numerob;
		somma1=numeroa+numerob;
		if (somma1%2==0){
			sommamaggiore=somma1-somma2;
			if(sommamaggiore<0){
				somma2=somma1;
			}else{
				somma2=somma2;
			}
		}
		i++;
	}
	cout<<"La somma maggiore \212: "<<sommamaggiore;
	system("pause");
}
