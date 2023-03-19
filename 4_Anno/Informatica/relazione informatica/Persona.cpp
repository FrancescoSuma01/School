#include "Persona.h"

///////////////////////////////////  COSTRUTTORI  ////////////////////////////////////////////////////////////
Persona::Persona(std::string parola){
	std::cout<<"chiamata costruttore 1\n";
	nome=parola;
	eta=0;
	sesso='M';
}
//--------------------------------  FUNCTION OVERLOADING  ////////////////////////////////////////////////////
Persona::Persona(std::string parola,int numero){
	std::cout<<"chiamata costruttore 2\n";
	nome=parola;
	eta=numero;
	sesso='M';
}
//--------------------------------  LISTA DI INIZIALIZZAZIONE  ///////////////////////////////////////////////
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
/////////////////////////////////////  DISTRUTTORE  //////////////////////////////////////////////////////////
Persona::~Persona(){
	std::cout<<"chiamata distruttore\n";
}
/////////////////////////////////////  SETTER       //////////////////////////////////////////////////////////
void Persona::setNome(std::string parola){
	nome=parola;
}
void Persona::setEta(int numero){
	eta=numero;
}
void Persona::setSesso(char carattere){
	sesso=carattere;
}
/////////////////////////////////////  GETTER       //////////////////////////////////////////////////////////
std::string Persona::getNome(){
	return nome;
}
int Persona::getEta(){
	return eta;
}
char Persona::getSesso(){
	return sesso;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Persona::mostra(){
	std::cout<<"Nome: "<<nome<<std::endl;
	std::cout<<"Eta: "<<eta<<std::endl;
	std::cout<<"Sesso "<<sesso<<std::endl;
}
/////////////////////////////////////  FRIEND      //////////////////////////////////////////////////////////
void stampa(Persona n[],const int DIM){
	for (int i=0;i<DIM;i++){
		std::cout<<"numero "<<i+1<<std::endl;
		n[i].mostra();
	}
}
//////////////////////////////////////  OPERATOR OVERLOADING  /////////////////////////////////////////////////////////
bool Persona::operator ==(const Persona& P1){
	if(nome==P1.nome && sesso==P1.sesso && eta==P1.eta){
		return 1;
	}
	return 0;
}
