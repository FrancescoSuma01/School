#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main(){
	
    char fname[256] = ".\\elenco.txt"; //'\0'
    FILE *f_out;
    
    //"r", "w" "a"
    f_out = fopen(fname, "w");
	int errcode = fopen_s(&f_out, fname, "w");
    if (errcode){
	    cout<<"Error opening '"<<fname<<"'!"<<endl;
        return 1;
    }

    //errcode==0 iff OK
    char word[256];
    bool quit = false;
    int counter = 0;

    while (!quit) {
        cout<<"insert a word: ";
        cin>>word;
        
        fputs(word, f_out);  //scrive una stringa
        fputc('\n', f_out);  //scrive un carattere
        //fputc('\t', f_out);
        
        if (++counter >= 3){
            quit = true;
        }
        
    }//wend

    int r = fclose(f_out);
    if(r){
    	cout<<"file not saved"<<endl;
	} else{
		cout<<"file saved"<<endl;
	}
    

    FILE *f_in;
    errcode = fopen_s(&f_in, fname, "r");
    f_in = fopen(fname, "r");
	if (errcode){
	    cout<<"Error opening '"<<fname<<"'!"<<endl;
        return 1;
    }

   	cout<<"Read phase: "<<endl;
    char sentence[256];
    int nwords = 0;
    while(fgets(sentence, 255, f_in) != NULL) {
        cout<<sentence<<"\n";
    }//wend
    cout<<endl;
    fclose(f_in);
    
    cout<<"Bye"<<endl;

    return 0;
}