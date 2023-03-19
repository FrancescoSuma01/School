//preprocessore(preprocessing)
#ifndef __FRAZIONE_H__  //se non è  definito il file 
#define __FRAZIONE_H__  //definisci il file

#include <iostream>

class Frazione{
    
    private:

        int num;
        int den;
        //char segno;

    public:
        Frazione();
        Frazione(int n, int d);//Costruttore
        ~Frazione();//distruttore
        /* void setNumeratore(int numeratore);
        int getNumeratore();
        
        void setDenumeratore(int denumeratore);
        int getDenumeratore();
        */
        void printFraction();
        Frazione sommaF(Frazione f); 
        
};

#endif