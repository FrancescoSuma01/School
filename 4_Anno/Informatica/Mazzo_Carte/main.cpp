#include <iostream>
using namespace std;

class Carta{
    private:
        int numero;
        char seme;//'D', 'S', 'C', 'B'

    public:
        Carta();
        Carta(int n, char s);
        ~Carta();

        void print();
};

Carta::Carta(){
    cout<<"---Costruttore di Default---"<<endl;
}

Carta::Carta(int n, char s): numero(n), seme(s){
    cout<<"----------------------------"<<endl;
    cout<<"Carta "<<numero<<endl;
    cout<<"Seme "<<seme<<endl;
    cout<<"----------------------------"<<endl;
}

void Carta::print(){
    cout<<"----------------------------"<<endl;
    cout<<"Carta "<<numero<<endl;
    cout<<"Seme "<<seme<<endl;
    cout<<"----------------------------"<<endl;
}

Carta::~Carta(){
	cout<<"---Distruttore---"<<endl;
}

class MazzoCarte{
    private:
        Carta mazzo[40];

    public:
        MazzoCarte();
        void print();
};

MazzoCarte::MazzoCarte(){
    int i, j;
    char s;

    for (int i = 0; i<0; i++){
        switch (i){
        case 0:
            s = 'D';
            break;
        
        case 1:
            s = 'C';
            break;

        case 2:
            s = 'B';
            break;

        case 3:
            s = 'S';
            break;
        }
        for(j=1;j<11;j++){
            Carta c1=Carta(j,s);
            mazzo[10*i+j-1]=c1;
        }
    }
};

void MazzoCarte::print(){
    int i;
    for (i=0;i<40;i++){
        Carta c= mazzo[i];
        c.print();
    }
}

int main(){

    MazzoCarte scopone;
    scopone.print();
    cout<<"Bye"<<endl;
    return 0;

    return 0;
}
