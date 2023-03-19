#include <iostream>

using namespace std;


int main(){

    int array[5] = {1,2,3,4,5};
    int num = 9;
    double g = 3.156777;  
    
    int* ptr = &num;   //variabile puntatpre ad intero
    double* p1 = &g;   //variabile puntatpre a double

    cout<<"Valore di ptr: "<<ptr<<endl;
    cout<<"Valore di p1: "<<p1<<endl;

    cout<<"Indirizzo di ptr: "<<&ptr<<endl;
    cout<<"Contenuto puntato da ptr: "<<*ptr;
    cout<<"---------------------------------------------"<<endl;

    //punta alla cella 0
    int* pArray = &array[0];
    pArray = array;

    cout<<"Valore di pArray: "<<pArray<<endl;

    cout<<"Indirizzo di ptr: "<<&pArray<<endl;
    cout<<"Contenuto puntato da pArray: "<<*pArray;
    pArray++;
    cout<<"Contenuto puntato da array: "<<*pArray;
    cout<<"---------------------------------------------"<<endl;

    return 0;
}