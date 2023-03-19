#ifndef __CONTATORE_H__
#define __CONTATORE_H__

#include <iostream>


class Contatore {
    private:
        int valore;
    
    public:
        Contatore();
        Contatore(int p);
        Contatore(const Contatore& c);
        ~Contatore();

        // void setValore(int v);
        // int getValore() const;

        void incrementa();
        void reset();
        void stampa();

};


#endif 

