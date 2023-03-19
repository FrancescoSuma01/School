#include <iostream>
#include "utility.h"

using namespace std;

int main(int argc, char** argv){

    int a = 0, b = 0, c = 0;

    cout<<"inserisci a: ";
    cin>>a;

    cout<<"inserisci b: ";
    cin>>b;

    cout<<"inserisci c: ";
    cin>>c;

    int massimo = max(a,b,c);

    cout<<"Il valore massimo \212: "<<massimo;
    return 0;
}