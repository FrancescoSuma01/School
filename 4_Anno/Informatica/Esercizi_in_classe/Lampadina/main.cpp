#include "Lampadina.h"


int main(){

    int on;
    bool accesa; //salva lo stato della Lampadina
    bool rotta;
    int mClick;
    int nClick;        

    while(true){
        cout<<"----Configurazione della lampadina----"<<endl;
        do{
            cout<<"Inserisci 1 se la lampadina \212 accesa, 2 se \212 spenta: ";
            cin>>on;
            if (on == 1){
                accesa = true;
            }else if(on == 2){
                accesa = false;
            }
        }while(on!=1 && on!=2);
    }

    Lampadina l1(accesa, rotta, mClick, nClick);

    return 0;
}