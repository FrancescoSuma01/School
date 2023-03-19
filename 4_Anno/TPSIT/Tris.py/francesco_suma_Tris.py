gamer1 = "X"
gamer2 = "O"
posizione = [" ", " ", " ", " ", " ", " ", " ", " ", " "]
casella = 0
uscita = 0
nGamer1 = " "  #salva il nome del giocatore X
nGamer2 = " "  #salva il nome del giocatore O
giocatore = 0

def firstTable():
    print("Per inserire un segno inserire il numero corrispondente alla tabella seguente: \n")
    print("     |     |     ")
    print(f"  1  |  2  |  3  ")
    print("_____|_____|_____")
    print("     |     |     ")
    print(f"  4  |  5  |  6  ")
    print("_____|_____|_____")
    print("     |     |     ")
    print(f"  7  |  8  |  9  ")
    print("     |     |     \n")

def printTable():
    print("     |     |     ")
    print(f"  {posizione[0]}  |  {posizione[1]}  |  {posizione[2]}   ")
    print("_____|_____|_____")
    print("     |     |     ")
    print(f"  {posizione[3]}  |  {posizione[4]}  |  {posizione[5]}  ")
    print("_____|_____|_____")
    print("     |     |     ")
    print(f"  {posizione[6]}  |  {posizione[7]}  |  {posizione[8]}  ")
    print("     |     |     ")
    
def controlloVincita():
    if (posizione[0]==posizione[1] and posizione[1]==posizione[2]):
        if(giocatore == 1):
            print(f"Complimenti, {nGamer1} ha vinto!")
        elif(giocatore == 2):
            print(f"Complimenti, {nGamer2} ha vinto!")
        return 1
    elif (posizione[3]==posizione[4] and posizione[4]==posizione[5]):
        if(giocatore == 1):
            print(f"Complimenti, {nGamer1} ha vinto!")
        elif(giocatore == 2):
            print(f"Complimenti, {nGamer2} ha vinto!")
        return 1
    elif (posizione[6]==posizione[7] and posizione[7]==posizione[8]):
        if(giocatore == 1):
            print(f"Complimenti, {nGamer1} ha vinto!")
        elif(giocatore == 2):
            print(f"Complimenti, {nGamer2} ha vinto!")
        return 1
    elif (posizione[0]==posizione[3] and posizione[3]==posizione[6]):
        if(giocatore == 1):
            print(f"Complimenti, {nGamer1} ha vinto!")
        elif(giocatore == 2):
            print(f"Complimenti, {nGamer2} ha vinto!")
        return 1
    elif (posizione[1]==posizione[4] and posizione[4]==posizione[7]):
        if(giocatore == 1):
            print(f"Complimenti, {nGamer1} ha vinto!")
        elif(giocatore == 2):
            print(f"Complimenti, {nGamer2} ha vinto!")
        return 1
    elif (posizione[2]==posizione[5] and posizione[5]==posizione[8]):
        if(giocatore == 1):
            print(f"Complimenti, {nGamer1} ha vinto!")
        elif(giocatore == 2):
            print(f"Complimenti, {nGamer2} ha vinto!")
        return 1
    elif (posizione[0]==posizione[4] and posizione[4]==posizione[8]):
        if(giocatore == 1):
            print(f"Complimenti, {nGamer1} ha vinto!")
        elif(giocatore == 2):
            print(f"Complimenti, {nGamer2} ha vinto!")
        return 1
    elif (posizione[2]==posizione[4] and posizione[4]==posizione[6]):
        if(giocatore == 1):
            print(f"Complimenti, {nGamer1} ha vinto!")
        elif(giocatore == 2):
            print(f"Complimenti, {nGamer2} ha vinto!")
        return 1

print("-----//Tic Tac Toe\\-----")
print("Iniziamo: ")
nGamer1=input("Inserisci il nome del giocatore X: ")
nGamer2=input("Inserisci il nome del giocatore O: ")
print("\n-------------------------------------------\n")
firstTable()
print("\n-------------------------------------------\n")

