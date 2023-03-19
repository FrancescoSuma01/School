#include <iostream>
using namespace std;

int numero=0, ninseriti=0, i=0;
int pari=0, dispari=0;

int main(){
	do{
		cout<<"Inserisci un valore compreso tra 0 e 100"<<endl;
		cin>>numero;
	}while(numero<0 || numero>100);
	while(i!=numero){
		cout<<"Inserisci un numero: ";
		cin>>ninseriti;
		if(ninseriti%2==0){
			pari++;
		}else{
			dispari++;
		}
		i++;
	}
	if(pari==numero){
		cout<<"I tuoi numeri sono tutti pari";
	}else if(dispari==numero){
		cout<<"I tuoi numeri sono tutti disari";
	}else{
		cout<<"I tuoi numeri sono sia pari che dispari";
	}
	system("pause");
}
