#include <iostream>
using namespace std;

int primo_numero, secondo_numero, risultato, resto;

int main(){
	cout<< "Scrivi due numeri interi da dividere per mostrare il loro risultato e il loro resto"<<endl;
	cin>>primo_numero;
	cin>>secondo_numero;
	risultato=primo_numero/secondo_numero;
	resto=primo_numero%secondo_numero;
	cout<< "Il risultato e' "<<risultato;
	cout<<"Il resto e' ";
	cout<<resto;
}
