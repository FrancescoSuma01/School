import random
import os     #questa funzione integra il programma con il sistema operativo

#Questa funzione verifica la presenza del file e successivamente scrive all'interno del file
def caricaFile(numeri, fname, f):
    for i in range(0, 20):
        f.write(f"{i+1}: {numeri[i]}\n")


#Questa funzione carica valori casuali all'interno della lista
def caricaLista(numeri):
    num = 0
    for i in range(0, 20):
        num = random.randint(0,10)
        numeri.append(num)

#Questa funzione ordina la lista in ordine crescente
def ordinaCrescente(numeri):
    numeri.sort()

#Questa funzione ordina la lista in ordine decrescente
def ordinaDecrescente(numeri):
    numeri.reverse()

#Questa funzione verifica la presenza del file e successivamente scrive all'interno del file la media dei valori presenti nella lista
def calcoloMedia(numeri, fname, f):
    somma = 0
    media = 0.0
    for a in range(0, 20):
        somma = somma + numeri[a]
        
    media = somma/20
    f.write(f"La media dei valori presenti nella lista è: {media}")
