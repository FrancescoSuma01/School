#include <iostream>
using namespace std;

const int DIM=1000;
void carica(int vet[DIM], int n);
void visualizza(int vet[DIM], int n);
int trovaMinimo(int vet[DIM], int n);
bool numeroPrimo(int num, bool nprimo);
int contaNumeriPrimi(int vet[DIM], int n, int num, int calcolo);

int main(){
	int vet[DIM];
	int n=0;
	int min=0;
	bool nprimo;
	int nprimi=0;
	int num=0;
	int calcolo=0;
	cout<<"Quanti numeri vuoi inserire? ";
	cin>>n;
	cout<<n;
	carica(vet, n);
	visualizza(vet, n);
	min=trovaMinimo(vet, n);
	cout<<"Inserisci un numero: ";
	cin>>num;
	nprimo=numeroPrimo(num, nprimo);
	if(nprimo==true){
		cout<<"Il numero \212 un numero primo";
	}else{
		cout<<"Il numero non \212 un numero primo";
	}
	nprimi=contaNumeriPrimi(vet, n, num, calcolo);
	cout<<"Hai inserito "<<nprimi<<" numeri primi";
}

void carica(int vet[], int n){
	cout<<n;
	for(int i=0; i<n; i++){
		do{
			cout<<"Inserisci un numero: ";
			cin>>vet[i];
		}while(vet[i]>0 && vet[i]<DIM);
	}
}

void visualizza(int vet[], int n){
	for(int i=0; i<n; i++){
		cout<<vet[i]<<"  ";
	}
}

int trovaMinimo(int vet[], int n){
	int min=vet[0];
	for(int i=0; i<n; i++){
		if(vet[i]<min){
			min=vet[i];
		}
	}
	return min;
}

bool numeroPrimo(int num, bool nprimo){
	int calcolo=0;
	for(int a=0; a<num; a++){
		calcolo=num%a;
		if(calcolo>0){
			nprimo=true;
		}else{
			nprimo=false;
		}
	}
	return nprimo;
}

int contaNumeriPrimi(int vet[], int n, int num, int calcolo){
	int contatore=0;
	for(int i=0; i<DIM; i++){
		for(int a=0; a<num; a++){
			calcolo=num%a;
			if(calcolo>0){
				contatore++;
			}
		}
	}
	return contatore;
}
