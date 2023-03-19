#include <iostream>
#include <time.h>
using namespace std;

int numeri[10];


int main(){
	srand(time(NULL));
	for(int i=0; i<10; i++){
		numeri[i]=(rand()%11)*2;
		cout<<numeri[i]<<endl;
	}
}
