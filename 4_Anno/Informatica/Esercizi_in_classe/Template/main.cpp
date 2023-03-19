#include "Pila.h"


int main(){

    {
        Pila<int> p(3);//dalla classe pila deve essere generata una pila per gestire gli interi 3 è la capacità
        int a=5;
        p.push(a);
        a++;
        p.push(a);
        a++;
        p.push(a);
        a++;

        cout<<p.pop()<<endl;
    }

    cout<<"Fine";

    return 0;
}