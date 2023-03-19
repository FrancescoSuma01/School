#include <iostream>
using namespace std;

float lato, area;

int main(){
	cout<<"Scrivi la dimensione del lato: "<<endl;
	cin>>lato;
	while(lato<0){
		cout<<"ERRORE la dimensione del lato \212 minore di 0"<<endl;
		cout<<"Inserisci la dimensione del lato"<<endl;
		cin>>lato;
	}
	area=lato*lato;
	cout<<"L'area del quadrato \212: "<<area;
}
