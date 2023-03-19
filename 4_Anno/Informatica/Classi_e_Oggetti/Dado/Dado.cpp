#include "Dado.h"
#include <time.h>

int Dado::count = 0;

Dado::Dado(int _numFacce, int _ultimoNumero):
_numFacce(0),_ultimoNumero(0){
    cout<<"Dado con "<<_numFacce<<endl;
    count++;
}

~Dado(){
    cout<<"Distruttore di dado con "<<numFacce<<endl;
    count=count-1;
}

int Dado::getCount(){
    return count;
}

int Dado::lancia(){
    if(!ultimoNumero){
        srand(time(NULL));
    }
    ultimoNumero = rand()%numFacce + 1;

    return ultimoNumero;
}