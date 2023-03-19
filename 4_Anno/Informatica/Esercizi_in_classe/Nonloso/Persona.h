#ifndef __PERSONA_H
#define __PERSONA_H

#include <iostream>

class Persona{
    private:
        unsigned long int _idSSN;

    public:
        Persona();
        Persona(unsigned long int id);
        Persona(const Persona& p);

        ~Persona(); //distruttore

        void stIdSSN(unsigned long int id);
        float getIdSSN();

        //void stId(unsigned long int id);

};

#endif