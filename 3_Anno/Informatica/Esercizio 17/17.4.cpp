#include <iostream>
using namespace std;


int main(){
	const int volte=10;
	int nletti[volte];
	int max=0;
	int posto=0;
	cout<<"Inserisci "<<volte<<" numeri"<<endl;
	for(int i=0; i<volte; i++){
		cout<<"Inserisci un numero: ";
		cin>>nletti[i];
	}
	max=nletti[0];
	for(int i=0; i<volte; i++){
		if(nletti[i]>max){
			max=nletti[i];
			posto=i;
		}else{
			max=max;
		}
	}
	cout<<"Il numero massimo inserito \212: "<<max<<" nella posizione: "<<posto;
}
