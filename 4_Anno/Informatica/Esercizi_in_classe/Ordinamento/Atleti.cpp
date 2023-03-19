/*
@author Francesco SUMA
@esercizio 3
*/

#include <iostream>
#include <time.h>
using namespace std;

const int n = 160;

void carica(int g[], int atleti);
void migliore(int g[], int atleti);
void peggiore(int g[], int atleti);
float media(int g[], int atleti);
void atleti_sup(int g[], int atleti, float mediap);

int main(){
    int g[n];
    int atleti = 0;
    float mediap = 0.0;
    srand(time(NULL));
    do{
        cout<<"Quanti atleti vuoi caricare? ";
        cin>>atleti;
    }while(atleti>160 || atleti<0);
    cout<<"*************************************************************"<<endl;
    carica(g, atleti);
    migliore(g, atleti);
    peggiore(g, atleti);
    mediap = (g, atleti);
    cout<<"La media dei punteggi \212 "<<mediap<<endl;
    cout<<"*************************************************************"<<endl;
    atleti_sup(g, atleti, mediap);
}

void carica(int g[], int atleti){
    for(int i = 0; i<atleti; i++){
        g[i] = rand()%101;
    }
    for(int i = 0; i<atleti; i++){
        cout<<"Atleta "<<i<<": "<<g[i]<<endl;
    }
}

void migliore(int g[], int atleti){
    int t = 0;
    for (int i = 0; i < atleti-1; i++) {
        for (int j = 0; j < atleti-i-1; j++) {
            if (g[j] < g[j+1]) {
                t = g[j];
                g[j] = g[j+1];
                g[j+1] = t;
            }
        }
    }
    cout<<"Il miglior punteggio \212: "<<g[0]<<endl;
    cout<<"*************************************************************"<<endl;
}

void peggiore(int g[], int atleti){
    int t = 0, a = 0, pos = 0;
    for (int i = 0; i < atleti-1; i++) {
        for (int j = 0; j < atleti-i-1; j++) {
            if (g[j] > g[j+1]) {
                t = g[j];
                g[j] = g[j+1];
                g[j+1] = t;
            }
        }
    }
    for (int a = 0; a<n; a++){
        if (g[a]>=35){
            pos = a;
            break;
        }
        
    }
    cout<<"Il peggior punteggio \212: "<<g[pos]<<endl;
    cout<<"*************************************************************"<<endl; 
}

float media(int g[], int atleti){
    int somma = 0, contatore = 0;
    float media = 0.0;
    for(int i = 0; i<atleti; i++){
        if(g[i]>=35){
            somma = somma + g[i];
            contatore++;
        }
    }
    media = somma / contatore;
    return media;
}

void atleti_sup(int g[], int atleti, float mediap){
    int contatore = 0;
    for(int i = 0; i<atleti; i++){
        if(g[i]>mediap){
            contatore++;
        }
    }
    cout<<contatore<<" atleti sono superiori alla media"<<endl;
}