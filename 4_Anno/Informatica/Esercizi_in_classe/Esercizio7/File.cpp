#include <iostream>
#include <string>


#include <stdio.h>
#include <ctype.h>




using namespace std;


int main(){
//'\0'
    char fname[256] = ".\\nomi.txt";
    FILE *f_out;
    
    //int errcode = fopen_s(&f_out, fname, "w");
    
    f_out = fopen(fname, "w");
    if (f_out==NULL){
        cout<<"Error opening '"<<fname<<"'!"<<endl;
        return 1;
    } 

    //errcode==0 iff OK
    char c;
    bool quit = false;
    while (!quit) {
        cout<<"insert a char: ";
        cin>>c;

        if (isalpha(c) || isdigit(c)){
            fputc(c, f_out);
            fputc(',', f_out);
        } else {
            quit = true;
        }

    }//wend
    
    int r = fclose(f_out);

    if(r){
        cout<<"file not saved"<<endl;
    } else {
        cout<<"file saved"<<endl;
    }
    
    FILE *f_in = fopen(fname, "r");
    
    //errcode = fopen_s(&f_in, fname, "r");
    //if (errcode){
    
    if (f_in == NULL){
        cout<<"Error opening '"<<fname<<"'!"<<endl;
        return 1;
    }

    char ch;
    string sentence = "";
    int pos = 0;
    int nchar = 0, ndigit=0;

    while( !feof(f_in)) {
        ch = fgetc(f_in);

        if (isalpha(ch)){
            nchar++;
            
            if (islower(ch)){
            ch = toupper(ch); 
            }else{        
                if (isupper(ch)){
                    ch = tolower(ch);
                }   
            }
        }

        if(isdigit(ch)){
            ndigit++;
        }

        cout<<ch<<"\t";

        sentence.insert(pos, 1, ch);
        ++pos;
    }//wend

    cout<<endl;
    fclose(f_in);
    cout<<"Resulting string: "<<sentence<<endl;
    cout<<"with "<<nchar<<" characters and "<<ndigit<<" numbers."<<endl;

    cout<<"Bye"<<endl;

    return 0;
}