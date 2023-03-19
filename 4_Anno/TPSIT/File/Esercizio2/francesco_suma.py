"""
author: Francesco Suma
classe: 4BIA
Esercizio: Gestione dei File

Traccia: scrivi un programma che legge da un file di testo tutti i caratteri contenuti alla ricerca di una parola 
         che viene inserita dall'utente, Le lettere della parola inserita dall'utente possono essere inframmezzate da 
         altre lettere. Una volta individuata la parola, il programma restituisce la posizione dei singoli caratteri 
         che la costituiscono.
"""

import miaLibreria as lib
__name__


def main():
    parola = input("Inserisci la parola da cercare: ")
    lib.cercaParola(parola)


if __name__ == "__main__":
    main()