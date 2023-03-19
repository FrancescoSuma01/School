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
		void mostra();
		friend void stampa(Persona n[],const int DIM);
		bool operator == (const Persona& P1);
		
};

class Bibliotecario:public Persona{
	
	private:
		std::string nome;
		int eta;
		char sesso;	
		int anniAttivita;
	
	public:
		
		void setAnniAttivita(int anni);
		int getAnniAttivita();
		void mostra();
		
};

class Studente:public Persona{
	
	private:
		std::string nome;
		int eta;
		char sesso;	
		int annoScolastico;
	
	public:
		
		void setAnnoScolastico(int anni);
		int getAnniScolastico();
		void mostra();
		
};

#endif