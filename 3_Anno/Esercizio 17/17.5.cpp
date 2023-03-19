#include <iostream>
using namespace std;


int main(){
	const int valori=10;
	int nletti[valori];
	cout<<"Inserisci "<<valori<<" numeri"<<endl;
	for(int i=0; i<valori; i++){
		cout<<"Inserisci un numero: ";
		cin>>nletti[i];
	}
	cout<<"Il cotenuto del vettore \212: "<<endl;
	for(int i=0; i<valori; i++){
		cout<<nletti[i]<<"  ";
	}
	cout<<"\n\n Il contenuto del vettore in ordineinverso \212: "<<endl;
	for(int i=valori-1; i>=0; i--){
		cout<<nletti[i]<<"  ";
	}
}
