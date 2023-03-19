#include <iostream>
using namespace std;



int main(){
	int nletti[10];
	int num=0;
	int a=1;
	bool esci=true;
	cout<<"Inserisci 10 numeri"<<endl;
	for(int i=0; i<10; i++){
		cout<<"Inserisci un numero: ";
		cin>>nletti[i];
	}
	num=nletti[0];
	while(a<=10 && esci==true){
		if(nletti[a]==num){
			num=nletti[a];
			esci=true;
			a++;
			cout<<a<<endl;
		}else(nletti[a]!=num);{
			esci=false;
			cout<<a<<endl;
		}
	}	
	if(a==10){
		cout<<"I numeri sono tutti uguali tra loro ";
	}else{
		cout<<"I numeri sono tutti diversi ";
	}
}


