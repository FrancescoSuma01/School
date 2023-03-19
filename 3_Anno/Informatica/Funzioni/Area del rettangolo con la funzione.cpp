#include <iostream>
using namespace std;

int a=0;
int area(int base, int altezza);

int main(){
	int base=0, altezza=0;
	cout<<"Calcolo area del rettangolo"<<endl;
	cout<<"Inserisci il valore della base: ";
	cin>> base;
	cout<<"Inserisci il valore dell'altezza: ";
	cin>> altezza;	
	a=area(base, altezza);
	cout<<"L'area \212 "<<a;
}
int area(int base, int altezza){
	a=base*altezza;
	return a;
}
