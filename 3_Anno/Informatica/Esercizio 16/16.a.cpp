#include <iostream>
using namespace std;

const int DIM=5;
int vet[DIM];
void carica(int vet[], int DIM);
void visualizza(int vet[], int DIM);
int trovaMinimo(int vet[], int DIM);
int minore=0, scrivi=0, numero=0;

int main(){
	for(int i=0; i<DIM; i++){
		cout<<"Inserisci un valore: ";
		cin>>numero;
		vet[i]=(int)carica(vet[DIM], DIM);
	}
	for(int i=0; i<DIM; i++){
		cout<<"Il valore dell'elemento "<<i<<" 212 ";
		vet[i]=(int)visualizza(vet[DIM], DIM);
	}
	minore=(int)trovaMinimo(vet[DIM], DIM);
	cout<<"Il valore minore del vettore \212: "<<minore;
}

void carica(int vet[DIM], const int DIM){
	for(int i=0; i<DIM; i++){
		vet[i]=numero;
	}
}

void visualizza(int vet[DIM], const int DIM){
	for(int i=0; i<DIM; i++){
		cout<<vet[i];
	}
}

int trovaMinimo(int vet[DIM], const int DIM){
	minore=vet[0];
	int i=0;
	for(int i=0; i<DIM; i++){
		if(minore<vet[i]){
			minore=vet[i];
		}else{
			minore=minore;
		}
	}
	return minore;
}
