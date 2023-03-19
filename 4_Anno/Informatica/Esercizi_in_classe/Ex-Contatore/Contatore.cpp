#include "Contatore.h"

/* solo nei metodi costruttori è possibile definire 
la initialization list, cioè la lista degli attributi privati della classe.
Tale lista è inserita dopo l'header del costruttore seguito da ":"
Esempio:

Classe::Costruttore(): attributo1(valore1), attributo2(valore2), ... {
    //resto delle operazioni nel costruttore
}

*/

Contatore::Contatore():
    valore(0) //initialization list
{
    //resto del codice Costruttore
    std::cout<<"\t Costruttore default "<<std::endl;
};

Contatore::Contatore(int p):
    valore(p)//initialization list
{
    std::cout<<"\t Costruttore parametrico "<<std::endl;
};


Contatore::Contatore(const Contatore& c):
    valore(c.valore)//initialization list
{
    std::cout<<"\t Copy constructor "<<std::endl;
};

Contatore::~Contatore(){
    std::cout<<"\t Distruttore "<<valore<<std::endl;
};


// void Contatore::setValore(int v);
// int Contatore::getValore() const;

void Contatore::incrementa(){
    valore++;//incrementa il contatore di 1
}


void Contatore::reset(){
    valore = 0;
}


void Contatore::stampa(){
    std::cout<<"Contatore: "<<valore<<std::endl;
}

