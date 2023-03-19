#include <iostream>
#include <time.h>
#include <string>
using namespace std;

void carica(int vet[5]);
void controllo(int vet[5], int punteggio[5], int gettoni);
typedef struct {
    string nome;
    int eta=0;
}Utente;

int main(){
    Utente dati;
    int gettoni=0;
    int vet[5];
    int punteggio[5]={5,10,15,20,25};
    bool esci=true;
    string risposta;
    while(esci=esci){
        cout<<"Inserisci il tuo nome: ";
        cin>>dati.nome;
        cout<<"Inserisci la tua eta: ";
        cin>>dati.eta;
        if(dati.eta<18){
            cout<<"Errore! Per giocare a questo gioco devi aver ragiunto la maggior età"<<endl;
            system("PAUSE");
        }else{
            cout<<"In questo gioco per vincere bisogna che 2 o più numeri siano uguali, la vittoria \212 pari alla somma dei punti della coppi moltiplicato per i gettoni"<<endl;
            cout<<dati.nome<<" quanti gettoni vuoi acquistare? (ogni gettone costa 1euro)"<<endl;
            cin>>gettoni;
            cout<<"----------------------------------------------------------------------"<<endl;
            srand(time(NULL));
            carica(vet);
            cout<<endl;
            cout<<"----------------------------------------------------------------------"<<endl;
            controllo(vet, punteggio, gettoni);
        }
        cout<<"Vuoi eseguire nuovamente il programma? si/no"<<endl;
	    cin>>risposta;
	    if (risposta!="si" && risposta!="no"){
	        while(risposta!="si" && risposta!="no"){
		        cout<<"Vuoi eseguire nuovamente il programma? si/no"<<endl;
	            cin>>risposta;
	            if (risposta=="si"){
		            esci=esci;
	            } else if(risposta=="no"){
		            esci==false;
		            cout<<"Grazie di aver eseguito il programma";
	            }
	        }
        }
    }
}

void carica(int vet[5]){
    for(int i=0; i<5; i++){
        vet[i]=rand()%11;
        cout<<"\t"<<vet[i];
    }
}

void controllo(int vet[5], int punteggio[5], int gettoni){
    int somma=0;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5-j; j++){
            if(vet[i]==vet[j] && vet[j]>0){
                somma=punteggio[j]+somma;
                cout<<"punteggio"<<punteggio[j]<<endl;
                cout<<"somma"<<somma<<endl;
                vet[j]=0;
            }
        }
    }
    if(somma>5){
        cout<<"Hai vinto "<<somma*gettoni<<" euro";
    }else{
        cout<<"Ritenta sarai piu fortunato";
    }
}