#include <iostream>
using namespace std;

int num_1=0, num_2=0, num_3=0;
int pic=0, mag=0;
int minimo(int num_1, int num_2, int num_3);
int massimo(int num_1, int num_2, int num_3);

int main(){
	cout<<"Inserisci un numero: ";
	cin>>num_1;
	cout<<"Inserisci un numero: ";
	cin>>num_2;
	cout<<"Inserisci un numero: ";
	cin>>num_3;
	pic=minimo(num_1, num_2, num_3);
	mag=massimo(num_1, num_2, num_3);
	cout<<"Il numero minimo \212: "<<pic<<endl;
	cout<<"Il numero massimo \212: "<<mag;
}

int minimo(int num_1, int num_2, int num_3){
	if(num_1<num_2 && num_1<num_3){
		pic=num_1;
	}else if(num_2<num_1 && num_2<num_3){
		pic=num_2;
	}else if(num_3<num_1 && num_3<num_2){
		pic=num_3;
	}
}

int massimo(int num_1, int num_2, int num_3){
	if(num_1>num_2 && num_1>num_3){
		mag=num_1;
	}else if(num_2>num_1 && num_2>num_3){
		mag=num_2;
	}else if(num_3>num_1 && num_3>num_2){
		mag=num_3;
	}
}
