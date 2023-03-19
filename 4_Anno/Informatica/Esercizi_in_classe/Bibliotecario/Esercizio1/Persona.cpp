#include "Persona.h"

Persona::Persona(std::string parola){
	std::cout<<"chiamata costruttore 1\n";
	nome=parola;
	eta=0;
	sesso='M';
}

Persona::Persona(std::string parola,int numero){
	std::cout<<"chiamata costruttore 2\n";
	nome=parola;
	eta=numero;
	sesso='M';
}

Persona::Persona(std::string parola,int numero,char carattere):nome(parola),eta(numero),sesso(carattere)
{
	std::cout<<"chiamata costruttore 3\n";
}

Persona::Persona(const Persona& oggetto){
	std::cout<<"chiamata costruttore per copia\n";
	nome=oggetto.nome;
	eta=oggetto.eta;
	sesso=oggetto.sesso;
}

Persona::~Persona(){
	std::cout<<"chiamata distruttore\n";
}

void Persona::setNome(std::string parola){
	nome=parola;
}

void Persona::setEta(int numero){
	eta=numero;
}

void Persona::setSesso(char carattere){
	sesso=carattere;
}

std::string Persona::getNome(){
	return nome;
}

int Persona::getEta(){
	return eta;
}

char Persona::getSesso(){
	return sesso;
}

void Persona::mostra(){
	std::cout<<"Nome: "<<nome<<std::endl;
	std::cout<<"Eta: "<<eta<<std::endl;
	std::cout<<"Sesso "<<sesso<<std::endl;
}

void stampa(Persona n[],const int DIM){
	for (int i=0;i<DIM;i++){
		std::cout<<"numero "<<i+1<<std::endl;
		n[i].mostra();
	}
}

bool Persona::operator ==(const Persona& P1){
	if(nome==P1.nome && sesso==P1.sesso && eta==P1.eta){
		return 1;
	}
	return 0;
}

void Bibliotecario::setAnniAttivita(int anni){
	anniAttivita=anni;
}

int Bibliotecario::getAnniAttivita(){
	return anniAttivita;
}

void Bibliotecario::mostra(){
	Persona::mostra();
	std::cout<<"Anni di attivita: "<<anniAttivita<<std::endl;
}

void Studente::setAnnoScolastico(int anni){
	annoScolastico=anni;
}

int Studente::getAnniScolastico(){
	return annoScolastico;
}

void Studente::mostra(){
	Persona::mostra();
	std::cout<<"Anni di attivita: "<<annoScolastico<<std::endl;
}