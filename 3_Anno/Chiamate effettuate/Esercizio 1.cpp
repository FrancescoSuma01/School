#include <iostream>
using namespace std;

int chiamate_effettuate;
int chiamate_superiori=0;
float ottanta;
float sessanta;
float cinquanta;
float tutte;
float costo;

int main(){
	cout<< "Quante chiamate hai effettuato?\n";
	cin>> chiamate_effettuate;
if (chiamate_effettuate<=80){
	costo=5;
} else if(chiamate_effettuate<=140){
	chiamate_superiori= chiamate_effettuate-80;
	costo= (chiamate_superiori*0.10)+costo;
} else if(chiamate_effettuate<=190){
    chiamate_superiori= chiamate_effettuate-chiamate_superiori;
	costo= (chiamate_superiori*0.07)+costo;
}else if(chiamate_effettuate>=190){
	chiamate_superiori= chiamate_effettuate-chiamate_superiori;
	costo= (chiamate_superiori*0.05)+costo;
}
cout<< "Il costo della bolletta /212 di "<<costo<< "euro"<<endl;
}
