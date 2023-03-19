#include <iostream>
using namespace std;

int numero;
int zero=0;

int main(){
cout<<"Scrivi 5 numeri"<<endl;	
	for(int i=0; i<5; i++){
        cin>>numero; 
        if (numero==0){
            zero++;	
	    }
}
	cout<<"Hai scritto "<<zero<< " zero";
}
