#include <iostream>
using namespace std;

int numero, somma;

int main(){
	cout<<"Scrivi un numero intero: "<<endl;
	cin>>numero;
	somma=numero;
	while(somma<100){
		cin>>numero;
		somma=numero+somma;
	}
	cout<<"La somma \212: "<<somma;
}
