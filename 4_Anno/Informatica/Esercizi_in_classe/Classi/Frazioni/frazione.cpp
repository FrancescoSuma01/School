#include "frazione.h"

/* void frazione::setNumeratore(int numeratore){
    numeratore = num;
}
        
int frazione::getNumeratore(){
    return num;
}
        
void frazione::setDenumeratore(int denominatore){
    den = denominatore;
}

int frazione::getDenumeratore(){
    return denominatore;
}

void frazione::printFraction(){
    std::cout<<"Frazione "<<numeratore<<"/"<<denominatore<<endl;
} */
Frazione::Frazione(int n, int d){
    std::cout<<"C param"<<std::endl;
    num = n;
    den = d;
}

Frazione::~Frazione(){
    std::cout<<"destructor()"<<std::endl;
}

Frazione::printFraction(){
    std::cout<<num<<"/"<<den<<std::endl;
}
Frazione Frazione::sommaF(Frazione f){
    int numer = num*f.den+ f.num*
    Frazione r(numer, denor)
}