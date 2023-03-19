#include <iostream>
#include <time.h>
using namespace std;

int segno=0;
int computer(int segno);

int main(){
	string utente, pc, nome;
	int segno_pc=0, punteggio_pc=0,punteggio_utente=0;
	string risposta;
	bool esci=true;
	srand(time(NULL));
	cout<<"Questo programma ti permette di giocare a morra cinese"<<endl;
	cout<<"Inserisci il tuo nome: ";
	cin>>nome;
	while(esci=esci){
		cout<<"Inserisci il segno che vuoi giocare: ";
		cin>>utente;
		segno_pc=computer(segno);
		if(segno_pc==0){
			pc="sasso";
		}else if(segno_pc==1){
			pc="carta";
		}else{
			pc="forbice";
		}
		cout<<"Il pc ha estratto: "<<pc<<endl;
		if(utente==pc){
			cout<<"Hai paraggiato"<<endl;
			cout<<nome<<": "<<punteggio_utente;
			cout<<"	computer: "<<punteggio_pc<<endl;
		}else if(utente=="carta" && pc=="sasso"){
			cout<<"Hai vinto"<<endl;
			punteggio_utente++;
			cout<<nome<<": "<<punteggio_utente;
			cout<<"	computer: "<<punteggio_pc<<endl;
		}else if(utente=="carta" && pc=="fobice"){
			cout<<"Hai perso"<<endl;
			punteggio_pc++;
			cout<<nome<<": "<<punteggio_utente;
			cout<<"	computer: "<<punteggio_pc<<endl;
		}else if(utente=="sasso" && pc=="carta"){
			cout<<"Hai perso"<<endl;
			punteggio_pc++;
			cout<<nome<<": "<<punteggio_utente;
			cout<<"	computer: "<<punteggio_pc<<endl;
		}else if(utente=="sasso" && pc=="forbice"){
			cout<<"Hai vinto"<<endl;
			punteggio_utente++;
			cout<<nome<<": "<<punteggio_utente<<endl;
			cout<<"	computer: "<<punteggio_pc;
		}else if(utente=="forbice" && pc=="sasso"){
			cout<<"Hai perso"<<endl;
			punteggio_pc++;
			cout<<nome<<": "<<punteggio_utente;
			cout<<"	computer: "<<punteggio_pc<<endl;
		}else if(utente=="forbice" && pc=="carta"){
			cout<<"Hai vinto"<<endl;
			punteggio_utente++;
			cout<<nome<<": "<<punteggio_utente++;
			cout<<"	computer: "<<punteggio_pc<<endl;
		}
		cout<<"Vuoi eseguire nuovamente il programma?"<<endl;
		cin>>risposta;
		if(risposta=="si"){
    		esci=esci;
		}else if(risposta=="no"){
			esci=!esci;
		}else if (risposta!="si" && risposta!="no"){
			while(risposta!="si" && risposta!="no"){
				cout<<"Vuoi eseguire nuovamente il programma?"<<endl;
	    		cin>>risposta;
	    		if (risposta=="si"){
					esci=esci;
				} else if(risposta=="no"){
					esci=!esci;
					cout<<"Grazie di aver eseguito il programma";
				}
			}
    	}
	}
}

int computer(int segno){
	segno=rand()%3;
	return segno;
}
