#include <iostream>
#include <string>

//T=playsolver
template<typename T>
T max(T param1, T  param2){
    //separazione di logica ed esecuzione del in codice in base al tipo di dati

    std::cout<<"inside template function"<<std::endl;

    if(param1>param2){
        return param1;
    }

    return param2;
    
}

/*
int max(int a, int b){
    
    if (a>b){
        return a;
    }

    return b;
}

char max(char a, char b){
    
    if (a>b){
        return a;
    }

    return b;
}
*/


int main(){

    std::cout<<"max tra 'a' e 'A'"<<max('a', 'A')<<std::endl;
    std::cout<<"max tra 123 e 456"<<max(123, 456)<<std::endl;

    return 0;
}