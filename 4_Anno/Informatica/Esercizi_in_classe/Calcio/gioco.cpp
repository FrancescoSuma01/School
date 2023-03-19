#include "gioco.h"
#include <time.h>

Calciatore::Calciatore(){
    cout<<"Costruttore di default"<<endl;
}

Calciatore::Calciatore(string _name, string _team, int _numero, int _posizione, int _parate, int _segnati, int _nonParate, int _golErrati){
    cout<<"Costruttore Parametrico"<<endl;
}

Calciatore::~Calciatore(){
    cout<<" Distruttore "<<endl;
}

void Calciatore::setName(string _nome){
    _name = _nome;
}

string Calciatore::getName(){
    return _name;
}

void Calciatore::setTeam(string _squadra){
    _team = _squadra;
}

string Calciatore::getTeam(){
    return _team;
}

void Calciatore::setNumero(int _numero){
    _number = _numero;
}

int Calciatore::getNumero(){
    return _number;
}

void Calciatore::setDirezione(int _posizione){
    _direzionePalla = _posizione;

    srand(time(NULL));
    _posizione=rand()%6;
}

int Calciatore::getDirezione(){
    return _direzionePalla;
}