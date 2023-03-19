#include <iostream>
#include "Rettangolo.h"

using namespace std;

int main() {
	
	Rettangolo r1, r2(5,5);
//		r.base = 5;
//		r.altezza = 7;

	//cout<<"\t area: "<<r.getArea() <<endl;
	
	r1.setBase(5);
	r1.setAltezza(7);
	r1.colore = "giallo"; // = 3;	
	
	cout<<"Rettangolo"<<endl;
	cout<<"\t perimetro: "<<r1.getPerimetro()<<endl;
	cout<<"\t area: "<<r1.getArea() <<endl;
	cout<<"\t diagonale: "<<r1.getDiagonale() <<endl;
	cout<<"\t square?: "<<r1.isSquare() <<endl;


	cout<<"Rettangolo"<<endl;
	cout<<"\t perimetro: "<<r2.getPerimetro()<<endl;
	cout<<"\t area: "<<r2.getArea() <<endl;
	cout<<"\t diagonale: "<<r2.getDiagonale() <<endl;
	cout<<"\t square?: "<<r2.isSquare() <<endl;
	
	cout<<"bye!"<<endl;
	
	return 0;
}
