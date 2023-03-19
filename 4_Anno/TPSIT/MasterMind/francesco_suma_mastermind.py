import random

#Variabili
nEstratti = [] #lista che contiene i numeri estratti
numero = 0
tentativi = 0
corretti = 0
posizione = 0

def spiegazione():
    scelta = str(input("Vuole che le venga spiegato il gioco? si/no "))
    scelta.lower()
    if scelta == "si":
        print("-------------------------------------------------------------------------------------------------------------------------\n")
        print("All'inizio il computer sceglie 4 colori e li posiziona in casuale, usando una qualsiasi combinazione dei 6 colori.\n")
        print("Di volta in volta, devi comporre una combinazione secondo te corretta. Il gioco finisce quando sono finiti tutti e 9\n")
        print("i tentativi o se il codice viene indovinato.\n")
        print("-------------------------------------------------------------------------------------------------------------------------\n")
    elif scelta == "no":
        print("Buona giocata")



#riempimento della lista con i numeri estratti
for i in range(0,4):
    nEstratti.append(random.randint(1, 6))

print("-----Benvenuto al MasterMind-----")
spiegazione()

print(nEstratti[0], nEstratti[1], nEstratti[2], nEstratti[3])

while True:
    print("Iniziamo a giocare: \n")
    for a in range(0, 4):
        print("Inserisci 4 numeri interi compresi tra 1 e 6 estremi inclusi\n")
        numero = int(input(f"Inserisci il {a+1}° numero: "))

        for i in range(0, len(nEstratti)):
            if (nEstratti[i] == numero):
                corretti = corretti + 1
                if(a == i):
                    posizione = posizione + 1

    tentativi = tentativi + 1
    numero = 0
    if (corretti == 4 and posizione == 4 or tentativi == 9):
        break
        print(f"Complimenti ha indovinato: {posizione} posizioni e {corretti} numeri corretti")


    #print (f" n1: {nEstratti[0]} n1: {nEstratti[1]} n1: {nEstratti[2]} n1: {nEstratti[3]}")