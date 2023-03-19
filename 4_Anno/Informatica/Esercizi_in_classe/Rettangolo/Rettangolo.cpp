#include "Rettangolo.h"

#include <iostream>


Rettangolo::Rettangolo() {
	std::cout<<"Costruttore di default: inizializzo!"<<std::endl;
	
	base = 0;
	altezza = 0;
	colore = "grigio";
}



inline Rettangolo::Rettangolo(int b, int h) {
	std::cout<<"Costruttore con parametri: inizializzo!"<<std::endl;
	
	base = b;
	altezza = h;
	colore = "grigio";
}

Rettangolo::~Rettangolo(){
	std::cout<<"Distruttore invocato"<<std::endl;
	std::cout<<"Dealloco rettangolo con base ="<<base;
	std::cout<<" h ="<<altezza<<std::endl;
}

int Rettangolo::getAltezza(){
	return altezza;
}

void Rettangolo::setAltezza(int a)
{
	altezza = a;

}

		
int Rettangolo::getBase(){
	return base;
}

void Rettangolo::setBase(int b){
	base = b;
}
		
		
int Rettangolo::getArea(){
	if (base==0 || altezza ==0){
		std::cout<<"Non definiti"<<std::endl;
	}
	return base*altezza;
}

int Rettangolo::getPerimetro(){
	return (base+altezza)*2;
}


int Rettangolo::getDiagonale(){
	int d;
	d = sqrt(base*base + altezza*altezza);
	return  d;
}


bool Rettangolo::isSquare(){
	if (base == altezza){
		return true;
	}
	return false;
}

//funzione amica
Rettangolo somma(Rettangolo a, Rettangolo b){
	Rettangolo res(a.base+b.base, a.base+b.base);
	return res;
}