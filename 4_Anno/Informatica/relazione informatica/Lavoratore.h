#include "Persona.h"

class Lavoratore:public Persona{
	
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

