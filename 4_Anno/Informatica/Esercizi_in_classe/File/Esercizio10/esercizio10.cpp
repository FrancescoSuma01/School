/*
*    @esercizio: pag 400 n 15
*    @traccia: Dato un file di testo "amici.txt", le cui righe rappresentano ciascuna i dati di una persona secondo 
*    il seguente formato (tracciato record):       
*    – cognome: al più 30 caratteri
*    – uno o più spazi
*    – nome: al più 30 caratteri
*    – uno o più spazi
*    – sesso: un carattere (’M’ o ’F’)
*    – uno o più spazi
*    – anno di nascita       
*    scrivi una funzione che visualizza un record alla volta sul video. Successivamente chiedi all’utentela tipologia 
*    di nominativi che vuole visualizzare (solo maschi oppure femmine, con un certo nome,ecc.) ed effettua una ricerca 
*    filtrata visualizzando solo i record che rispettano queste richieste
*    @author: francesco suma
*    @classe: 4BIA
*/

#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

typedef struct{
    string cognome;
    string nome;
    string sesso;
    int annoNascita = 0;
}Amici;

void scritturaFile(Amici amici[], int n){
    fstream fa;
    fa.open("amici.txt",ios::out);

    if (fa.is_open()){
        cout << "Aperto"<<endl;
        do{
            cout<<"Quanti amici vuoi caricare? ";
            cin>>n;
        }while (!(n<100 && n>=0));

        for (int i = 0; i < n; i++){
            cout<<"Inserisci il cognome: ";
            cin>>amici[i].cognome;
            cout<<"Inserisci il nome: ";
            cin>>amici[i].nome;
            cout<<"Inserisci M se \212 uomo D se \212 donna: ";
            cin>>amici[i].sesso;
            cout<<"Inserisci l'anno di nascita: ";
            cin>>amici[i].annoNascita;
            fa<<amici[i].cognome<<"  "<<amici[i].nome<<"  "<<amici[i].sesso<<"  "<<amici[i].annoNascita;
        }
        fa.close();
    }else{
        cout<<"ERRORE! Non \212 stato possibile aprire il file"<<endl;
    }
}

void letturaFile(Amici amici[], int n){
    fstream fb;
    fb.open("amici.txt",ios::in);
}

int main(){
    Amici amici[100];
    int n = 0, scelta = 0;

    do{
        cout<<"Se vuoi solo caricare degli amici digita 1 se vuoi leggere gli amici digita 2: ";
        cin>>scelta;
        if(scelta!=1 && scelta!=2){
            cout<<"ERRORE! valore non riconosciuto inserisci solo 1 o 2"<<endl;
        }
    }while (scelta!=1 && scelta!=2);
    
    if (scelta == 1){
        scritturaFile(amici, n);
    }else{
        letturaFile(amici, n);
    }

    cout<<"Grazie di aver eseguito il programma"<<endl;
}