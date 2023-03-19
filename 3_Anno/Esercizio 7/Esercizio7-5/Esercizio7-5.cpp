#include <iostream>
using namespace std;

float media, reddito;
int costo_base=18;
int costo_finale;

int main(){
	cout<<"Scrivi la media dei voti"<<endl;
	cin>>media;
	if (media<=7){
	   costo_finale=costo_base+25;	
	}else if(media>7 && media<8){
	costo_finale=costo_base+17.50;
    }else if(media>8){
    	costo_finale=costo_base;
    }
   	cout<<"Quale il reddito annuo del tuo nucleo familiare?"<<endl;
   	cin>>reddito;
   	if (reddito<16.000){
   	costo_finale=costo_finale-(costo_finale*40)/100;
	}
	cout<<costo_finale;
}
