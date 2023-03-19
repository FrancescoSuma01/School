#include "Lavoratore.h"


void Lavoratore::setAnniAttivita(int anni){
	anniAttivita=anni;
}
int Lavoratore::getAnniAttivita(){
	return anniAttivita;
}
/////////////////////////// FUNCTION OVERRIDING  ///////////////////////
void Lavoratore::mostra(){
	Persona::mostra();
	std::cout<<"Anni di attivita: "<<anniAttivita<<std::endl;
}


