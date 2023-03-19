//g++ -o f2 f2.cpp -std=c++11


#include <iostream>
#include <fstream>

using namespace std;

void scrivi();
void leggi();

int main(){
    int risposta;

    do {
        cout<<"Inserisci 1 per scrivere, 2 per leggere"<<endl;
        cin>>risposta;

        switch (risposta)
        {
        case 1:
            scrivi();
            break;
        case 2:
            leggi();
            break;
        
        default:
            cout<<"Bye"<<endl;
            break;
        }


    }while ((risposta== 1) || (risposta==2));

    return 0;
}


void scrivi(){
    fstream f;
    f.open(".\\testo.txt", ios::app);
    if (f.is_open()){
        string s;
        cout<<"Inserisci una parola: ";
        cin>>s;
        f<<s<<" ";
        f.close();
    } else {
        cout<<"Error with file"<<endl;
    }
}



void leggi(){
    fstream f;
    f.open(".\\testo.txt", ios::in);
    if (f.is_open()){
        string s;
        while (f>>s){
            cout<<"'"<<s<<"'"<<endl;
        }
        f.close();
    } else {
        cout<<"Error with file"<<endl;
    }  
}