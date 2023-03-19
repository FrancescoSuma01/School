#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include <iostream>
using namespace std;

class Complex{
	
	private:
		
		private:
			float re;
			float im;
			
		public:
			Complex();
			Complex(float a, float b);
		    ~Complex();
		    
		    //funzione di tipo inline(il codice viene implementato subito dopo la dichiarazione) nella compilazione viene eseguito direttamente il codice
		    float getRe(float e){
		    	return re;
			}
			
		    void setRe(float f){
		    	re = f;
			}
			
			float getIm(float e){
		    	return im;
			}
			
		    void setIm(float f){
		    	im = f;
			}
			
			friend const Complex operator+(const Complex& left, const Complex& right);

			void print();
			
	public: 
	
	
};

#endif
