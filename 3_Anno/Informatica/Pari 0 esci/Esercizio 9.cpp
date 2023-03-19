#include <iostream>
using namespace std;

int valore, pari=0;

int main(){
	cout<<"Scrivi un numero: ";
	cin>>valore;
	while(valore>0){
		cout<<"Scrivi un numero: ";
		cin>>valore;
		if(valore%2==0){
			pari++;
		}
	}
	cout<<"I numeri pari sono: "<<pari;
	system("pause");
}