while True:
    
    #---prima richiesta---
    casella=int(input("Inserisci la casella X: "))
    if(casella<=0 or casella>=10):
        while(casella<=0 or casella>=10):
            casella=int(input("Inserisci la casella X: "))
    posizione[casella - 1] = gamer1
    printTable()

    print("\n-------------------------------------------\n")
    
    #---seconda richiesta---
    casella=int(input("Inserisci la casella O: "))
    if(casella<=0 or casella>=10):
        while(casella<=0 or casella>=10):
            casella=int(input("Inserisci casella la O: "))
    posizione[casella - 1] = gamer2
    printTable()

    print("\n-------------------------------------------\n")

    #---terza richiesta---
    casella=int(input("Inserisci la casella X: "))
    if(casella<=0 or casella>=10):
        while(casella<=0 or casella>=10):
            casella=int(input("Inserisci la casella X: "))
    posizione[casella - 1] = gamer1
    printTable()

    print("\n-------------------------------------------\n")

    #---quarta richiesta---
    casella=int(input("Inserisci la casella O: "))
    if(casella<=0 or casella>=10):
        while(casella<=0 or casella>=10):
            casella=int(input("Questo valore non è riconosciuto, inseriscine uno ta 1 e 9: "))
    posizione[casella - 1] = gamer2
    printTable()

    print("\n-------------------------------------------\n")

    #---quinta richiesta---
    casella=int(input("Inserisci la casella X: "))
    if(casella<=0 or casella>=10):
        while(casella<=0 or casella>=10):
            casella=int(input("Questo valore non è riconosciuto, inseriscine uno ta 1 e 9: "))
    posizione[casella - 1] = gamer1
    printTable()
    giocatore = 1
    uscita = controlloVincita()
    if(uscita == 1):
        break

    print("\n-------------------------------------------\n")

    #---sesta richiesta---
    casella=int(input("Inserisci la casella O: "))
    if(casella<=0 or casella>=10):
        while(casella<=0 or casella>=10):
            casella=int(input("Questo valore non è riconosciuto, inseriscine uno ta 1 e 9: "))
    posizione[casella - 1] = gamer2
    printTable()
    giocatore = 2
    uscita = controlloVincita()
    if(uscita == 1):
        break

    print("\n-------------------------------------------\n")

    #---settima richiesta---
    casella=int(input("Inserisci la casella X: "))
    if(casella<=0 or casella>=10):
        while(casella<=0 or casella>=10):
            casella=int(input("Questo valore non è riconosciuto, inseriscine uno ta 1 e 9: "))
    posizione[casella - 1] = gamer1
    printTable()
    giocatore = 1
    uscita = controlloVincita()
    if(uscita == 1):
        break

    print("\n-------------------------------------------\n")

    #---ottava richiesta---
    casella=int(input("Inserisci la casella O: "))
    if(casella<=0 or casella>=10):
        while(casella<=0 or casella>=10):
            casella=int(input("Questo valore non è riconosciuto, inseriscine uno ta 1 e 9: "))
    posizione[casella - 1] = gamer2
    printTable()
    giocatore = 2
    uscita = controlloVincita()
    if(uscita == 1):
        break

    print("\n-------------------------------------------\n")

    #---nona richiesta---
    casella=int(input("Inserisci la casella X: "))
    if(casella<=0 or casella>=10):
        while(casella<=0 or casella>=10):
            casella=int(input("Questo valore non è riconosciuto, inseriscine uno ta 1 e 9: "))
    posizione[casella - 1] = gamer1
    printTable()
    giocatore = 1
    uscita = controlloVincita()
    if(uscita == 1):
        break
    
    print("\n-------------------------------------------\n")
    print("La partita è terminata patta")
    break

print("Grazie di aver giocato")