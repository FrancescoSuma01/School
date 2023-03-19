#include <iostream>
#include "Persona.h"

using namespace std;

int main(){
	int occupazione = 0;
    string nome;
    int eta = 0;
    char sesso;

    cout<<"Inserisci le tue informazioni di base: "<<endl;
    cout<<"Nome: ";
    cin>>nome;
    cout<<"Eta: ";
    cin>>eta;
    cout<<"Sesso M/F: ";
    cin>>sesso;

	Persona p1(nome, eta, sesso);
	
    cout<<"Digita 1 se sei un Bibliotecario altrimenti 2 se sei uno studente: "<<endl;
    cin>>occupazione;
    if (occupazione==1){
        Bibliotecario b1;
	    b1.setAnniAttivita(3);
	    b1.mostra();
    }else if(occupazione==2){
        Studente s1;
        s1.setAnnoScolastico(4);
	    s1.mostra();
    }
    
	return 0;
}