/**
 * @file Part1.cpp
 * 
 * 
 * @author CM (you@domain.com)
 * @brief Example of processing CSV files with C++ fstream library
 * @version 0.1
 * @date 2021-11-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
 * @brief SPhone define a smartphone type
 * @param model, the model of the smarthphone
 * @param producer, the company
 * @param year, the year of production
 * @param ram, ram in the phone
 * @param cost, the sell price
 * @param nrSold, number of pieces sold
 * @param nrAvailable, number of pieces available 
 * 
 */
typedef struct {
    string model;           //modello
    string producer;        //produttore/marca
    int year;               //anno di produzione
    int ram;                //quantità di ram
    float cost;             //costo del telefono
    int nrSold;             //dispositivi venduti
    int nrAvailable;        //dispositivi disponibili in magazzino
} SPhone;

const int MaxNumPhones = 100; //expected max number of rows in the CSV file



/**
 * @brief Function that prints the content of an array
 * 
 * @param phones, the input array
 * @param n, the size of the array
 * 
 * @return void 
 */
void printArray(SPhone phones[], int n){
    for(int i=0; i < n; i++){
        cout<<i+1<<") "<<phones[i].model<<", "<<phones[i].producer;
        cout<<", "<<phones[i].year<<", "<<phones[i].ram;
        cout<<", "<<phones[i].cost<<", "<<phones[i].nrSold<<", "<<phones[i].nrAvailable<<endl;
    }
    cout<<endl;
}


/**
 * @brief function that loads info from CSV file
 * 
 * @param phones the array of phones to fill from CSV file
 * @param dim the actual number of rows in the file
 * @return int, the exit code: 0 for success, otherwise error
 */
int loadPhoneList(SPhone phones[], int &dim);


/**
 * @brief Function that add entries to the array of phones
 * 
 * @param phones the array to fill
 * @param dim the actual size of the array
 * @param MaxDim the max size of the array
 * @return int the number of elements added to the array
 */
int addToArray(SPhone phones[], int &dim, int MaxDim);


/**
 * @brief Function that saves to a CSV file the content of the array
 * 
 * @param phones, the array to save
 * @param dim, its actual size
 * @return int, indicates the error code (0 is all is OK)
 */
int savePhoneList(SPhone phones[], int dim);


int main(){

    SPhone phones[MaxNumPhones]; //max number of phones
    int nPhones; //actual number of rows in the CSV file

    int res = loadPhoneList(phones, nPhones);
    if (!res) {
        //everything is ok
        cout<<"Loaded from CSV file "<<nPhones<<" rows"<<endl;
        printArray(phones, nPhones);

        int incr = addToArray(phones, nPhones, MaxNumPhones);
        cout<<"Added another "<<incr<<" entries to the array"<<endl;

        printArray(phones, nPhones);
        res = savePhoneList(phones, nPhones);
        if (!res){
            cout<<"Everything saved to file"<<endl;
        }

    } else {
        cout<<"Error loading the CSV file..."<<endl;
    }

    return 0;
}



int loadPhoneList(SPhone phones[], int &dim){
    fstream f;
    int res = 0;

    // Step 1: open the CSV file in input mode
    f.open("smartphones.csv", ios::in);

    //if something goes wrong...
    if (f.fail()) {
        res = -1;
        cout<<"Error opening 'smartphones.csv' file"<<endl;
        return res;
    }
    
    // Step 2: read the file
    string s;
    getline(f, s); //the first line contains the header
    cout<<s<<endl;

    int i=0;
    while (!f.eof()) {
        //read until , to get model
        getline(f, s, ',');
        cout<<s<<"\t";
        phones[i].model = s;
        
        //read until next , to get producer
        getline(f, s, ',');
        cout<<s<<"\t";
        phones[i].producer = s;
        
        //read until next , to get the 'year' field
        //use atoi() to convert the numeric string into an integer
        getline(f, s, ',');
        cout<<s<<"\t";
        phones[i].year = atoi(s.c_str());
        
        
        //read until next , to get the 'ram' field
        //use atoi() to convert the numeric string into an integer
        getline(f, s, ',');
        cout<<s<<"\t";
        phones[i].ram = atoi(s.c_str());
        
        //read until next , to get the 'cost' field
        //use atof() to convert the numeric string into an float
        getline(f, s, ',');
        cout<<s<<"\t";
        phones[i].cost = atof(s.c_str());
        
        //read until next , to get the 'sold' field
        //use atoi() to convert the numeric string into an integer
        getline(f, s, ',');
        cout<<s<<"\t";
        phones[i].nrSold = atoi(s.c_str());
        
        
        //the last field is '\n' terminated
        //it is a number, so use atoi() to convert into an integer
        getline(f, s, '\n');
        //getline(f,s);
        cout<<s<<"\t";
        phones[i].nrAvailable = atoi(s.c_str());
		
		i++; //increment i to go to the next position in the array
        cout<<endl;
    }
    
    dim = i; //now dim contains the number of elements obtained from CSV file
    f.close();
    
    return res;
}



int addToArray(SPhone phones[], int &dim, int MAXDIM) {
    bool quit = false;
    int res;
    
    int c = dim;
    int j = 0;
    while (c<MAXDIM && !quit) {

        cout<<"Enter another phone:\nmodel\t";
        cin>>phones[c].model;
        
        cout<<"\nproducer\t";
        cin>>phones[c].producer;
        
        cout<<"\nyear\t";
        cin>>phones[c].year;

        cout<<"\nram\t";
        cin>>phones[c].ram;
        
        cout<<"\ncost\t";
        cin>>phones[c].cost;
        
        cout<<"\nsold\t";
        cin>>phones[c].nrSold;
        
        cout<<"\navailable\t";
        cin>>phones[c].nrAvailable;
        ++c;
        j++;
        
        cout<<"\nEnter another one?";
        cin>>res;
        if (res == 0){
            quit = true;
        }

    }

    dim = c;
    return j;
}



int savePhoneList(SPhone phones[], int dim){

    int res = 0;
    fstream f;

    //Step 1: open the file in output mode
    f.open("savedphones.csv", ios::out);

    if (f.is_open()){

        //Step1: save the header to file
        f<<"model,producer,year,ram,cost,sold,available";
        
        for(int k=0; k<dim; k++){
            f<<endl<<phones[k].model<<","<<phones[k].producer;
            f<<","<<phones[k].year<<","<<phones[k].ram<<","<<phones[k].cost;
            f<<","<<phones[k].nrSold<<","<<phones[k].nrAvailable;
        }

        //close to save
        f.close();

    }else{
        cout<<"Something goes wrong creating a new file on disk"<<endl;
        res = 1;
    }


return res;
}