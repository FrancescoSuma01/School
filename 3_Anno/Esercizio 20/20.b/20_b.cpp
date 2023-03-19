#include <iostream>
using namespace std;

void calcolo(float importo);


int main(){
    float importo=0;
    cout<<"Questo programma ti calcola lo sconto che riceverai dal nostro supermercato!!"<<endl;
    cout<<"Inserisci l'importo speso: ";
    cin>>importo;
    calcolo(importo);
    
}

void calcolo(float importo){
    float sconto=0, costo=0;
    if(importo<10){
        cout<<"Ci dispiace ma non puoi usufruire dello sconto";
    }else if(importo>10 && importo<60){
        sconto=(importo*8)/100;
        costo=importo-sconto;
        cout<<"Lo sconto di cui potrai usufruire \212 di "<<sconto<<endl;
        cout<<"Dovrai quindi pagare "<<costo;
    }else if(importo>60 && importo<150){
        sconto=(importo*100)/10;
        costo=importo-sconto;
        cout<<"Lo sconto di cui potrai usufruire \212 di "<<sconto<<endl;
        cout<<"Dovrai quindi pagare "<<costo;
    }else if(importo>150 && importo<210){
        sconto=(importo*100)/12;
        costo=importo-sconto;
        cout<<"Lo sconto di cui potrai usufruire \212 di "<<sconto<<endl;
        cout<<"Dovrai quindi pagare "<<costo;
    }else{
        sconto=(importo*100)/14;
        costo=importo-sconto;
        cout<<"Lo sconto di cui potrai usufruire \212 di "<<sconto<<endl;
        cout<<"Dovrai quindi pagare "<<costo;
    }
}