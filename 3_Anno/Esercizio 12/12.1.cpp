#include <iostream>
#include <time.h>
using namespace std;

float numero=0, nestratto=0, multipli=0;

int main(){
	do{
		cout<<"Inserisci un numero positivo: "<<endl;
		cin>>numero;
	}while(numero<=0);
	srand(time(NULL));
	for(int i=0; i<10; i++){
		nestratto=rand()%11;
		cout<<nestratto<<endl;
		if(int(nestratto)%3==0){
			multipli++;
		}	
	}
	cout<<"Sono stati estratti "<<multipli<<" numeri multipli di 3"<<endl;
	system("pause");
}
