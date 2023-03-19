#include <iostream>
#include <string>
#include <time.h>
using namespace std;

string team [20] = {"Inter", "Milan", "Napoli", "Atalanta", "Juventus", "Fiorentina", "Roma",  "Lazio", "Torino", "Verona", "Empoli", "Sassuolo", "Bologna", "Udinese", "Spezia", "Sampdoria", "Venezia", "Cagliari", "Genoa", "Salernitana"};

int main(){
    bool exitt =true;
    string risposta = " ";
    int teamA = 0, teamB = 0, punteggioA = 0, punteggioB = 0;
    float crediti = 500.0;
    srand(time(NULL));
    while(exitt){

        teamA = rand()%21;                      //generazione squadra casa
        teamB = rand()%21;                      //generazione squadra ospite
        while (teamA == teamB){
            teamB = rand()%21;
        }

        cout<<"----------T E A M----------"<<endl;
        cout<<team[teamA]<<" VS "<<team[teamB]<<endl;
        cout<<"---------------------------------"<<endl;

        cout<<""<<endl;
        do{
            cout<<"Vuoi eseguire nuovamente il programma? si/no ";
            cin>>risposta;
            if (risposta == "si"){
                exitt = true;
            }else if(risposta == "no"){
                exitt = false;
            }
        }while (risposta!="si" && risposta!="no");
    }
    cout<<"Grazie di aver eseguito il programma!";
}