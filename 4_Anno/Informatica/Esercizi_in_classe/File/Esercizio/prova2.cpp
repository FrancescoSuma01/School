#include <iostream>
using namespace std;

int main(){

}

//funzione che popola array
int popolaArray(float v[], int dim, int seed){
    srand (seed);
    float num = 0.0;
    for(int i = 0; i<dim; i++){
        v[i] = num;
    }
    
}