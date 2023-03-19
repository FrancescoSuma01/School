#include <iostream>
using namespace std;




int max(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int a = 0, b = 0, res = 0;
    res = max(a, b);
}