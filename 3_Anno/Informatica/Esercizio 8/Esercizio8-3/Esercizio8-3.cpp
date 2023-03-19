#include <iostream>
using namespace std;

float numero, intervallo;

int main(){
	cout<<"Scrivi dieci numeri"<<endl;
	for(int i=0;i<10;i++){
		cin>>numero;
		if(numero>=0 && numero<=10){
		 intervallo++;	
		}
	}
	cout<<"I numeri appartenenti all'intervallo 0-10 sono: "<<intervallo<<endl;
	system("pause");
}
