#include <iostream>
#include <time.h>
using namespace std;

int numero;
int pari, dispari;

int main(){
	srand(time(NULL));
	for(int i=1; i<=10; i++){
		numero=rand()%101;
	    if(numero%2==0){
	    	pari++;
		}else{
			dispari++;
		}
		cout<<numero<<endl;
	}
	cout<<"I numeri pari sono: "<<pari<<endl;
	cout<<"I numeri dispari sono: "<<dispari;
}
