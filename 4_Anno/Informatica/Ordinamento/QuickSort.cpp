/*

@author: Francesco SUMA
@esercizio: Quick Sort
@classe: 4^BIA

*/

#include <iostream>
#include <time.h>
using namespace std;


int partition(int A[], int left, int right){
    int p = (left+right)/2;
    int i=left, j=right;
    int temp;

    while(i<j){
        //leggo tutti gli elementi dell'array che sono di valore inferiore al pivot

        while (A[i]<A[p]){
            i++;
        }//wend left
        //leggo tutti gli elementi dell'array che sono di valore maggiori al pivot
        while (A[j]>A[p]){
            j--;
        }//wend right

        //swap
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;

        if (i==p){
            p=j; 
            i++; 
        }else if (j==p){
            p=i;
            j--;
        } else {
            i++;
            j--;
        }
    }//wend j
    return p;
}

void quickSort(int A[], int l, int r) {
    
    if (l < r) {
        int p = partition(A, l, r);
        quickSort(A,l,p-1);    //Prima del pivot
        quickSort(A, p+1, r);  //Dopo il pivot
    }//fi
    
}

void printArray(int arr[], int dim) {

    for(int i = 0; i < dim; i++){
       cout<< arr[i] << ", ";
    }
    cout<<endl;
}

int main(){

    int N = 10;
    int v[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++){
        v[i] = rand()%100+1;
    }
    cout<<"* * * * *Vettore originale* * * * *"<<endl;
    cout<<endl;
    printArray(v,N);
    cout<<endl;
    cout<<"----------------------------"<<endl;
    cout<<endl;
    quickSort(v,0,N-1);
    
    cout<<"* * * * *Vettore ordinato* * * * *"<<endl;
    cout<<endl;
    printArray(v,N);
    cout<<endl;
    cout<<"----------------------------"<<endl;
    
    return 0;
    system("PAUSE");
}