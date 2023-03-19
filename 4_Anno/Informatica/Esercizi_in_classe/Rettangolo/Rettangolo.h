#ifndef _RETTANGOLO_H_
#define _RETTANGOLO_H_

#include <cmath>
#include <string>



class Rettangolo {
	
	private:
		int base;
		int altezza;
		
		
	public:
		std::string colore;
		
		Rettangolo();
		Rettangolo(int b, int h);
		
		~Rettangolo();
		
		
		int getAltezza();
		void setAltezza(int a);
		
		int getBase();
		void setBase(int b);
		
		int getArea();
		int getPerimetro();
		
		int getDiagonale();
		
		bool isSquare();
		
		//funzione amica, cioe puo accedere alla parte private della classe
		friend Rettangolo somma(Rettangolo a, Rettangolo b);
};



#endif //_RETTANGOLO_H
