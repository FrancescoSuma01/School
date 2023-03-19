#include <iostream>
#include <string>
using namespace std;

typedef struct{
    string nome;
    string cognome;
    int anno_nascita;
    float punteggio;
}TSportivo;
void caricaAtleti(TSportivo atleti[], int &n);
void visualizzaAtleti(TSportivo atleti[], int n);
void trovaAtletaMigliore(TSportivo atleti[], int n);
void trovaAtletaGiovane(TSportivo atleti[], int n);
void trovaAtletaGiovane(TSportivo atleti[], int n);
float calcolaMediaPunteggio(TSportivo atleti[], int n);
void ordinaAtleti(TSportivo atleti[], int n);
void ricercaAtletiPerPunteggio(TSportivo atleti[], int n);

int main(){
    int n=0;
    TSportivo atleti[100];
    TSportivo v[100];
    float media=0;
    cout<<"Quanti atleti vuoi caricare? ";
    cin>>n;
    caricaAtleti(atleti, n);
    visualizzaAtleti(atleti, n);
    trovaAtletaMigliore(atleti, n);
    trovaAtletaGiovane(atleti, n);
    media=calcolaMediaPunteggio(atleti, n);
    cout<<"La media dei punteggi \212: "<<media<<endl;
    cout<<"********************************************************************"<<endl;
    ordinaAtleti(atleti, n);
    ricercaAtletiPerPunteggio(atleti, n);
    system ("PAUSE");
}

void caricaAtleti(TSportivo atleti[], int &n){
    for(int i=0; i<n; i++){
        cout<<"Inserisci il nome dell'atleta: ";
        cin>>atleti[i].nome;
        cout<<"Inserisci il cognome dell'atleta: ";
        cin>>atleti[i].cognome;
        cout<<"Inserisci l'anno di nascita dell'atleta: ";
        cin>>atleti[i].anno_nascita;
        cout<<"Inserisci il punteggio ottenuto dall'atleta: ";
        cin>>atleti[i].punteggio;
        cout<<endl;
    }
    cout<<"********************************************************************"<<endl;
}

void visualizzaAtleti(TSportivo atleti[], int n){
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"Nome atleta: "<<atleti[i].nome<<endl;
        cout<<"Cognome atleta: "<<atleti[i].cognome<<endl;
        cout<<"Anno di nascitadell'atleta: "<<atleti[i].anno_nascita<<endl;
        cout<<"Punteggio ottenuto dall'atleta: "<<atleti[i].punteggio<<endl;
        cout<<endl;
    }
    cout<<"********************************************************************"<<endl;
}

void trovaAtletaMigliore(TSportivo atleti[], int n){
    int massimo=atleti[0].punteggio;
    int a=0;
    cout<<endl;
    cout<<"Atleta con il punteggio maggiore: "<<endl;
    for(int i=0; i<n; i++){
        if(atleti[i].punteggio>massimo){
            massimo=atleti[i].punteggio;
            a=i;
        }
    }
    cout<<"Nome atleta: "<<atleti[a].nome<<endl;
    cout<<"Cognome atleta: "<<atleti[a].cognome<<endl;
    cout<<"Anno di nascitadell'atleta: "<<atleti[a].anno_nascita<<endl;
    cout<<"Punteggio ottenuto dall'atleta: "<<atleti[a].punteggio<<endl;
    cout<<"********************************************************************"<<endl;
}

void trovaAtletaGiovane(TSportivo atleti[], int n){
    int anno=atleti[0].anno_nascita;
    int a=0;
    cout<<endl;
    cout<<"Atleta piu giovane: "<<endl;
    for(int i=0; i<n; i++){
        if(atleti[i].anno_nascita>anno){
            anno=atleti[i].punteggio;
            a=i;
        }
    }
    cout<<"Nome atleta: "<<atleti[a].nome<<endl;
    cout<<"Cognome atleta: "<<atleti[a].cognome<<endl;
    cout<<"Anno di nascitadell'atleta: "<<atleti[a].anno_nascita<<endl;
    cout<<"Punteggio ottenuto dall'atleta: "<<atleti[a].punteggio<<endl;
    cout<<"********************************************************************"<<endl;
}

float calcolaMediaPunteggio(TSportivo atleti[], int n){
    float media_punteggio=0, somma=0;
    for(int i=0; i<n; i++){
        somma=somma+atleti[i].punteggio;
    }
    media_punteggio=somma/n;
    return media_punteggio;
}

void ordinaAtleti(TSportivo atleti[], int n){
    TSportivo x;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n;j++){
            if(atleti[i].punteggio<atleti[j].punteggio){
                x=atleti[i];
                atleti[i]=atleti[j];
                atleti[j]=x;
            }
        }
    }
    for(int y=0; y<n; y++){
        cout<<"Nome atleta: "<<atleti[y].nome<<endl;
        cout<<"Cognome atleta: "<<atleti[y].cognome<<endl;
        cout<<"Anno di nascitadell'atleta: "<<atleti[y].anno_nascita<<endl;
        cout<<"Punteggio ottenuto dall'atleta: "<<atleti[y].punteggio<<endl;
    }
    cout<<"********************************************************************"<<endl;
}

void ricercaAtletiPerPunteggio(TSportivo atleti[], int n){
    float valore_1=0, valore_2=0;
    cout<<"Inserisci due valori di ricerca"<<endl;
    cout<<"Inserisci il primo valore: ";
    cin>>valore_1;
    cout<<"Iinserisci il secondo valore: ";
    cin>>valore_2;
    for(int i=0; i<n; i++){
        if(atleti[i].punteggio>=valore_1 && atleti[i].punteggio<=valore_2){
            cout<<"Nome atleta: "<<atleti[i].nome<<endl;
            cout<<"Cognome atleta: "<<atleti[i].cognome<<endl;
            cout<<"Anno di nascitadell'atleta: "<<atleti[i].anno_nascita<<endl;
            cout<<"Punteggio ottenuto dall'atleta: "<<atleti[i].punteggio<<endl;
        }
    }
}