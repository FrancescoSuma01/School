#include <iostream>
using namespace std;

float numero, somma;

int main(){
	cout<<"Scrivi dieci numeri"<<endl;
	for(int i=0; i<10; i++){
		cin>>numero;
		somma=somma+numero;
	}
    cout<<"La somma \212 "<<somma;
}
