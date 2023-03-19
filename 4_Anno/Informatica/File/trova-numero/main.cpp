/*
@file Suma2.cpp
@date 9-12-2021
@author Francesco Suma 4BIA

@brief Esercizio 2 pag 339 del libro

Scrivi un programma in grado di leggere un file sequenziale contenente una sequenza di numeri interi positivi 
e contare il numero di occorrenze del numero inserito dall’utente all’interno della sequenza.
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main(){
    char fname[256] = ".\\numeri.txt";
    FILE *f_in = fopen(fname, "r");
    int numero = 0, cont = 0;

    cout<<"Enter the number to search for: ";
    cin>>numero;
    cout<<"***************************************"<<endl;

    if (f_in){
        char ch;

        while (!feof(f_in)){                                   //feof = se sono arrivato alla fine del file
            ch = fgetc(f_in);
        
            if(isdigit(ch)){                                    //isdigit rirorna un booleano se il valore è un valore numerico
                if(ch == (char)numero){
                    cont++;
                }
            }
        }
        cout<<"The process was successful"<<endl;
        cout<<"***************************************"<<endl;
        cout<<"The entered number appears "<< cont <<" times"<<endl;

    }else{
        cout<<"Error opening '"<<fname<<"'!"<<endl;
        return 1;
    }
    fclose(f_in);
}