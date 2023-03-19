/*
    @author Francesco SUMA
    @4^BIA
    @esercizio 5 : stampa su file
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    ofstream out ("stampa.txt");
    string nome = " ";
    string cognome = " ";
    int eta = 0;
    cout<<"Scrivi il tuo nome: ";
    cin>>nome;
    cout<<"Scrivi il tuo cognome: ";
    cin>>cognome;
    cout<<"Scrivi la tua eta: ";
    cin>>eta;
    out<<"Ciao "<<nome<<" "<<cognome<<" di eta "<<eta;
    cout<<"Ora apri il file 'stampa.txt'"<<endl;
}