#include <iostream>
using namespace std;

string basei, basef;
int vbinario[4]={0,1,2,3};
int esponente=1;
int vdecimale;
int risposta=0;
int zero,uno,due,tre;
int i=0;
int risultatod=0;
string risultatob="";

int main(){
	cout<<"Questo \212 un software che ti permette convertire un numero dalla base decimale alla base binaria e viceversa."<<endl;
	cout<<"Digita: "<<endl;
	cout<<"1 per la conversione binario-->decimale"<<endl;
	cout<<"2 per la conversione decimale-->binario"<<endl;
	cin>>risposta;
	switch(risposta){
		case 1:
			cout<<"Digita il primo valore partendo da sinistra: ";
			cin>>zero;
			if(zero<0 || zero>1){
				cout<<"ERRORE";
			}
			vbinario[3]=zero;
			cout<<"Digita il secondo valore partendo da sinistra: ";
			cin>>uno;
			vbinario[2]=uno;
			cout<<"Digita il terzo valore partendo da sinistra: ";
			cin>>due;
			vbinario[1]=due;
			cout<<"Digita il quarto valore partendo da sinistra: ";
			cin>>tre;
			vbinario[0]=tre;
			while(i<=3){
				vbinario[i]=vbinario[i]*esponente;
				i++;
				esponente=esponente*2;
			}
			risultatod=vbinario[0]+vbinario[1]+vbinario[2]+vbinario[3];
			cout<<"Il risultato \212: "<<risultatod<<endl;
		break;
	
		case 2:
			cout<<"Scrivi un numero decimale";
			cin>>vdecimale;
			while (vdecimale>0) {
			if(vdecimale%2==0){
				risultatob='0'+risultatob;
			}else {
				risultatob='1'+risultatob;
			}
			vdecimale=vdecimale/2;
	}
	cout<<"Il numero scelto convertito in binario equivale a: "<<risultatob<<endl;
		break;
	}
	system("pause");
}
