#include "Rettangolo.h"

int Rettangolo::getAltezza(){
    return altezza;
}
        
void Rettangolo::setAltezza(int a){
    altezza = a;
}

int Rettangolo::getBase(){
    return base;
}

void Rettangolo::setBase(int b){
    base = b;
}

int Rettangolo::getArea(){
    return base*altezza;
}
        
int Rettangolo::getPerimetro(){
    return (base+altezza)*2;
}

int Rettangolo::getDiagonale(){
    int d;
    d=sqrt(base*base+altezza*altezza);
    return d;
}