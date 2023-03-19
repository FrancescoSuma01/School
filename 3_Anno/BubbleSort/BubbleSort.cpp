#include <iostream>
#include <time.h>
using namespace std;

const int DIM=100;
// carica nel vettore n elem. casuali
void carica(int v[], int &n);
// visualizza il contenuto del vett.
void visualizza(int v[], int n);
// ordina il vettore
void bubblesort(int v[], int n);

int main(){
    int n;
    int v[DIM];
    srand(time(NULL));
    carica(v,n);
    visualizza(v,n);
    bubblesort(v,n);
    cout<<"Vettore ordinato: "<<endl;
    visualizza(v,n);
}

void carica(int v[], int &n){
    cout<<"Quanti elementi vuoi caricare? ";
    cin>>n;
    for (int i=0;i<n;i++) {
        // genero val. casuali tra 1 e 100
        v[i]=rand()%100+1;
    }
}

void visualizza(int v[], int n){
    for (int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// ordinamento crescente

void bubblesort(int v[], int n){
    int s;
// Per n‐1 volte...
    for (int i=0;i<n‐1;i++) {
// scorro il vettore...
        for (int j=0;j<n‐i‐1;j++) {
// confronto le celle adiacenti
            if (v[j]>v[j+1]) {
// scambio...
                s=v[j];
                v[j]=v[j+1];
                v[j+1]=s;
            }
        }
    }
}