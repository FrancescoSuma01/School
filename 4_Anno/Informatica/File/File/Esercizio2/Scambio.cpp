#include <iostream>
using namespace std;

int main (){
    int x;
    int y;

    cout<<("\nInserisci x: ");
    cin>>x;
   
    cout<<("Inserisci y: ");
    cin>>y;
   
    x = x+y;
    y = x-y;
    x = x-y;
  
    cout<<"Il valore di x \212: "<< x <<endl;
    cout<<"Il valore di y \212: "<< y <<endl;
    
    return 0;
}