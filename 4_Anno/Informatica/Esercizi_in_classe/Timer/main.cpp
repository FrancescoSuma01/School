/**
 * @file main.cpp
 * @author MU & FS
 * 
 * @copyright Copyright (c) 2022
 * 
 * @brief definizione ed implementazione di una classe in C++ corrispondente al class diagram allegato(file: classdiagram)
 */

#include "Timer.h"

int main(){
    Time tempo1;
    const int n = 60;
    int secondi = 0, minuti = 0, ore = 0;
    string risposta;
    bool exitt =true;

    do{
        cout<<"Inserisci le ore: ";
        cin>>ore;
    } while (!(ore>=0 && ore<24));
    do{
        cout<<"Inserisci i minuti: ";
        cin>>minuti;
    } while (!(minuti>=0 && minuti<n));
    do{
        cout<<"Inserisci i secondi: ";
        cin>>secondi;
    } while (!(secondi>=0 && secondi<n));

    cout<<"---------------------------------------------"<<endl;

    tempo1.setSecond(secondi);
    tempo1.setMinute(minuti);
    tempo1.setHours(ore);

    cout<<"---------------------------------------------"<<endl;

    tempo1.print();
    cout<<"---------------------------------------------"<<endl;
    tempo1.reset();

    cout<<"--Stampa dopo reset--"<<endl;
    cout<<"Ore: "<<tempo1.getHours()<<endl;
    cout<<"Minuti: "<<tempo1.getMinute()<<endl;
    cout<<"Secondi: "<<tempo1.getSecond()<<endl;

    cout<<"Bye"<<endl;
}