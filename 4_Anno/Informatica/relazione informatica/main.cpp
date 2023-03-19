#include <iostream>
#include "Persona.h"
#include "Lavoratore.h"

using namespace std;

int main(){
	
	Persona p1;
	Persona p2("Marco",21,'M');
	p2.mostra();
	
	if(p1==p2){
		std::cout<<"p1 e p2 sono uguali\n";
	}else{
		std::cout<<"p1 e p2 sono diversi\n";
	}
	
	Lavoratore l1;
	l1.setAnniAttivita(3);
	l1.mostra();
	
	
	
	
	return 0;
}
