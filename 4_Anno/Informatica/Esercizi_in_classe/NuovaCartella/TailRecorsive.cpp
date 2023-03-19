#include <iostream>
using namespace std;

int Tfattoriale(int num, int acc){
    if (num == 0){
        cout<<"Caso base: num "<<num<<endl;
        return 1;
    }
    cout<<"F("<<num<<"), accumulator: "<<acc<<endl;
    int p = acc * num;
    cout<<"p = "<<p<<endl;
   
    return Tfattoriale(num-1,p);
}

int main() {
  cout << "Dimmi numero: ";
  int n;
  cin>>n;
    
    int p =1;
    int res = Tfattoriale(n, p);
    cout<<"RES = "<< res <<endl;
    
    return 0;
    system("PAUSE");
}