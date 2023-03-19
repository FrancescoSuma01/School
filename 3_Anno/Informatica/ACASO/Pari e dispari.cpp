#include <iostream>
using namespace std;

int numero, pari, dispari;

int main(){
	cout<<"Scrivi 10 numeri"<<endl;
    for (int i=0;i<10;i++){
	   cin>>numero;
	   if (numero%2==0){
	   pari++;
	   } else{
	   	dispari++;
	   }
	}
	cout<<"I numeri pari sono "<<pari<<" I numri dispari sono "<<dispari;
	system ("pause");
}
