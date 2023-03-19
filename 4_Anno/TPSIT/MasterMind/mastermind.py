#mastermind: gioco di memoria e logica

import random


def secretList(max_range):
    secretList=[]
    for i in range(4):
        secretList.append(random.randint(1, max_range))
    return secretList

mastermindList=secretList(5)
print (mastermindList)


print("Benvenuto a MasterList")
print("Prova ad indovinare i 4 colori/n")

correct = 0
tries = 0

while correct<4:
    guess1 = int(input("Inserisci il primo colore: "))
    guess2 = int(input("Inserisci il secondo colore: "))
    guess3 = int(input("Inserisci il terzo colore: "))
    guess4 = int(input("Inserisci il quarto colore: "))
    tries+=1

    if guess1 == mastermindList[0]:
        correct += 1
    if guess2 == mastermindList[1]:
        correct += 1
    if guess3 == mastermindList[2]:
        correct += 1
    if guess4 == mastermindList[3]:
        correct += 1
    
    if correct < 4:
        print("\nHai indovinato "+str(correct)+" colore/i corretto/i.\n")
        correct = 0
        continue
    else:
        if tries == 1:
            print("\nCongratulazioni, hai indovinato i 4 colori "+str(tries)+" scelti\n")
        else:
            print("\nCongratulazioni, hai indovinato i 4 colori "+str(tries)+" scelti\n")       