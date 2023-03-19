#include "Complex.h"

//Costruttore di default
Complex::Complex():re(0),im(0)//initialization list
{
	cout<<"Costruttore di Default"<<endl;	
}

Complex::Complex(float a, float b):re(0),im(0){
	cout<<"Costruttore Parametrico"<<endl;
}

Complex::~Complex(){
	cout<<"Distruttore di Default"<<endl;
}

//metodo friend
const Complex operator+(const Complex& left, const Complex& right){
	float rr = left.re + right.re;
	float ii = left.im + right.im;

	Complex c(rr, ii);
	return c;
}

//nome della classe:: il class scope, cioe richiama il metodo e per richiamarlo deve accedere alla classe
void Complex::print(){
	if (im<0){
		cout<<re<<" -i"<<im<<endl;	
	}else{
		cout<<re<<" +i"<<im<<endl;
	}
	
}
