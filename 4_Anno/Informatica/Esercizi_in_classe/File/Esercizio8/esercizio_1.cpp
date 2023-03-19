/*
*
*    @esercizio: pag 339 n1
*    @author: francesco suma
*    @classe: 4BIA
*
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;


int main(){
    char fname[256] = ".\\nomi.txt";                        //fname = nome file
    char fname2[256] = ".\\nomi2.txt";
    FILE *f_in = fopen(fname, "r");                         //puntatori a file
    FILE *f_out = fopen(fname2, "w");                       //puntatori a file
    
	if (f_in && f_out){
        char ch;

        while (!feof(f_in)){                                   //feof = se sono arrivato alla fine del file
            ch = fgetc(f_in);
        
            if(isalpha(ch)){                                    //isalpha tirorna un booleano 
                ch = toupper(ch);
            }
            fputc(ch, f_out);
        }
        cout<<"The process was successful"<<endl;

    }else{
        cout<<"Error opening '"<<fname<<"'!"<<endl;
        return 1;
    }
    fclose(f_in);
    fclose(f_out);
}