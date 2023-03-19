/*
    @author Francesco SUMA
    @4^BIA
    @esercizio 5 : le stringhe C
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void scriviFile(){
	ofstream myFile;
	
	myFile.open("miofile.txt");
	
	//bool res = myFile.is_open();
	
	if (myFile.is_open()){
		
		cout<<"File creato"<<endl;
		
		myFile<<"Ciao sono la signora"<<" Lina"<<endl;
		myFile<<"Adesso ti dico";
		myFile<<" La brace accesa";
		
		myFile.close();
		
	} else {
		cout <<"Errore creazione file"<<endl;
	}
}


int main(){
	
	ifstream f2;
	
	scriviFile();
    f2.open("miofile.txt");
	if (f2.is_open()){
		cout<< "File aperto in lettura "<<endl;
		
		string s;
		f2>>s;
		cout<<"La prima parola = "<<s<<endl;
		
		while( !f2.eof()) {
			f2>>s;
			cout<<"'"<<s<<"'"<<endl;
		}
		
		f2.close();
		
	} else{
		cout<<"ERRORE: apertura file "<<endl;
	}
	
	return 0;
}