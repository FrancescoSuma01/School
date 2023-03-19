#include <iostream>
using namespace std;

typedef struct{
    string nome;
    string categoria;
    float prezzo;
    int quantita;
}TProdotto;
void carica(TProdotto v[], int &n);
void visualizza(TProdotto v[], int n);
float trovaPrezzoMaggiore(TProdotto v[], int n);
int contaProdotti(TProdotto v[], int n);
int contaCategoriaProdotti(TProdotto v[], int n);
float calcoloMedia(TProdotto v[], int n);
float trovaPrezzoConveniente(TProdotto v[], int n);

int main(){
    const int DIM=1000;
    TProdotto v[DIM];
    int n=0,c=0;
    float m=0;
    carica(v, n);
    visualizza(v, n);
    m=trovaPrezzoMaggiore(v, n);
    cout<<"Il prezzomaggiore \212: "<<m<<endl;
    c=contaProdotti(v, n);
    cout<<"Il totale dei prodotti compresi nell'intervallo dato sono: "<<c<<endl;
    c=contaCategoriaProdotti(v, n);
    cout<<"I prodotti della categoria richiesta sono: "<<c<<endl;
    m=calcoloMedia(v, n);
    cout<<"La media dei prezzi \212: "<<m<<endl;
    c=trovaPrezzoConveniente(TProdotto v[], int n);
    cout<<"Ilprezzo piu conveniente \212: "<<c<<endl;
}

void carica(TProdotto v[], int &n){
    cout<<"Quantio prodotti vuoi caricare? ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Nome: ";
        cin>>v[i].nome;
        cout<<"Categoria: ";
        cin>>v[i].categoria;
        cout<<"Prezzo: ";
        cin>>v[i].prezzo;
        cout<<"Quantita: ";
        cin>>v[i].quantita;
    }
}

void visualizza(TProdotto v[], int n){
    for(int i=0;i<n; i++){
        cout<<"Nome: "<<v[i].nome;;
        cout<<"Categoria: "<<v[i].categoria;
        cout<<"Prezzo: "<<v[i].prezzo;
        cout<<"Quantita: "<<v[i].quantita;
    }
}

float trovaPrezzoMaggiore(TProdotto v[], int n){
    float max=v[0].prezzo;
    for(int i=0; i<n; i++){
        if(v[i].prezzo>max){
            max=v[i].prezzo;
        }
    }
    return max;
}

int contaProdotti(TProdotto v[], int n){
    int inf=0, sup=0, conta=0;
    cout<<"Inserire il primo estremo: ";
    cin>>inf;
    cout<<"Inserire il secondo estremo: ";
    cin>>sup;
    for(int i=0; i<n; i++){
        if(v[i].prezzo>=inf && v[i].prezzo<=sup){
            conta++;
            cout<<"Nome: "<<v[i].nome;;
            cout<<"Categoria: "<<v[i].categoria;
            cout<<"Prezzo: "<<v[i].prezzo;
            cout<<"Quantita: "<<v[i].quantita;
        }
    }
    return conta;
}

int contaCategoriaProdotti(TProdotto v[], int n){
    string cat;
    int conta=0;
    cout<<"Inserisci la categoria: ";
    cin>>cat;
    for (int i=0; i<n; i++){
        if(v[i].categoria==cat){
            conta++;
        }
    }
    return conta;
}

float calcoloMedia(TProdotto v[], int n){
    float media=0, somma=0;
    for (int i=0; i<n; i++){
        somma=somma+v[i].prezzo;
    }
    media=somma/n;
    return media;
}

float trovaPrezzoConveniente(TProdotto v[], int n){
    float minimo=v[i].prezzo;
    int a=0;
    for (int i=0; i<n; i++){
        if(v[i].prezzo<minimo){
            minimo=v[i].prezzo;
            a=i;
        }
    }
    cout<<"Prodotto conveniente: "<<v[a].nome<<endl;
    return minimo;
}