#include <iostream>
using namespace std;

float numero, nnumeri, media, somma; 
int valori;

int main(){
	cout<<"Scrivi i numeri da calcolare la media: "<<endl;
	cin>>numero;
	nnumeri=0;
	somma=numero;
	while(numero!=0){
	    cin>>numero;
	    somma=somma+numero;
		nnumeri++;
	}
	media=somma/nnumeri;
	cout<<"La media dei numeri \212: "<<media;
}
