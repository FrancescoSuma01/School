#include <iostream>
using namespace std;

int main(){
    int n;
    do{
        cout<<"Quanti amici vuoi caricare? ";
        cin>>n;
        
    }while (n!=1 && n!=2);
    cout<<"La n \212 "<<n;
}


/*if (fa.is_open()){
        cout << "Aperto"<<endl;
        do{
            cout<<"Quanti amici vuoi caricare? ";
            cin>>n;
        }while (!(n<100 && n>=0));

        for (int i = 0; i < n; i++){
            cout<<"Inserisci il cognome: ";
            cin>>amici[i].cognome;
            cout<<"Inserisci il nome: ";
            cin>>amici[i].nome;
            cout<<"Inserisci M se \212 uomo D se \212 donna: ";
            cin>>amici[i].sesso;
            cout<<"Inserisci l'anno di nascita: ";
            cin>>amici[i].annoNascita;
            f>>amici[i].cognome>>"  ">>amici[i].nome>>"  ">>amici[i].sesso>>"  ">>amici[i].annoNascita;
        }
        fa.close();
    }else{
        cout<<"ERRORE! Non \212 stato possibile aprire il file"<<endl;
    }
*/