//g++ -o Prova main.cpp utility.cpp -I. -std=c++11
#include <iostream>
#include <string>
#include "utility.h"

using namespace std;

int main(int argc, char** argv){
    
    float num1 = 0.0, num2 = 0.0, risultato = 0.0;
    int scelta = 0, stampa = 0;
    bool exitt = true, uscita = true;
    string risposta = " ";

    while(exitt){
        cout<<"Inserisci il primo numero: ";
        cin>>num1;
        cout<<"Inserisci il secondo numero: ";
        cin>>num2;
        cout<<"----------------------------------------"<<endl;
        cout<<"Inserisci "<<endl;
        cout<<"1 per fare la somma"<<endl;
        cout<<"2 per fare la differenza"<<endl;
        cout<<"3 per fare il prodotto"<<endl;
        cout<<"4 per fare la divisione"<<endl;
        cin>>scelta;
        switch (scelta){
        case 1:
            risultato = somma(num1, num2);
        
        break;

        case 2:
            risultato = differenza(num1, num2);
        
        break;

        case 3:
            risultato = prodotto(num1, num2);
        
        break;

        case 4:
            if (num2 == 0){
                cout<<"----------------------------------------"<<endl;
                cout<<"Impossibile dividere per 0"<<endl;
                while(uscita){
                    do{
                        cout<<"Vuoi inserire un nuovo valore? si/no ";
                        cin>>risposta;
                        if (risposta == "si"){
                            cout<<"Inserisci il secondo valore: ";
                            cin>>num2;
                            risultato = quoziente(num1, num2);
                            uscita = false;
                        }else if(risposta == "no"){
                            uscita = false;
                        }
                    }while (risposta!="si" && risposta!="no");
                }
            }else{
                risultato = quoziente(num1, num2);     
            }
        
        break;

        default:
            cout<<"----------------------------------------"<<endl;
            cout<<"Questo valore non \212 riconosciuto"<<endl;
            stampa = 1;
            break; 
        }
        
        if (stampa == 0){
            cout<<"----------------------------------------"<<endl;
            cout<<"Il risultato \212: "<<risultato<<endl;
            cout<<"----------------------------------------"<<endl;
        }

        do{
            cout<<"Vuoi eseguire nuovamente il programma? si/no ";
            cin>>risposta;
            if (risposta == "si"){
                exitt = true;
                cout<<"----------------------------------------"<<endl;
            }else if(risposta == "no"){
                exitt = false;
            }
        }while (risposta!="si" && risposta!="no");
    }
    cout<<"Grazie di aver eseguito il programma!";
    return 0;
}