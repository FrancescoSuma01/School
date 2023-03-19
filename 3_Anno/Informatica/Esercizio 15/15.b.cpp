#include <iostream>
using namespace std;

int A=0, C=0, r=0, g=0, b=0, min_rgb=0, gioco=0;
int trova_min(int r, int g, int b);
int calcolo_gioco(int r, int g, int b, int A, int C);

int main(){
	string moneta;
	cout<<"Inserisci i due coefficienti per il calcolo"<<endl;
	cout<<"Inserisci il coefficiente A: ";
	cin>>A;
	cout<<"Inserisci il coefficiente C: ";
	cin>>C;
	cout<<"Inserisci ora quanti gettoni rossi sono gia in gioco: ";
	cin>>r;
	cout<<"Inserisci quanti gettoni verdi sono gia in gioco: ";
	cin>>g;
	cout<<"Inserisci quanti gettoni blu sono gia in gioco: ";
	cin>>b;
	min_rgb=trova_min(r, g, b);
	cout<<gioco<<endl;
	gioco=calcolo_gioco(r, g, b, A, C);
	cout<<gioco<<endl;
	if(gioco==1){
		moneta="rossa";
	}else if(gioco==2){
		moneta="blu";
	}else if(gioco==3){
		moneta="verde";
	}
	cout<<"Gioca una moneta "<<moneta;
}


int trova_min(int r, int g, int b){
	if(r<g && r<b){
		min_rgb=r;
	}else if(g<r && g<b){
		min_rgb=g;
	}else if(b<r && b<g){
		min_rgb=b;
	}
	return min_rgb;
}

int calcolo_gioco(int r, int g, int b, int A, int C){
	int gioco_a=0, gioco_b=0, gioco_c=0;
	if(min_rgb==r){
		gioco_a=A*(pow(r++,2)+pow(g,2)+pow(b,2))+C*(r++);
		gioco_b=A*(pow(r,2)+pow(g++,2)+pow(b,2))+C*(r++);
		gioco_c=A*(pow(r,2)+pow(g,2)+pow(b++,2))+C*(r++);
		if(gioco_a>gioco_b && gioco_a>gioco_c){
			gioco=1;
		}else if(gioco_b>gioco_a && gioco_b>gioco_c){
			gioco=2;
		}else if(gioco_c>gioco_a && gioco_c>gioco_b){
			gioco=3;
		}
		return gioco;
	}else if(min_rgb==g){
		gioco_a=A*(pow(r++,2)+pow(g,2)+pow(b,2))+C*(g++);
		gioco_b=A*(pow(r,2)+pow(g++,2)+pow(b,2))+C*(g++);
		gioco_c=A*(pow(r,2)+pow(g,2)+pow(b++,2))+C*(g++);
		if(gioco_a>gioco_b && gioco_a>gioco_c){
			gioco=1;
		}else if(gioco_b>gioco_a && gioco_b>gioco_c){
			gioco=2;
		}else if(gioco_c>gioco_a && gioco_c>gioco_b){
			gioco=3;
		}
		return gioco;
	}else if(min_rgb==b){
		gioco_a=A*(pow(r++,2)+pow(g,2)+pow(b,2))+C*(b++);
		gioco_b=A*(pow(r,2)+pow(g++,2)+pow(b,2))+C*(b++);
		gioco_c=A*(pow(r,2)+pow(g,2)+pow(b++,2))+C*(b++);
		if(gioco_a>gioco_b && gioco_a>gioco_c){
			gioco=1;
		}else if(gioco_b>gioco_a && gioco_b>gioco_c){
			gioco=2;
		}else if(gioco_c>gioco_a && gioco_c>gioco_b){
			gioco=3;
		}
		return gioco;
	}
}
