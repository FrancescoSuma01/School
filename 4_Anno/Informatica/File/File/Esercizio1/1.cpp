#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

typedef struct {
    string name;
    float reale;
    int num;
} P;

void scritturaFile(P a[], int N){
    fstream f;
    f.open("esempio.csv", ios::out);                            //apre il file per scrivere
    
    if (f.is_open()){
        cout << "Aperto"<<endl;
        f<<a[0].name<<","<<a[0].num<<","<<a[0].reale;
        for(int i=1; i <N;i++){
            f<<"\n"<<a[i].name<<","<<a[i].num<<","<<a[i].reale;
        }
    }else {
        cout<<"Errore nell'apertura file"<<endl;
    }
        
    f.close();
}

void letturaFile(P v[], int nn){
    fstream fin;
    fin.open("esempio.csv", ios::in);                            //apre il file per leggere

    string line;
    int i =0;

    while(!fin.eof()) {
        
        getline(fin, line, ',');
        cout<<"'"<<line<<"'"<<endl;
        v[i].name = line;
                
        getline(fin, line);
        cout<<"'"<<line<<"'"<<endl;
                
        v[i].num = atoi(line.c_str());
        i++;
        fin.close();
    }
    if(i == nn){
        for(int j=0; j<i; j++){
            cout<<j<<")"<<v[j].name<<", "<<v[j].num<<","<<v[j].reale<<endl;
        }
    }else{
        cout<<"Il file è vuoto"<<endl;
    }
}

int main(){
    fstream f;
    fstream fin;
    int N = 4;
    P a[N];

    int nn = 10;
    P v[nn];

    //Assegnazione dei valori al vettore di struct
    a[0].name = "AA";
    a[0].num = 3;
    a[0].reale = 3.5;
    a[1].name = "BB";
    a[1].num = 7;
    a[1].reale = 3.5;
    a[2].name = "CCA";
    a[2].reale = 3.5;
    a[2].num = 5;
    a[3].name = "DD";
    a[3].num = 70;
    a[3].reale = 3.5;

    //scritturaFile(a, N);
    letturaFile(v, nn);

    
}