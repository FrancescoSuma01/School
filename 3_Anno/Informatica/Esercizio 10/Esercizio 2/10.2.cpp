#include <iostream>
using namespace std;

int numero, addendo, fattoriale;

int main(){
	cout<<"Scrivi un valore per calcolare il valore fattoriale: "<<endl;
	cin>>numero;
	fattoriale=1;
	for(int i=numero; i>=1; i--){
		fattoriale=fattoriale*i;
	}
	cout<<"Il valore fattoriale \212: "<<fattoriale;
}
