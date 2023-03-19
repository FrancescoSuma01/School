#include <iostream>


using namespace std;

class Lampadina{
    private:
        static int numLampadine;
        bool accesa;
        bool rotta;
        int maxClick;
        int numClick;
    
    public:
        Lampadina();
        Lampadina(int setClicks);

        void click();
        void toPrint();

        static int getLampadine

}

int Lampadina::numLampadine = 0;

//costruttore di default
Lampadina::Lampadina(): accesa(false), rotta(false), maxClick(10), numClick(0){
    cout<<"Lampadina setup"<<endl;
    numLampadine++;
}

Lampadina::Lampadina(int setClicks): accesa(false), rotta(false), maxClick(setClicks), numClick(0){
    cout<<"Lampadina setup"<<endl;
}

void Lampadina::click(){
    if(!rotta && accesa){
        accesa = false;
        numClick++;

        if (numClick >= maxClick){
            rotta = true;
        }
    }else if(!rotta && !accesa){
            
    }else{
        cout<<"fulminata"<<endl;
    }
}


void Lampadina::toPrint(){
    cout<<"Lampadina accesa?"<<boolalpha<<accesa<<endl;
    cout<<"Lampadina rotta?"<<boolalpha<<rotta<<endl;
}



int main(){

    Lampadina lamp1; //costruttore di default
    Lampadina lamp2(20); //costruttore parametrico


    for (int i = 0; i<10; i++){
        lamp1.click();
        lamp2.click();

        lamp1.toPrint();
        lamp2.toprint();
    }

    return 0;
}