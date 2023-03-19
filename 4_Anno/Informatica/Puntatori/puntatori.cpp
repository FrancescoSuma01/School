/*
*    @file puntatori
*
*    @author francesco suma
*
*    @classe 4bia
*/

#include <iostream>
using namespace std;


int main(){
    int a = 8;
    float b = 10.8;
    int c = 5;
   
    int *pa = NULL;
    pa = &a;
    float *pb = NULL;
    pb = &b;
    int *pc = NULL;
    pc = &c;

    cout<<"a: "<<a<<endl;
    cout<<"pa: "<<pa<<endl;             //stampa la posizione di a
    cout<<"p punta a "<<(*pa)<<endl;    //stampa il contenuro di a
    *pa = (*pa) + 3;                    //modifica il contenuto della variabile puntata

    cout<<"b: "<<b<<endl;           
    cout<<"pb: "<<pb<<endl;             //stampa la posizione di b
    cout<<"pb punta b "<<(*pb)<<endl;   //stampa il contenuro di b (deferenziamento)
    
    cout<<"c: "<<c<<endl;
    cout<<"pc: "<<pc<<endl;             //stampa la posizione di c
    cout<<"p punta c "<<(*pc)<<endl;    //stampa il contenuro di c
}