//g++ -o f6 f6.cpp -std=c++11

#include <iostream>
#include <fstream>

using namespace std;


void printNumbers(int v[], int p){
    for(int i = 0; i <p; i++){
        cout<<" "<<v[i];
    }
    cout<<endl;
}



int main(){

    /*
    Supponiamo di avere un array di numeri interi 
    che vogliamo salvare in un file binario:
    per prima cosa creiamo l'array di interi 
    e popoliamolo con numeri casuali...
    */
    int N = 7;
    int numbers[N];
    
    for(int i = 0; i <N; i++){
        numbers[i] = (i+21);
    }

    //stampo il contenuto dell'array
    printNumbers(numbers, N);


    cout<<"Salviamo l'array su file binario"<<endl;
    /*
    Per salvare su un file binario 
    i dati contenuti nell'array eseguo questa procedura:

    1. dichiaro un oggetto di tipo fstream: 
    */
    fstream f; 

    /* 
    2. invoco il metodo open, 
    specificando la modalità di apertura e il tipo di file binario
    ios::binary|ios::out
    */
    f.open(".\\numbers.dat", ios::binary|ios::out); 

    /*
    3. verifico che l'accesso al file sia andato a buon fine
    */
    if (f.is_open()) {
        /* 
        4. invoco il metodo write() 
        per scrivere tutto il contenuto dell'array su file binario
        specifico l'indirizzo base dell'array (numbers)
        e la dimensione dell'array in byte (sizeof(int)*N)
        */
        f.write((char *)numbers, sizeof(int)*N);

        // 5. chiudo il file per rilasciare le risorse associate
        f.close();
    }
    cout<<"Fatto!"<<endl;


    //Apertura di un file binario in lettura
    fstream fin;

    /*
    1. Invoco il metodo open() specificando 
    la modalità di apertura e il flag di file binario
    */
    fin.open(".\\numbers.dat", ios::binary|ios::in);


    //2. controllo se l'apertura è andata a buon fine
    if (fin.is_open()){ 
    

        //determino la dimensione dell'array di interi memorizzato nel file
        
        //1. posiziono la testina di lettura alla fine del file
        fin.seekg(0, fin.end);
        
        //2. calcolo la dimensione in byte del file
        int nbytes = fin.tellg();

        //3. divido per la dimensione di una variabile di tipo intero
        int nElemens = nbytes/sizeof(int);

        //4. il numero di interi memorizzati nel file è: 
        cout<<"Il file contiene "<<nElemens<<" numeri interi"<<endl;

        //5. riporto la testina di lettura all'inizio del file
        fin.seekg(0, fin.beg);

        cout<<"Lettura primo elemento del file"<<endl;
        
        //6. leggo il numero intero alla posizione corrente (inizio del file)
        int numero;
        int posizione=0;
        int bytes = 0;

        fin.read((char *)&numero, sizeof(int));
        bytes = fin.tellg();
        
        cout<<"posizione: "<<posizione;
        cout<<"\tvalore: "<<numero;
        cout<<"\ttestina di lettura al byte: "<<bytes<<endl;

        //posizioniamoci a metà dell'array
        cout<<"Lettura elemento centrale del file"<<endl;
        posizione = nElemens/2;

        //nel metodo seekg() la posizione è specificata in termini di byte
        fin.seekg(posizione*sizeof(int), fin.beg);
        
        bytes = fin.tellg();
        cout<<"\ttestina di lettura al byte: "<<bytes<<endl;


        //estraiamo il dato intero dalla posizione corrente
        fin.read((char *)&numero, sizeof(int));

        cout<<"posizione: "<<posizione;
        cout<<"\tvalore: "<<numero;

        //la testina di lettura avanza al successivo elemento dopo ogni lettura 
        bytes = fin.tellg();
        cout<<"\ttestina di lettura al byte: "<<bytes<<endl;

        //la testina di lettura è avanzata di un numero di
        //sizeof(int) byte
        //ed è posizionata al successivo intero da leggere:
        posizione++;
        fin.read((char *)&numero, sizeof(int));

        cout<<"posizione: "<<posizione;
        cout<<"\tvalore: "<<numero;
        bytes = fin.tellg();
        cout<<"\ttestina di lettura al byte: "<<bytes<<endl;


        //leggiamo l'ultimo elemento nel file
        cout<<"Lettura ultimo elemento del file"<<endl;
        posizione = nElemens - 1;
        
        //posizioniamoci all'ultima posizione
        fin.seekg(posizione*sizeof(int), fin.beg);

        fin.read((char *)&numero, sizeof(int));

        cout<<"posizione: "<<posizione;
        cout<<"\tvalore: "<<numero;
        bytes = fin.tellg();
        cout<<"\ttestina di lettura al byte: "<<bytes<<endl;


        //leggiamo il penultimo elemento dell'array:
        cout<<"Lettura penultimo elemento del file"<<endl;

        //specifico la posizione rispetto alla fine del file
        //il penultimo elemento è a -2 posizioni rispetto alla fine 
        fin.seekg(-2*sizeof(int), fin.end);
        //eseguo la lettura del numero intero
        fin.read((char *)&numero, sizeof(int));

        cout<<"posizione: "<<posizione;
        cout<<"\tvalore: "<<numero;
        bytes = fin.tellg();
        cout<<"\ttestina di lettura al byte: "<<bytes<<endl;

        fin.close();

    } else {
        cout<<"ERROR on file..."<<endl;
    }


return 0;
}
