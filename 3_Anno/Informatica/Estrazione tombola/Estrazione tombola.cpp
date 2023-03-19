#include <iostream>
#include <time.h>
using namespace std;

float numero;
int nestratti=0;

int main(){
	srand(time(NULL));
	while(numero!=5){
		numero=rand()%11;
		cout<<numero<<endl;
		nestratti++;
	}
	cout<<"Sono stati estratti: "<<nestratti;
}
