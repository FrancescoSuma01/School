#include <iostream>
using namespace std;

const int n=4;
void complemento_1(int numbin[n], int n);
void complemento_2(int numbin[n], int n);

int main(){
	int numbin[n];
	int risposta=0, a=0;
	bool esci=true;
	string ans=" ";
	while(esci=esci){
	cout<<"Questo programma fa il complemento a uno e complemento a due di un numero binario inserito da tastiera"<<endl;
	for(int i=0; i<n; i++){
		a=i+1;
		cout<<"Inserisci il "<<a<<" bit a partire da sinistra: ";
		cin>>numbin[i];
		if(numbin[i]!=0 && numbin[i]!=1){
			while(numbin[i]!=0 && numbin[i]!=1){
				cout<<"ERORRE!!! devi inserire un valore tra 0 e 1"<<endl;
				cout<<"Inserisci il "<<a<<" bit a partire da sinistra: ";
				cin>>numbin[i];
			}
		}
	}
	cout<<"Che complemento vuoi che venga eseguito(digita 1 se vuoi fare il complemento a 1, 2 se vuoi fare complemnto a 2"<<endl;
	cin>>risposta;
	switch(risposta){
		case 1:
			complemento_1(numbin, n);
		break;
		
		case 2:
			complemento_2(numbin, n);
		break;
	}
	cout<<"\n\n Vuoi eseguire nuovamente il programma?"<<endl;
		cin>>ans;
		if(ans=="si"){
    		esci=esci;
		}else if(ans=="no"){
			esci=!esci;
		}else if (ans!="si" && ans!="no"){
			while(ans!="si" && ans!="no"){
				cout<<"Vuoi eseguire nuovamente il programma?"<<endl;
	    		cin>>ans;
	    		if (ans=="si"){
					esci=esci;
				} else if(ans=="no"){
					esci=!esci;
					cout<<"Grazie di aver eseguito il programma";
				}
			}
    	}
	}
}

void complemento_1(int numbin[], int n){
	for(int i=0; i<n; i++){
		if(numbin[i]==1){
			numbin[i]=0;
		}else{
			numbin[i]=1;
		}
	}
	cout<<"Il numero binario inserito con complemento a 1 \212"<<endl;
	for(int i=0; i<n; i++){
		cout<<numbin[i];
	}
}

void complemento_2(int numbin[], int n){
	bool uscita=true;
	int i=n;
	while(uscita=uscita || i>0){
		if(numbin[i]==1){
			while(i>=0){
				i--;
				if(numbin[i]==1){
					numbin[i]=0;
				}else{
					numbin[i]=1;
				}
			}
			uscita=false;
		}else{
			i--;
		}
	}
	cout<<"Il numero binario inserito con complemento a 2 \212"<<endl;
	for(int c=0; c<n; c++){
		cout<<numbin[c];	
	}
}
