/*

@file prova.cpp
@author Francesco Suma

*/

#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;

//funzione che popola array
int popolaArray(float v[], int dim, int seed){
    srand (seed);
    float num = 0.0;
    int res = 1;
    for(int i = 0; i<dim; i++){
        num = (float)(rand)()/RAND_MAX;
        v[i] = num;
    }
    return res;
}
int leggiArray(float v[], int dim, int seed){
    srand(seed);
    seed=12345;
    for (int i = 0; i<dim; i++){
        cout<<v[i]<<"  "<<endl;
    }
}

int main(){
    //ifstream in("input.txt");
    ofstream out("output.txt");
    float num = 0.0;
    int N = 5;
    float array[N];
    srand(time(NULL));
    cout<<"\n---------------- Generazione interi ----------------"<<endl;
    for (int i = 0; i<N ; i++){
        //Genera numeri casuali interi
        num = rand()%100 + 1;
        out<<"num is: "<<num<<endl;
    }
    cout<<"\n---------------- Generazione float ----------------"<<endl;
    for (int i = 0; i<N ; i++){
        //Genera numeri casuali float
        num = (float)(rand)()/RAND_MAX;
        //num = (rand()1.0)/RAND_MAX;
        out<<"num is: "<<num<<endl;
    }
    cout<<"\n---------------- Generazione float vettore ----------------"<<endl;
    //array passa per riferimento, N passa per valore e seed passa per valore
    int risultato = popolaArray(array, N, 12345);
    if (risultato != 1){
        out<<"qualcosa \212 andato storto"<<endl;
    }else{
        out<<"ok"<<endl;
    }
    return 0;
}