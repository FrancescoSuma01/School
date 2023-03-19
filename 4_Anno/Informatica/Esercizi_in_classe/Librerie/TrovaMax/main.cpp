//g++ -o Prova main.cpp utility.cpp -I. -std=c++11
#include <iostream>
#include "utility.h"

using namespace std;

int main(int argc, char** argv){

    float a = 5, b = 7;

    float areaQ = area(a);
    float areaR = area(a,b);
    float areaC = area(a, 3.14);

    cout<<"Area quadrato: "<<areaR<<endl;
    cout<<"Area rettangolo: "<<areaR<<endl;
    cout<<"Ar: "<<areaC<<endl;

    return 0;
}