#include <iostream>
#include <fstream>
 
 
using namespace std;
 
 
int main() {
    int N=5;
    int v[N];
       
    for(int i=0; i<N;i++){
        v[i] = i+5;
    }
    fstream f;
    f.open(".\\NUMERI.dat",ios::out|ios::binary);
    if(f.is_open()){
        f.write((char *)v,sizeof(int)*N);
        f.close();
    }
       
    fstream fin;
    fin.open(".\\NUMERI.dat", ios::binary|ios::in);
    if(fin.is_open()){
        fin.seekg(0, fin.end);
        int nbytes = fin.tellg();
        int len = nbytes/sizeof(int);
               
        cout<<"Ci sono "<<len<<" interi"<<endl;
               
        fin.seekg(0, fin.beg);
               
        int A[len];
        fin.read((char *)A,sizeof(int)*len);
        for(int i=0;i<len;i++){
            cout<<A[i]<<endl;
        }
               
        fin.seekg(0, fin.beg);
        int pos = len-1;
        fin.seekg(pos*sizeof(int), fin.beg);
        int numero;
        fin.read((char *)&numero, sizeof(int));
        cout<<"al posto "<<pos;
        cout<<" numero "<<numero;
        cout<<endl;
        nbytes = fin.tellg();
        cout<<"bytes "<<nbytes<<endl;
               
        fin.read((char *)&numero, sizeof(int));
        cout<<" numero "<<numero;
        cout<<endl;
        nbytes = fin.tellg();
        cout<<"bytes "<<nbytes<<endl;        
               
    }
       
}