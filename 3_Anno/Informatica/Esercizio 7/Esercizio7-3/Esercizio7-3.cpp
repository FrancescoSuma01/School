#include <iostream>
using namespace std;

float primo_numero, secondo_numero, somma, prodotto;

int main (){
	cout<< "Scrivi due numeri: "<<endl;
	cin>>primo_numero;
	cin>>secondo_numero;
	if (primo_numero>0 || secondo_numero>0){
		somma=primo_numero+secondo_numero;
		cout<<somma;
	}else {
		prodotto=primo_numero*secondo_numero;
		cout<<prodotto;
	}
}
