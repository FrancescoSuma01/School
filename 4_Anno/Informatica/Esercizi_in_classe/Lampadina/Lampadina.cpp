#include "Lampadina.h"

/* Lampadina::Lampadina(): accesa(false), rotta(false), maxClick(10), numClick(0){
    cout<<"---Chiamata Costruttore di default---"<<endl;
} */

Lampadina::Lampadina(bool work, bool broke, int mc, int nc): accesa(work), rotta(broke), maxClick(mc), numClick(nc){
    cout<<"---Chiamata Costruttore Parametrico---"<<endl;
}

Lampadina::~Lampadina(){
    cout<<"---Chiamata Distruttore---"<<endl;
}

void Lampadina::setMaxClick(int mc){
    maxClick = mc;
}

void Lampadina::toString(){

    if(accesa == true){
        cout<<"La lampadina \212 accesa"<<endl;
    }else if(rotta == true){
        cout<<"La lampadina \212 rotta"<<endl;
    }else{
        cout<<"La lampadina \212 spenta"<<endl;
    }

}

//cambia lo stato della lampadina
void Lampadina::click(){

    if(numClick >= maxClick){
        rotta = true;
    }else{
        numClick++;
    }

}