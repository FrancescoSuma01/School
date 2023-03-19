/*

@file ordinamento.cpp
@author Francesco Suma

*/

#include <iostream>
#include <time.h>
using namespace std;

const int N = 1000;

void carica_array(int array[], int valori){
    for (int i = 0; i < valori; i++){
        //cout<<"Inserisci un valore: ";
        array[i]=rand()%100+1;
    }

}

void bubblesort_decrescente(int array[], int valori) {
    int t = 0;
    for (int i = 0; i < valori-1; i++) {
        for (int j = 0; j < valori-i-1; j++) {
            if (array[j] < array[j+1]) {
                t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
            }
        }
    }
}

void bubblesort_crescente(int array[], int valori) {
    int t = 0;
    for (int i = 0; i < valori-1; i++) {
        for (int j = 0; j < valori-i-1; j++) {
            if (array[j] > array[j+1]) {
                t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
            }
        }
    }
}

void ordinamentoSel_decrescente(int array[], int valori) {
    int t;
    for (int i = 0; i < valori; i++) {
        for (int j=i+1; j<valori; j++) {
            if (array[i] < array[j]) {
                t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
}

void ordinamentoSel_crescente(int array[], int valori) {
    int t;
    for (int i = 0; i < valori; i++) {
        for (int j=i+1; j<valori; j++) {
            if (array[i] < array[j]) {
                t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
}

void visualizza_array(int array[], int valori){
    for (int i = 0; i < valori; i++){
        cout<<"valore "<<i<<" : "<<array[i]<<endl;
    }
}

int main(){
    bool exitt =true;
    string risposta = " ";
    int array[N];
    int valori = 0;
    int scelta = 0;
    while(exitt == true){
        srand(time(NULL));
        cout<<"Quati valori vuoi ordinare: ";
        cin>>valori;
        carica_array(array, valori);
        cout<<"---------------Vettore non ordinato---------------"<<endl;
        visualizza_array(array, valori);
        cout<<"Quale metodo di ordinamenro vuoi utilizzare? Digita: 1 se vuoi eseguire il bubblesort o 2 se vuoi eseguire l'ordinamento per selezione ";
        cin>>scelta;
        do{
            if (scelta == 1){
                cout<<"Digita 1 se vuoi eseguire l'ordinamento in ordine crescente, 2 se vuoi eseguire l'ordinamento in ordine decrescente: ";
                cin>>scelta;
                do{
                    if (scelta == 1){
                        bubblesort_crescente(array, valori);
                    }else if(scelta == 2){
                        bubblesort_decrescente(array, valori);
                    }else{
                        cout<<"ATTENZIONE!! Questo valore non \212 riconosciuto inserisci un nuovo valore: ";
                    }
                }while(scelta != 1 && scelta != 2 );
            }else if(scelta == 2){
                do{
                    if (scelta == 1){
                        ordinamentoSel_decrescente(array, valori);
                    }else if(scelta == 2){
                        ordinamentoSel_crescente(array, valori);
                    }else{
                        cout<<"ATTENZIONE!! Questo valore non \212 riconosciuto inserisci un nuovo valore: ";
                    }
                }while(scelta != 1 && scelta != 2 );
            }else{
                cout<<"ATTENZIONE!! Questo valore non \212 riconosciuto inserisci un nuovo valore: ";
            }
        }while(scelta != 1 && scelta != 2 );
        cout<<"---------------Vettore ordinato---------------"<<endl;
        visualizza_array(array, valori);
        do{
            cout<<"Vuoi eseguire nuovamente il programma? si/no ";
            cin>>risposta;
            if (risposta == "si"){
                exitt = true;
            }else if(risposta == "no"){
                exitt = false;
            }
        }while (risposta!="si" && risposta!="no");
    }
    cout<<"Grazie di aver eseguito il programma!";
}