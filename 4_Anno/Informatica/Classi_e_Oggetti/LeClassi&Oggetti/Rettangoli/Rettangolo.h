#ifndef __RETTANGOLO_H_
#define __RETTANGOLO_H_
#include <cmath>
#include <string>

class Rettangolo{
    private:
        //qui vanno messi tutti gli attributi della classe
        int base;
        int altezza;

    public:
        string colore;
        int getAltezza();
        void setAltezza(int a);

        int getBase();
        void setBase(int b);

        int getArea();
        int getPerimetro();
        float etDiagonale();
};



#endif //_RETTANGOLO_H