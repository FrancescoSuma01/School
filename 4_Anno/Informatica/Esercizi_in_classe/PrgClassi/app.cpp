//g++ -o Prova app.cpp Frazione.cpp -I. -std=c++11 
#include "Frazione.h"

int main() {
	
	{
		int a = 5;
		Frazione left(2,3);
		Frazione right(3,2);
		
		//Frazione s = left.operator+(right);
		
		Frazione s = left + right;
		
		left.print();
		std::cout<<" + "<<std::endl;
		right.print();
		std::cout<<" = "<<std::endl;
		
		s.print();	
	}
	
	
	
	return 0;
}
