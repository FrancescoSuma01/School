#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int vet[20];
    srand(time(NULL));
    for(int i=0; i<20; i++){
        vet[i]=rand()%41-20;
    }
    for(int a=0; a<20-1; a++){
        int b=0;
        for(int c=a+1; c<20; c++){
            if(vet[a]<vet[c]){
                b=vet[a];
                vet[a]=vet[c];
                vet[c]=b;
            }
        }
    }
    for(int x=0; x<20; x++){
        cout<<vet[x]<<"   ";
    }
}