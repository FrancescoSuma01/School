#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a = 0, b = 0, c = 0;
    float radice = 0.0;
    double x1 = 0.0, x2 = 0.0;
    cout<<"Inserisci il coefficente di x^2: ";
    cin>>a;
    cout<<"Inserisci il valore di x: ";
    cin>>b;
    cout<<"Inserisci il valore noto: ";
    cin>>c;
    radice = sqrt(pow(b,2)-4*(a*c));
    if(radice>0){
        x1 = (-b - radice)/(2*a);
        cout<<"Il risultato di x1 \212: "<<x1<<endl;
        x2 = (-b + radice)/(2*a);
        cout<<"Il risultato di x2 \212: "<<x2<<endl;
    }else{
        cout<<"Il risultato della x \212: qualsiasi x appartenente ad R"<<endl;
    }

    return 0;
    system("PAUSE");
}