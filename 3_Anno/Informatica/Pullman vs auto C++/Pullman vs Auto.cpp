#include <iostream>
using namespace std;

float distanza, lcarburante, consumo, costototale, biglietto;

int main(){
cout<< "Scrivi distanza casa-scuola \n\n";
cin>> distanza;
cout<< "\n\n Quanto costa 1l di carburante? \n\n";
cin>> lcarburante;
cout<< "\n\n Quanti km fa l'auto con 1l di benzina? \n\n";
cin>> consumo;
costototale=((distanza*2)*consumo)*lcarburante;
cout<<"\n\n Il costo del carburante totale e' ";
cout<< costototale;
cout<<"\n\n Quanto costa il biglietto per l'autobus? \n\n";
cin>> biglietto;
if (biglietto>costototale){
	cout<< "E' piu' conveniente viaggiare con l'auto";
} else {
	cout<< "E' piu' conveniente viaggiare con l'autobus";
}
}
