#include <iostream>
using namespace std;



int main(){
	int nletti[10];
	int nmin=0;
	int a=0;
	bool esci=true;
	cout<<"Inserisci 10 numeri"<<endl;
	for(int i=0; i<10; i++){
		cout<<"Inserisci un numero: ";
		cin>>nletti[i];
	}
	nmin=nletti[0];
	while(a<10 && esci==true){
		if(nletti[a]>=nmin){
			nmin=nletti[a];
			esci=true;
			a++;
		}else{
			esci=false;
		}
	}
	if(esci==true){
		cout<<"I numeri sono disposti in ordine crescente. ";
	}else{
		cout<<"I numeri non sono disposti in ordine crescente. ";
	}
}
