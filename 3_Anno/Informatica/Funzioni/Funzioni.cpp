#include <iostream>
using namespace std;

int n1=0, n2=0, m=0;
int trovaMaggiore(int a, int b);

int main(){
	cout<<"Trova maggiore"<<endl;
	cout<<"Inserisci un numero: ";
	cin>>n1;
	cout<<"Inserisci un numero: ";
	cin>>n2;
	m=trovaMaggiore(n1, n2);
	cout<<"Il numero maggiore \212: "<<m<<endl;
	cout<<"Fine del programma";
	
}
/* se le variabili sono diverse di nome dal main alla seconda funzione la prima varibile messa nelle parentesi assume il valore della prima variabile del main*/
int trovaMaggiore(int a, int b){
	//n1=a n2=b
	if(a>b){
		return a;
	}else{
		return b;
	}
}
