#################
# Makefile per progetto
#
#################

CC=g++
DEPS=main.cpp
IFLAGS=-I.
FLAGS=-std=c++11
TARGET=Test.exe


all: $(TARGET)

$(TARGET): $(DEPS)
        $(CC) -o $(TARGET) $(DEPS) $(IFLAGS) $(FLAGS)
       
clean:
        rm -f $(TARGET)


/*
Una volta configurata la variabile di ambiente PATH (per includere il folder bin di MINGW che contiene g++ ed il comando make)
provate ad eseguire 
make -f Makefile
e successivamente
make clean
Il primo comando compila e crea il file .exe; il make clean cancella l'*.exe
*/

Esempio di main.cpp
#include <iostream>

using namespace std;


int main(){
       
       
        cout<<"Ciao"<<endl;
       
       
        return 0;
}