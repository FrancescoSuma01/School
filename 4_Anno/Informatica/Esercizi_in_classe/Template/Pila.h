#ifndef __PILA_H_
#define __PILA_H_

#include <iostream>
using namespace std;

template <typename T>
//Pila tipo di dado
class Pila{
    private:
        T *ptr;
        int size;
        int capacity;

    public:
        Pila(int cap);
        ~Pila();

        T pop();
        void push(const T& elem);

        int getSize();
        bool isFull();
        bool isEmpty();


};

#endif