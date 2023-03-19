#include <iostream>
using namespace std;

float numero, somma;

int main(){
	cout<<"Scrivi un numero: "<<endl;
	cin>>numero;
	somma=numero;
	cout<<"La somma \212: "<<somma<<endl;
	while(numero>0){
	cin>>numero;
	if(numero<=0){
		cout<<"La somma \212: "<<somma;
	}else{
	somma=numero+somma;
	cout<<"La somma \212: "<<somma<<endl;
	}
}
}
