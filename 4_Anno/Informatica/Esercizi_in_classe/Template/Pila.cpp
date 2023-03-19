#ifndef __PILA_CPP_
#define __PILA_CPP_

#include "Pila.h"

template <typename T>
Pila<T>::Pila(int cap): capacity(cap), size(0){
    cout<<"Costruttore di default"<<endl;
    ptr = new T[capacity];//Esegue l'allocazione della Pila
}

template <typename T>
Pila<T>::~Pila(){
    cout<<"Distruttore"<<endl;
    delete[] ptr;
    ptr = NULL;
}

template <typename T>
T Pila<T>::pop(){
    T elem;

    if (size){
        elem = ptr[size];
        size--;
    }else{
        cout<<"Pila is Empty"<<endl;
    }
}

template <typename T>
void Pila<T>::push(const T& elem){
    if (size<capacity){
        ptr[size] = elem;
        size++;
    }else{
        cout<<"Pila if Full"<<endl;
    }
}

template <typename T>
int Pila<T>::getSize(){
    
}

template <typename T>
bool Pila<T>::isFull(){

}

template <typename T>
bool Pila<T>::isEmpty(){

}

#endif