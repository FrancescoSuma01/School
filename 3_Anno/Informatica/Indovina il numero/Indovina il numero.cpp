#include <iostream>
#include <time.h>
using namespace std;

int nestratto=0;
int nletto=0;
int contatore=0;
string risposta;
bool esci=true;
int scelta=0;

int main(){
	while(esci=esci){
		srand(time(NULL));
		cout<<"Questo software \212 un gioco che ti permette di indovinare un numero estratto dal computer."<<endl;
		nestratto=rand()%11;
		cout<<"Inserisci il valore che secondo te \212 stato estratto: "<<endl;
		cin>>nletto;
		contatore++;
		if(nletto==nestratto){
		cout<<"COMPLIMENTI il valore da te inserito \212 corretto";
		}else{
		while(nletto!=nestratto && contatore<10){
			cout<<"Inserisci il valore che secondo te \212 stato estratto: "<<endl;
			cin>>nletto;
			if(nletto>nestratto){
				cout<<"Il numero \212 troppo grande"<<endl;
				cout<<"Ritenta sarai piu fortunato"<<endl;
				contatore++;
			}else if(nletto<nestratto){
				cout<<"Il numero \212 troppo piccolo."<<endl;
				cout<<"Ritenta sarai piu fortunato"<<endl;
				contatore++;
			}else{
				cout<<"COMPLIMENTI! Il numero da te inserito \212 corretto."<<endl;
				contatore++;	
			}
			}			
			if(contatore>=10){
				cout<<"GAME OVER!!"<<endl;
			}
				cout<<"Hai eseguito il codice "<<contatore<<" volte";
		}
		
	cout<<"Vuoi eseguire nuovamente il programma? si/no"<<endl;
	cin>>risposta;
	if (risposta!="si" && risposta!="no"){
	while(risposta!="si" && risposta!="no"){
		cout<<"Vuoi eseguire nuovamente il programma? si/no"<<endl;
	    cin>>risposta;
	    if (risposta=="si"){
		esci==esci;
	} else if(risposta=="no"){
		esci!=esci;
		cout<<"Grazie di aver eseguito il programma";
	}
	}
    }
}
}

