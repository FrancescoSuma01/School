#include <iostream>

using namespace std;


//Circle = nome della classe
class Circle{

    //attributi privati quindi visibili solo nella classe
    private:
        float radius;

    //metodi pubblici
    public:
        void setRadius(float r);    //legge il raggio
        float getRadius();          //stampa il raggio

        float getPerimeter();       //calcola e stampa il perimetro
        float getArea();            //calcola e stampa l'area

};

//metodo pubblico della classe Circle
void Circle::setRadius(float r){
    radius = r;
}

float Circle::getRadius(){
    return radius;
}

float Circle::getPerimeter(){
    return 6.28*radius;
}

float Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    
    Circle c1;    //oggetto della classe Circle

    c1.setRadius(10.0);
    cout<<"Cerchio di raggio "<<c1.getRadius()<<endl;
    cout<<"\t perimetro "<<c1.getPerimeter()<<endl;
    cout<<"\t area "<<c1.getArea()<<endl;

    return 0;
}