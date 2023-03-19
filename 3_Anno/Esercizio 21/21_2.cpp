#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int vet[30];
    srand(time(NULL));
    for(int i=0; i<30; i++){
        vet[i]=rand()%101+1;
    }
    for(int a=0; a<30-1; a++){
        int b=0;
        for(int c=a+1; c<30; c++){
            if(vet[a]>vet[c]){
                b=vet[a];
                vet[a]=vet[c];
                vet[c]=b;
            }
        }
    }
    for(int x=0; x<30; x++){
        cout<<vet[x]<<"   ";
    }
}