"""
author: Francesco Suma
classe: 4BIA
Esercizio: Gestione dei File

Traccia: Scrivi un programma che crei e gestisca i seguenti file:
         Il primo file deve contenere 20 numeri che vengono generati casualmente
         il secondo file contiene i 20 numeri generati casualmente,  ordinati in modo crescente
         il terzo file contiene i 20 numeri generati casualmente, ordinati in modo decrescente
         il quarto file contiene la media aritmetica dei 20 numeri generati casualmente
"""

import miaLibreria as lib
import os
__name__

numeri = []

def main():
 #-----------------file1-------------------
    print("------------Carica 20 valori Casuali------------")
    fname = input("nome file da creare: ")  #legge il nome del file da creare
    if os.path.exists(fname):               #verifica la presenza del file e riceve un booleano
      f = open(fname, 'w')                  #scrive sul file
      lib.caricaLista(numeri)               #richiama la funzione caricaLista dalla mia libreria
      lib.caricaFile(numeri, fname, f)      #richiama la funzione caricaFile dalla mia libreria
      f.close()                             #chiude il file
    else:
      f = open(fname, 'x')                  #crea il file
      lib.caricaLista(numeri)               #richiama la funzione caricaLista dalla mia libreria
      lib.caricaFile(numeri, fname, f)      #richiama la funzione caricaFile dalla mia libreria
      f.close()                             #chiude il file
 #-----------------file2-------------------
    print("\n------------Carica 20 valori Casuali ordinati in ordine crescente------------")
    fname = input("nome file da creare: ")
    if os.path.exists(fname):
      f = open(fname, 'w')
      lib.ordinaCrescente(numeri)
      lib.caricaFile(numeri, fname, f)
      f.close()
    else:
      f = open(fname, 'x')
      lib.ordinaCrescente(numeri)
      lib.caricaFile(numeri, fname, f)
      f.close()
 #-----------------file3-------------------
    print("\n------------Carica 20 valori Casuali ordinati in ordine decrescente------------")
    fname = input("nome file da creare: ")
    if os.path.exists(fname):
      f = open(fname, 'w')
      lib.ordinaDecrescente(numeri)
      lib.caricaFile(numeri, fname, f)
      f.close()
    else:
      f = open(fname, 'x')
      lib.ordinaDecrescente(numeri)
      lib.caricaFile(numeri, fname, f)
      f.close()
 #-----------------file4-------------------
    print("\n------------Carica la media------------")
    fname = input("nome file da creare: ")
    if os.path.exists(fname):
      f = open(fname, 'w')
      lib.calcoloMedia(numeri, fname, f)
      f.close()
    else:
      f = open(fname, 'x')
      lib.calcoloMedia(numeri, fname, f)
      f.close()

if __name__ == "__main__":
    main()



