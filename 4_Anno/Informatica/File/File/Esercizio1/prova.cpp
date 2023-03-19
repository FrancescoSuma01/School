#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>




using namespace std;


typedef struct {
    string name;
    float reale;
    int num;
} P;




int main() {
    
    int N=4;
    
    P a[N];
    
    a[0].name = "AA";
    a[0].num = 3;
    a[0].reale = 3.5;
    a[1].name = "BB";
    a[1].num = 7;
    a[1].reale = 3.5;
    a[2].name = "CCA";
    a[2].reale = 3.5;
    a[2].num = 5;
    a[3].name = "DD";
    a[3].num = 70;
    a[3].reale = 3.5;
    
    
    fstream f;
    f.open("esempio.csv", ios::out);
    
    if (f.is_open()){
        
        cout << "Aperto"<<endl;
        f<<a[0].name<<","<<a[0].num<<","<<a[0].reale;
        for(int i=1; i <N;i++){
            f<<"\n"<<a[i].name<<","<<a[i].num<<","<<a[i].reale;
        }
        
        f.close();
        
        int nn = 10;
        P v[nn];
        
        fstream fin;
        fin.open("esempio.csv", ios::in);
        if (fin.is_open()){
            
            string line;
            int i =0;
            
            while(!fin.eof()) {
                
                getline(fin, line, ',');
                cout<<"'"<<line<<"'"<<endl;
                v[i].name = line;
                
                getline(fin, line);
                cout<<"'"<<line<<"'"<<endl;
                
                v[i].num = atoi(line.c_str());
                i++;
                
            }//wend
            
            fin.close();
            
            
            for(int j=0; j<i; j++){
                cout<<j<<")"<<v[j].name<<", "<<v[j].num<<","<<v[j].reale<<endl;
            }
            
            
        } else {
            cout<<"R2"<<endl;
        }
        
        
    } else {
        cout<<"RR"<<endl;
    }
    
    
    


    return 0;
}