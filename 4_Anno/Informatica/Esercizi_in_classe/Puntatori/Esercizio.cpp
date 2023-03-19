#include <iostream>

using namespace std;

int main(){

    int size;

    do{
        cout<<"Inserisci la dimensione del vettore: ";
    }while(size<0);

    int* pArray = new int[size];
    int* basePtr = pArray;

    for(int i = 0; i < size; i++){
        *(pArray) = i+1;
        pArray++;
    }

    for(int i = 0; i<size; i++){
        cout<<*pArray<<endl;
        pArray--;
    }

    delete[] basePtr;


}