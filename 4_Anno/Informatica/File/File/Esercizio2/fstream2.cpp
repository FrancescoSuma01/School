#include <iostream>
#include <fstream>

using namespace std;


int main() {
    int N = 5;
    int v[N];
       
    for(int i=0; i<N;i++){
        v[i] = i+5;
    }
       
    fstream f;
    f.open(".\\numeri.txt", ios::out);
    if (f.is_open()){
        f<<v[0];
        for(int i=1;i<N;i++){
            f<<" "<<v[i];
        }
        f.close();
    } else {
        cout<<"ERROR file..."<<endl;
    }        
       
       
    for(int i = 0; i < N; i++){
        v[i] *=3;
    }
       
       
    f.open(".\\numeri.txt", ios::app);
       
    if (f.bad()){
        cout<<"ERROR file..."<<endl;
    } else {
        for(int i = 0;i <N; i++){
        f<<" "<<v[i];
        }
        f.close();
    }
       
               
    fstream f2;
    f2.open("numeri.txt", ios::in);
    if(f2.is_open()){
        int a;
        while(f2>>a){
            cout<<" " <<a;
        }
        f2.close();
    }else{
        cout<<"ERROR ";
    }      
}