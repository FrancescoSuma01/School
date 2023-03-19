#ifndef __DADO_H__
#define __DADO_H__

#include <iostream>
using namespace std;

class Dado{

    private:
        int _nFacce;
        int _ultimoNumero;

        static int count; //variabile che viene dichiarata una sola volta e inizializzata una sola volta

    public:
        Dado(int _numFacce);
        ~Dado();

        int lancia();
};

#endif