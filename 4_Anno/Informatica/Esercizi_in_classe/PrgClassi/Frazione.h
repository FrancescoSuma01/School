#ifndef __FRAZIONE_H__
#define __FRAZIONE_H__


#include <iostream>
	
class Frazione {
		
    private:
        int num;
        int den;
			
        void normalize();	
			
    public:

		Frazione(int n, int d);
        Frazione(const Frazione& f);    //copy constructor

        ~Frazione();                    //distruttore
        
			
        void setNum(int n);             //setter
        int getNum();                   //getter
			
        void setDen(int d);             //setter
        int getDen();	                //getter
        
        void print();                   //toString() method		

        //overload operator function
        const Frazione operator+(const Frazione &right);
//        const Frazione operator +(const int right);
//        const Frazione operator +(const double right);


        //friend functions
        //friend const Frazione operator +(const Frazione& left, const Frazione& right);
        friend const Frazione operator +(const float val, const Frazione& right);
        friend const Frazione operator +(const int rightValue);
        friend const Frazione operator +(const int val, const Frazione& right)

};


#endif
