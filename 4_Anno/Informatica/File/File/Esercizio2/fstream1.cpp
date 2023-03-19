#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main(){

    fstream f;
    f.open("testo.txt", ios::in);
    
    if (f.is_open()){
              
        string line;
        int numlines = 0;
                
        while (!f.eof()){
                
            getline(f, line);
            numlines++;
            cout<<numlines<<") "<<line<<endl;
                
                                
        }//wend
        f.close();
        cout<<"File has "<<numlines<<" lines"<<endl;
        
    } else {
        cout<<"Error on opening file"<<endl;
    }
        
    return 0;
}