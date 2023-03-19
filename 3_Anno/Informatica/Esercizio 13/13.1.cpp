#include <iostream>
using namespace std;

int nletti[10];
int somma=0;

int main(){
	cout<<"Questo programma fa la somma di dieci numeri letti da tastiera"<<endl;
	for(int i=0; i<10; i++){
		cout<<"Scrivi un numero ";
		cin>>nletti[i];
		somma=somma+nletti[i];
	}
	cout<<"La somma dei numeri inseriti \212: "<<somma;
}

