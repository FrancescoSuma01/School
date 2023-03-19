// Funzioni Ricorsive
#include <iostream>
#include <string>


using namespace std;


int fattoriale(int n){
    if (n == 0){
        cout<<"Caso base: num "<<n<<endl;
        return 1;
    }
    cout<<"F ("<<n<<")"<<endl;
    int p = n*fattoriale(n-1);
    cout<<"F("<<n<<"), p = "<<p<<endl;
    return p;
    //return num*fattoriale(num-1);
}


int main() {
    cout << "Dimmi numero: ";
    int n;
    cin>>n;

    int res = fattoriale(n);
    cout<<"RES = "<< res <<endl;
    
    return 0;
    system("PAUSE");
}