#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int vet[30];
    int x=0;
    int z=1;
    srand(time(NULL));
    for(int i=0; i<30; i++){
        vet[i]=rand()%101+1;
        cout<<vet[i]<<"  ";
    }
    cout<<"  "<<endl;
    for(int a=0; a<30-1; a++){
        int b=0;
        for(int c=a+1; c<30; c++){
            if(vet[a]>vet[c] && vet[c]!=vet[a]){
                    b=vet[a];
                    vet[a]=vet[c];
                    vet[c]=b;
            }
        }
    }
    while(x<30){
        if(vet[x]==vet[z]){
            x++;
            z++;
        }else{
            cout<<vet[x]<<"   ";
            x++;
            z++;
        }
    }
}