#include <iostream>
using namespace std;

int primo_numero, secondo_numero, terzo_numero, somma;

int main(){
	cout<< "Scrivi tre numeri primi di cui calcolare il doppio della somma";
	cin>>primo_numero;
	cin>>secondo_numero;
    cin>>terzo_numero;
	somma= (primo_numero+secondo_numero+terzo_numero)*2;
	cout<< "La somma e' uguale a ";
	cout<< somma;
}
