#include <iostream>
#include <time.h>
using namespace std;

const int DIM=1000;
void carica(int vet[], int &n);
void visualizza(int vet[], int n);
bool cercaElemento(int vet[], int n, int x);

int main(){
	int vet[DIM];
	int n=0, x=0;
	bool a=true;
	cout<<"Quanti valori vuoi che vengano caricati? ";
	cin>>n;
	carica(vet, n);
	visualizza(vet, n);
	cout<<"\n Quale elemento vuoi che venga cercato nel vettore? ";
	cin>>x;
	a=cercaElemento(vet, n, x);
	if(a==true){
		cout<<"\n Il valore da te inserito \212 presente nel vettore"<<endl;
	}else{
		cout<<"\n Il valore di te inserito non \212 presente nel vettore"<<endl;
	}
}

void carica(int vet[], int &n){
	srand(time(NULL));
	for(int i=0; i<n; i++){
		vet[i]=rand()%101;
	}
}

void visualizza(int vet[],int n){
	cout<<"I valori inseriti sono: ";
	for(int i=0; i<n; i++){
		cout<<vet[i]<<"  ";
	}
	cout<<" "<<endl;
}

bool cercaElemento(int vet[], int n, int x){
	int i=0;
	while(a==true || i==n){
		if(vet[i]==x){
			a==true;
		}else{
			i++;
		}
	}
	return a;
}