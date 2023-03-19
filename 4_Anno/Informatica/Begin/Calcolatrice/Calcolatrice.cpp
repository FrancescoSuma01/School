#include <iostream>
using namespace std;

int main(){
    double valore_a = 0, valore_b = 0, somma = 0, differenza = 0, prodotto = 0, quoziente = 0;
    char risposta = ' ';
    bool exitt = true;
    string ask = " ";
    cout<<"-------------CALCOLATRICE-------------"<<endl;
    cout<<"Questo programma ti permette di eseguire le 4 operazioni"<<endl;
    while (exitt == true){
        cout<<"Inserisci il primo valore: ";
        cin>>valore_a;
        cout<<"Inserisci il secondo valore: ";
        cin>>valore_b;
        cout<<"Digita : "<<endl;
        cout<<"1 : se vuoi eseguire l'addizione"<<endl;
        cout<<"2 : se vuoi eseguire la sottrazione"<<endl;
        cout<<"3 : se vuoi eseguire la moltiplicazione"<<endl;
        cout<<"4 : se vuoi eseguire la divisione"<<endl;
        cin>>risposta;
        switch (risposta){
            case '+':
                somma = valore_a + valore_b;
                cout<<"La somma dei due valori inseriti da tastiera \212 pari a: "<<somma<<endl;
            break;

            case '-':
                differenza = valore_a - valore_b;
                cout<<"Il risultato della sottrazione dei due valori inseriti da tastiera \212 pari a: "<<differenza<<endl;
            break;

            case '*':
                prodotto = valore_a * valore_b;
                cout<<"Il risultato della moltiplicazione dei due valori inseriti da tastiera \212 pari a: "<<prodotto<<endl;
            break;

            case '/':
                if (valore_b == 0){
                    cout<<"Impossiblie eseguire una divisione per 0"<<endl;
                    cout<<"Inserisci nuovamente il secondo valore: "<<endl;
                    cin>>valore_b;
                }
                quoziente = valore_a / valore_b;
                cout<<"Il risultato della divisione dei due valori inseriti da tastiera \212 pari a: "<<quoziente<<endl;
            break;

            default:
                cout<<"Questo carattere non \212 riconosciuto"<<endl;
            break;
        }
        cout<<"Vuoi eseguire nuovamente il programma? si/no"<<endl;
        cin>>ask;
        if(ask == "si"){
            exitt == true;
        }else if (ask == "no"){
            exitt == false;
            cout<<"Grazie di aver eseguito il programma";
        }
    }
}