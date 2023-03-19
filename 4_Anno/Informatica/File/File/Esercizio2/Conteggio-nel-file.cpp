#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
    fstream f;  
    f.open("TextFile.txt", ios::in);
        
    if (f.is_open()) {
    
        string token;
        int nlines = 0, nchars = 0, nwords = 0, nspaces = 0;
        int pos = -1;

        while (! f.eof()) { 
            
            //get a sequence of chars until a blank space is met or the end of file
            getline(f, token, ' ');

            //last word may not include spaces
            if (!f.eof()){
                nspaces++;
            }

            pos = token.find("\n");
            if (pos != string::npos) {
                //there is a \n between characters
                nlines++;
                //nspaces++; //count also \n as a blank

                string wordA = token.substr(0, pos);
                string wordB = token.substr(pos+1);
                nchars += (wordA.size() + wordB.size());
                
                cout<<"'"<<wordA<<"'"<<endl;
                cout<<"'"<<wordB<<"'"<<endl;

                if (wordA.size()>0){
                    nwords+=1;
                }

                if (wordB.size()>0){
                    nwords+=1;
                } 
                
            } else {
                //no \n in token
                if (token.size()>0){
                    nwords+=1;
                }
                nchars+=token.size();
                cout<<"'"<<token<<"'"<<endl;
            }//fi

            cout<<"Lines\t \t"<<nlines<<endl;
            cout<<"Words\t \t"<<nwords<<endl;
            cout<<"Chars\t \t"<<nchars<<endl;
            cout<<"Blanks\t \t"<<nspaces<<endl;
        }//wend
        nlines++; //last word is on a line

        f.close();
        cout<<"*****************************"<<endl;
        cout<<"Lines\t \t"<<nlines<<endl;
        cout<<"Words\t \t"<<nwords<<endl;
        cout<<"Chars\t \t"<<nchars<<endl;
        cout<<"Blanks\t \t"<<nspaces<<endl;   
        cout<<"*****************************"<<endl;
    }
    else 
    {
        cout<<"Errore apertura file"<<endl;   
    }//fi f

 return 0;
}