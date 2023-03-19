#include <iostream>
using namespace std;

int main(){
	const int venti=5;
	int nletti[venti];
	cout<<"Inserisci 20 numeri"<<endl;
	for(int i=0; i<venti; i++){
		cout<<"Inserisci un numero: ";
		cin>>nletti[i];
	}
	cout<<"I numeri positivi sono: "<<endl;
	for(int i=0; i<venti; i++){
		if(nletti[i]>0){
			cout<<nletti[i]<<"  ";
		}
	}
	cout<<"I numeri negativi sono: "<<endl;
	for(int i=0; i<venti; i++){
		if(nletti[i]<0){
			cout<<nletti[i]<<"  ";
		}
	}
}
