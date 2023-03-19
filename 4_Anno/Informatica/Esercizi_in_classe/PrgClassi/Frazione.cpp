#include "Frazione.h"

using namespace std;

void Frazione::normalize() {
    
    if (num!=0){
        int x=(num>0)?num:-num;
        int y=(den>0)?den:-den;

        int r;
        
        while (y > 0){
            r = x % y;
            x = y;
            y = r;
        }

        num/=x;
        den/=x;
        
    }//fi
}



Frazione::Frazione(int n, int d): num(n), den(d) {
    if (den==0){
    	den=1;
	}
	
	if (den<0 && num!=0){
        den *= (-1);
        num*=(-1);
    }
    std::cout<<"\t invoked param constructor "<<num<<", "<<den<<std::endl;
    normalize();
}



Frazione::Frazione(const Frazione& f): num(f.num), den(f.den) {
    std::cout<<"\t invoked copy constructor "<<num<<", "<<den<<std::endl;
}



Frazione::~Frazione() {    
    std::cout<<"\t distruttore "<<num<<"/"<<den<<std::endl;
}   


int Frazione::getDen(){
    return den;        
}


int Frazione::getNum(){
    return num;        
}


void Frazione::setNum(int n){
    num = n;
    if (den<0 && num!=0){
        den*=-1;
        num*=-1;
    }
    normalize();    
}             

void Frazione::setDen(int d){
    if (d!=0){
        den = d;
        if (den<0 && num!=0){
            den*=-1;
            num*=-1;
        }
        normalize();
    }
    else{
        std::cout<<"Forbidden operation"<<std::endl;
    }
}      



	        
void Frazione::print(){
    std::cout<<num<<"/"<<den<<std::endl;      
}


//operator overload: class methods
const Frazione Frazione::operator+(const Frazione &right){
    //a/b + c/d = (ad + cb)/bd

    Frazione f(num*right.den + right.num*den, den*right.den);
    return f;
}

const Frazione Frazione::operator+(const int rightValue){
    Frazione f (num +den*rightValue, den);
    return f;
}

const Frazione Frazione::operator+(const int val, const Frazione& right){
    
    Frazione f (right.num + right.den*rightValue, den);
    return f;

}