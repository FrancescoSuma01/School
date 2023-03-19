#include <iostream>
using namespace std;

int numero;

int main(){
	for (int i=0;i<=100;i++){
		cout<<numero<<endl;
		numero++;
	}
	numero=500;
	for (int i=500;i<=1000;i++){
		cout<<numero<<endl;
		numero++;
	}
	numero=0;
	for (int i=0;i<=100;i++){
		if(numero%2==0){
		cout<<numero<<endl;
		}
	}
	for (int i=0;i<=1000;i++){
		if(numero%5==0){
		cout<<numero<<endl;
		}
	}
	system("pause");
}
