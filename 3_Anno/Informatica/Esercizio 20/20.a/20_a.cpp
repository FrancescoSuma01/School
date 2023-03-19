#include <iostream>
#include <time.h>
using namespace std;

void carica(int vet[], int &n);
void visualizza(int vet[], int n);
int trovaMin(int vet[], int n, int min);
void stampaPercentuali(int vet[], int n);
int confrontaSomme(int vet[], int n, int somme);
const int DIM=100;

int main(){
    srand(time(NULL));
    int n;
    int vet[DIM];
    int min=0;
    int somme=0;
    do{
        cout<<"Quanti valori vuoi che vengano inseriti? ";
        cin>>n;
    }while(n>DIM);
    carica(vet, n);
    visualizza(vet, n);
    min=trovaMin(vet, n, min);
    cout<<"\n Il valore piu piccolo inserito nel vettore \212: "<<min<<endl;
    stampaPercentuali(vet, n);
    somme=confrontaSomme(vet, n, somme);
    cout<<"Sono state trovate "<<somme<<" somme";
}

void carica(int vet[], int &n){
	for(int i=0; i<n; i++){
		vet[i]=rand()%50+1;
	}
}

void visualizza(int vet[], int n){
	for(int i=0; i<n; i++){
		cout<<vet[i]<<"  ";
	}
}

int trovaMin(int vet[], int n, int min){
    min=vet[0];
    for(int i=0; i<n; i++){
        if(vet[i]<min){
            min=vet[i];
        }else{
            min=min;
        }
    }
    return min;
}

int confrontaSomme(int vet[], int n, int somme){
    int a=0;
    int b=1;
    int c=2;
    while(a==n){
        if(vet[a]+vet[b]==vet[c]){
            somme++;
        }
        a++;
        b++;
        c++;
    }
    return somme;
}

void stampaPercentuali(int vet[], int n){
    int due=0, tre=0, cinque=0, sette=0, nulli=0;
    float pdue=0, ptre=0, pcinque=0, psette=0, pnulli=0;
    for(int i=0; i<n; i++){
        if(vet[i]%2==0){
            due++;
        }
    }
    for(int i=0; i<n; i++){
        if(vet[i]%3==0){
            tre++;
        }
    }
    for(int i=0; i<n; i++){
        if(vet[i]%5==0){
            cinque++;
        }
    }
    for(int i=0; i<n; i++){
        if(vet[i]%7==0){
            sette++;
        }
    }
    for(int i=0; i<n; i++){
        if(vet[i]%2!=0 && vet[i]%3!=0 && vet[i]%5!=0 && vet[i]%7!=0){
        nulli++;
        }
    }
    cout<<"I numeri multipli di due sono: "<<due<<endl;
    cout<<"I numeri multipli di tre sono: "<<tre<<endl;
    cout<<"I numeri multipli di cinque sono: "<<cinque<<endl;
    cout<<"I numeri multipli di sette sono: "<<sette<<endl;
    cout<<"Inoltre sono stati inseriti "<<nulli<<" valori non multipli di questi"<<endl;
    pdue=(due*100)/n;
    ptre=(tre*100)/n;
    pcinque=(cinque*100)/n;
    psette=(sette*100)/n;
    pnulli=(nulli*100)/n;
    cout<<"La percentuale dei multipli di due \212: "<<pdue<<endl;
    cout<<"La percentuale dei multipli di tre \212: "<<ptre<<endl;
    cout<<"La percentuale dei multipli di cinque \212: "<<pcinque<<endl;
    cout<<"La percentuale dei multipli di sette \212: "<<psette<<endl;
    cout<<"La percentuale dei multipli non multipli \212: "<<pnulli<<endl;
}