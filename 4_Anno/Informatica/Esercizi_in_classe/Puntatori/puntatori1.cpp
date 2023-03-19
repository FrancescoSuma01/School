/*
*    @file puntatori
*
*    @author francesco suma
*
*    @classe 4bia
*/

#include <iostream>
using namespace std;


int main(){

    int N = 0;

    cin>>N;
    cout<<"sizeof (double)-> "<<sizeof(double)<<endl;
    double *p = new double[N];          //Alloca una nuova variabile nell'HEAP

    for (int i = 0; i<N; i++){
        *(p+i) = 3,14*i;
    }

    for (int a = 0; a<N; a++){
        cout<<*(p+a)<<", valore ="<<endl;
    }

    return 0;
}