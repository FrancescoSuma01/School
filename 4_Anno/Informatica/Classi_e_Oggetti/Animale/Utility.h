#ifndef __UTILITY_H_
#define __UYILITY_H_

#include <iostream>
#include <string>
using namespace std;


class animale{

    private:
        int age;
        string nome;

    public:
        void Assegna(int age, string nome);
        void print();
};

class Gatto: public Animale{
    private:
        bool peloLungo;    
    public: 
        void Assegna(int age, string nome, bool flag);
        void Miagola();
};

void Animale::Assegna(int age, string nome){
    //l'oggetto istanziato punta all'oggetto
    this->age = age;
    this->nome = nome;
}

void Animale::print(){
    cout<<"[Animale] nome: "<<nome<<", age: "<<age<<endl;

}

void Gatto::Assegna(int age, string nome){
    Animale::Assegna(age, nome);
    peloLungo = flag;
}

#endif