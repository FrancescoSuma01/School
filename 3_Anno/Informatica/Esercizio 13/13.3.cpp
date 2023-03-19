#include <iostream>
#include <time.h>
using namespace std;

const int rand_max=10;
int nestratto=0;

int main(){
	cout<<"Valore della costante: "<<rand_max<<endl;
	for(int i=0; i<5; i++){
		nestratto=rand()%rand_max;
		cout<<nestratto<<endl;
	}
	//Ho notato che senza srand i valori estratti sono sempre uguali
}

