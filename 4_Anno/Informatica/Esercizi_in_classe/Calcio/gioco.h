#ifndef __GIOCO_H_
#define __GIOCO_H_

#include <iostream>
#include <string>
using namespace std;

class Calciatore{

    private:

        string _name;
        string _team;
        int _number;
        int _direzionePalla;
        int _parade;
        int _gol;
        int _errorPort;
        int _errorGole;

    public:
        //Costruttore di default
        Calciatore();
        //Costruttore di parametrico
        Calciatore(string _nome, string _squadra, int _numero, int _posizione, int _parate, int _segnati, int _nonParate, int _golErrati);
        //Distruttore
        ~Calciatore();

        void setName(string _nome);
        string getName();

        void setTeam(string _squadra);
        string getTeam();

        void setNumero(int _numero);
        int getNumero();

        void setParate(int _parate);
        int getParate();

        void setDirezione(int _posizione);
        int getDirezione();
};

#endif