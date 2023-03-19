#include "Contatore.h"

int main(){

    Contatore c;
    c.incrementa();
    c.stampa();
    
    Contatore c1(5000);
    c1.stampa();
    c1.reset();

    Contatore c2(c1);
    c2.incrementa();
    c2.stampa();
    c1.stampa();

    std::cout<<"Bye"<<std::endl;
    return 0;
}
