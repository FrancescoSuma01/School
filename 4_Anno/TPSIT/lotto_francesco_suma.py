"""
    @author: francesco suma
    @classe 4BIA
    @esecizio: lotto_v1.0
    @file: lotto_francesco_suma
"""

import random

#dichiarazioni
lotto = [0]
numeriLetti = [0, 0, 0, 0, 0]
numeriEstratti = [0, 0, 0, 0, 0]
exit = True
risposta = " "

#stampa la lista dei numeri che si possono scegliere
def stampaLista():
    i = 0
    print(" ---------------------------------------------------------------------------")
    while i<90:
        print(f"| {i+1}\t{i+2}\t{i+3}\t{i+4}\t{i+5}\t{i+6}\t{i+7}\t{i+8}\t{i+9}\t{i+10}  |")
        i+=10
    print(" ---------------------------------------------------------------------------\n")

#riempe un vettore con i 90 numeri numeri casuali
def generaNumeri(numeriEstratti):
    for b in range(0,len(numeriEstratti)):
        numeriEstratti[b] = random.randint(0,91)

#verifica se i numeri letti sono uguali a quelli estratti
def trovaNum(numeriLetti, numeriEstratti):
    nTrovati = 0

    for y in range(0,len(numeriLetti)):
        for i in range(0,5):
            if numeriLetti[y] == numeriEstratti[i]:
                nTrovati += 1 

    return nTrovati

#main
while (exit == True):
    print('----------L O T T O----------')
    print("Inserisci cinque di questi valori: ")
    stampaLista()
    generaNumeri(numeriEstratti)
    
    for x in range (0,len(numeriLetti)):
        numeriLetti[x] = int(input(f"Inserisci il {x+1}° numero: "))
        if numeriLetti[x]>90 or numeriLetti[x]<0:
            while numeriLetti[x]>90 or numeriLetti[x]<=0:
                print("ERRORE!! Inserisci un valore compreso tra 1 e 90")
                numeriLetti[x] = int(input(f"Inserisci il {x+1}° numero: "))

    vinti = trovaNum(numeriLetti, numeriEstratti)
    
    print("--------------------------------------------------\n")
    print(f"I numeri estratti sono: {numeriEstratti[0]}  {numeriEstratti[1]}  {numeriEstratti[2]}  {numeriEstratti[3]}  {numeriEstratti[4]}\n")
    print(f"I numeri inseriti sono: {numeriLetti[0]}  {numeriLetti[1]}  {numeriLetti[2]}  {numeriLetti[3]}  {numeriLetti[4]}\n")
    print("--------------------------------------------------\n")
    if vinti == 0:
        print("Peccato hai perso, ritenta sarai più fortunato\n")
    elif vinti == 1:
        print("Buono, hai trovato un solo numero\n")
    elif vinti == 2:
        print("Complimenti, hai preso l'ambo\n")
    elif vinti == 3:
        print("Complimenti, hai preso il terno\n")
    elif vinti == 4:
        print("Complimenti, hai preso il quaterno\n")
    elif vinti == 5:
        print("OTTIMO! HAI TROVATO TUTTI I NUMERI\n")
    
    print("--------------------------------------------------\n")
    risposta = str(input("Vuoi eseguire nuovamente il programma? si/no "))
    if (risposta == "si"):
        exit = True
    elif(risposta == "no"):
        exit = False
    else:
        while (risposta!="si" and risposta!="no"):
            risposta = str(input("Vuoi eseguire nuovamente il programma? si/no "))
            if (risposta == "si"):
                exitt = True
            elif(risposta == "no"):
                exitt = False
    print("Grazie di aver giocato a questo gioco")
#ednmain
