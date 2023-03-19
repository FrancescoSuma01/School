#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

const int DIM = 30;

using namespace std;

int main(){
    FILE *f = fopen(".\\numeri.txt", "w,");

    if(f){
        int num;

        for (int i = 0; i<30; i++){
            cin>>num;
            fprintf(f, "%d", num);
        }//for
        
        fclose(f);
    }
}