#include <iostream>
#include "Utility.h"

using namespace std;


int main(int argc, char** argv) {
	
	cout<<"Hello word!"<<endl;

	int a,b,c;
	cout<<"Inserisci a ";
	cin>>a;
	
	cout<<"Inserisci b ";
	cin>>b;
	
	cout<<"Inserisci c ";
	cin>>c;
	
	int maximum = max(a,b,c);
	cout<<"MAX = "<<maximum<<endl;


	float fa,fb,fc;
	cout<<"Inserisci a ";
	cin>>fa;
	
	cout<<"Inserisci b ";
	cin>>fb;
	
	cout<<"Inserisci c ";
	cin>>fc;

	cout<<"fmax = "<<max(fa, fb,fc)<<endl;


	return 0;
}