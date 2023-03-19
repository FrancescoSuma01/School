#include <iostream>
using namespace std;

int primon, secondon;

int main(){
	cout<< "Scrivi due numeri naturali\n"<<endl;
	cin>>primon;
	cin>>secondon;
if (primon==secondon){
	cout<< "ERRORE!!! Per eseguire questo programma il primo numero deve essere diverso dal secondo"<<endl;
}else if(primon>secondon){
	primon=primon+primon+secondon;
	cout<<primon;
}else{
	secondon=secondon+secondon+primon;
	cout<<secondon;
}
}

