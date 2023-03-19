def fattoriale(nletto):
    cont = 1
    risultato = nletto
    if (nletto == 0):
        return 1
    else:
        while (cont < nletto):
            risultato = risultato * cont
            cont+=1
        return risultato
    
def fattorialeRicorsivo(nletto):
    if (nletto == 0):
        return 1

    risultato = nletto*fattorialeRicorsivo(nletto-1)
    return risultato


nletto = 0
prodotto = 0
scelta = 0
exit = True

print("Questo codice ti permette di calcolare il fattoriale di un numero inserito da tastiera")
nletto = int(input("Inserisci il numero: "))
print("------------------------------------------------------")
print('Digita 1 se vuoi eseguirlo con la funzione semplice o 2 se vuoi eseguirlo con la funzione ricorsiva ')5
scelta = int(input("Inserisci la scelta: "))
if scelta != 1 and scelta != 2:
    while (scelta != 1 and scelta != 2):
        print ("Input non valido")
        scelta = int(input('Digita 1 se vuoi eseguirlo con la funzione semplice o 2 se vuoi eseguirlo con la funzione ricorsiva'))
        
    if scelta == 1: 
        prodotto = fattoriale(nletto)
    elif scelta == 2:
        prodotto = fattorialeRicorsivo(nletto)
elif scelta == 1: 
    prodotto = fattoriale(nletto)
elif scelta == 2:
    prodotto = fattorialeRicorsivo(nletto)

print (f"Il risultato del fattoriale è: {prodotto}")