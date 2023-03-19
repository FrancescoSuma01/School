// MCD
#include <iostream>
#include <string>

using namespace std;

int MCD(int num1, int num2){
    int resto = 0;                      //Variabile temporanea
    
    resto = num1 % num2;                //passo di avvicinamento
    if (resto == 0){                    //condizione di uscita
        return num2;                    //caso base
    }else{
        return MCD(num2, resto);        //chiamata ricorsiva
    }
}

int main(){
    int num1 = 0, num2 = 0, a = 0;      //a è una variabile d'appoggio

    cout<<"Inserisci il primo numero: ";
    cin>>num1;                          //legge il primo numero
    cout<<"Inserisci il secondo numero: ";
    cin>>num2;                          //legge il secondo numero
    /*if (num1<num2){
        a = num2;
        num2 = num1;
        num1 = a;
    }*/
    cout<<"Il MCD tra i numeri "<<num1<<" e "<<num2<<" \212: "<<MCD(num1, num2)<<endl;

    system("PAUSE");
}