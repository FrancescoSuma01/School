#include <iostream>
#include <time.h>
using namespace std;

const int N=5;
void carica(int m[N][N]);
void visualizza(int m[N][N]);
int min(int m[N][N]);
int max(int m[N][N]);
int contarange(int m[N][N]);
int contad3(int m[N][N]);
void visualizzap(int m[N][N]);

int main(){
    int m[N][N];
    int minimo=0, massimo=0, nvalori=0, dispari=0;
    srand(time(NULL));
    carica(m);
    visualizza(m);
    cout<<endl;
    cout<<"****************************************************************"<<endl;
    minimo=min(m);
    cout<<"Il valore minimo \212: "<<minimo<<endl;
    massimo=max(m);
    cout<<"Il valore massimo \212: "<<massimo<<endl;
    cout<<"****************************************************************"<<endl;
    nvalori=contarange(m);
    cout<<"Nella matrice ci sono "<<nvalori<<" compresi tra 15 e 25"<<endl;
    cout<<"****************************************************************"<<endl;
    dispari=contad3(m);
    cout<<"I valori dispari e multipli di 3 presenti nella diagonale principale della matrice sono: "<<dispari<<endl;
    cout<<"****************************************************************"<<endl;
    visualizzap(m);
}

void carica(int m[N][N]){
    for(int i=0; i<N; i++){
        for(int x=0; x<N; x++){
            m[i][x]=rand()%31;
        }
    }
}

void visualizza(int m[N][N]){
    for(int i=0; i<N; i++){
        for(int x=0; x<N; x++){
            cout<<"\t"<<m[i][x];
        }
        cout<<endl;
    }
}

int min(int m[N][N]){
    int minimo=m[0][0];
    for(int i=0; i<N; i++){
        for(int x=0; x<N; x++){
            if(m[i][x]<minimo){
                minimo=m[i][x];
            }
        }
    }
    return minimo;
}

int max(int m[N][N]){
    int massimo=m[0][0];
    for(int i=0; i<N; i++){
        for(int x=0; x<N; x++){
            if(m[i][x]>massimo){
                massimo=m[i][x];
            }
        }
    }
    return massimo;
}

int contarange(int m[N][N]){
    int cont=0;
    for(int i=0; i<N; i++){
        for(int x=0; x<N; x++){
            if(m[i][x]>15 && m[i][x]<25){
                cont++;
            }
        }
    }
    return cont;
}

int contad3(int m[N][N]){
    int multipli=0;
    for(int i=0; i<N; i++){
        if(m[i][i]%2!=0){
            if(m[i][i]%3==0){
                multipli++;
            }
        }
    }
    return multipli;
}

void visualizzap(int m[N][N]){
    for(int i=0; i<N; i++){
        for(int x=0; x<N; x++){
            if(m[i][x]%2==0){
                cout<<"\t"<<m[i][x];
            }else{
                cout<<"\t*";
            }
        }
        cout<<endl;
    }
}