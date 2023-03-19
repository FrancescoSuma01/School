#ifndef __PERSONA_H_
#define __PERSONA_H_

#include <iostream>

class Persona{
	private:
		
		std::string nome;
		int eta;
		char sesso;	
	
	public:
		
		//COSTRUTTORI
		inline Persona(){
			std::cout<<"chiamata costruttore di default\n";
			nome="Nessuno";
			eta=0;
			sesso='M';
		}
		Persona(std::string parola);
		Persona(std::string parola,int numero);
		Persona(std::string parola,int numero,char carattere);
		Persona(const Persona& oggetto);
		
		//DISTRUTTORE
		~Persona();
		//SETTER
		void setNome(std::string parola);
		void setEta(int numero);
		void setSesso(char carattere);
		//GETTER
		std::string getNome();
		int getEta();
		char getSesso();
		//
		void mostra();
		//FUNZIONE FRIEND
		friend void stampa(Persona n[],const int DIM);
		//OPERATOR OVERLOADING
		bool operator == (const Persona& P1);
		
};


#endif

