#include <iostream>
using namespace std;

int N;
float voto, somma_voti, media;

int main(){
	cout<<"Scrivi il numero di voti"<<endl;
	cin>>N;
	cout<<"Scrivi i tuoi voti"<<endl;
	for(int i=0;i=N;i++){
		cin>>voto;
		somma_voti=somma_voti+voto;
	}
	media=somma_voti/N;
	cout<<"La media dei voti \212: "<<media;
}
