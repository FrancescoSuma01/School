#include <iostream>
#include <time.h>
using namespace std;

int numeri[20];
float pari=0;
int a=0;
float media=0;

int main(){
	srand(time(NULL));
	for(int i=0; i<20; i++){
		numeri[i]=rand()%11;
		if(numeri[i]%2==0){
			pari=pari+numeri[i];
			a++;
		}
	}
	for(int b=0; b<20; b++){
		cout<<numeri[b]<<endl;
	}
	media=pari/a;
	cout<<"La media dei numeri \212: "<<media;
}
