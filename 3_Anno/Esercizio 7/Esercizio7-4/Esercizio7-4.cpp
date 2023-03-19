#include <iostream>
using namespace std;

int costo_biglietto, eta;
bool exitt=true;
string risposta;

int main(){
while(exitt){
    cout<<"Scrivi la tua eta tra: "<<endl;
    cout<<"1 se sei bambino(minore di 6 anni)"<<endl;
    cout<<"2 se sei studente(minore di 18 anni)"<<endl;
    cout<<"3 se sei adulto(minore di 65 anni)"<<endl;
    cout<<"4 se sei pensionato(maggiore di 65 anni"<<endl;
	cin>>eta;
	if (eta=="1"){
		costo_biglietto=0;
	} else if(eta=="2"){
		costo_biglietto=8;
	} else if (eta=="3"){
		costo_biglietto=15;
	} else if (eta=="4"){
		costo_biglietto=10;
	}else{
		cout<<"La tua eta non e inserita nel sistema";
	}
    cout<<"\n\n Il costo del biglietto e': "<<endl;
    cout<<costo_biglietto;
    cout<<"\n Vuoi acquiustare un altro biglietto?  si/no"<<endl;
    cin>>risposta;
    if (risposta=="si"){
        exitt=exitt;
    }else {
    	exitt=!exitt;
	}
}
}
