#include <iostream>
using namespace std;

int numero=0;
bool paridispari(int numero);
int ninserito=0;
bool pari;


int main(){
	cout<<"Questo programma ti mostra se il numero inserito \212 pari o dispari"<<endl;
	cout<<"Inserisci un numero: ";
	cin>>ninserito;
	pari=paridispari(numero);
	if(pari==true){
		cout<<"Il numero inserito \212 pari";
	}else{
		cout<<"Il numero inserito \212 dispari";	
	}
}

bool paridispari(int numero){
	if(ninserito%2==0){
		pari=true;
	}else{
		pari=false;	
	}
	return pari;	
}
