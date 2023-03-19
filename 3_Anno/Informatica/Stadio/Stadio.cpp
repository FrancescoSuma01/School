#include <iostream>
using namespace std;

float eta, costob, costoc, costotot;
string acqucibo;
int cibodaacquistare, ncibo;

int main(){
	cout<< "Quanti anni hai?\n\n";
	cin>> eta;
	if (eta<10){
		costob=0;
	} else if (eta>65){
	    costob=0;
	}else if (eta<18) {
		costob=5;
	} else {
		costob=10;
	}
    cout<< "Desidera acquistare del cibo? \n\n";
    cin>> acqucibo;
    if (acqucibo=="si"){
      cout<< "\n\n Digita: \n";
      cout<< "1 se vuole acquistare un panino \n";
      cout<< "2 se vuole acquistare una bibita \n";
      cout<< "3 se vuole acquistare entrambi \n";
      cin>> cibodaacquistare;}
    if (cibodaacquistare=1){
    	cout<<"\n Quanti panini vuole acquistare? \n";
    	cin>>ncibo;
     	costoc=5*ncibo;
	} else if (cibodaacquistare=2){
			cout<<"\n Quante bibite vuole acquistare? \n";
			cin>>ncibo;
     	costoc=3*ncibo;
	}else{
		cout<<"\n Quanti panini e bibite vuole acquistare? \n";
		cin>>ncibo;
		costoc=8*ncibo;
	}
	costotot= costoc+costob;
	cout<< "Il costo totale e' "<< costotot;
    if (acqucibo=="no"){
    cout<< "Il costo del biglietto e' "<< costob << " euro";
    } 

	}
