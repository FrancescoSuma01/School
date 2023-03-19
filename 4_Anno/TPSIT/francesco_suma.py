def addizione(a, b):
    return a + b

def sottrazione(a, b):
    if a<b:
        print('Impossibile')
    else:
        return a - b

def moltiplicazione(a, b):
    return a * b

def divisione(a, b):
    if b==0:
        print('Impossibile')
    else:
        return a/b

print("Questa programma ti permette di eseguire calcoli tra due numeri")
n1 = int(input("Inserisci il primo valore: "))
n2 = int(input("Inserisci il secondo valore: "))

somma = addizione(n1, n2)
differenza = sottrazione(n1, n2)
prodotto = moltiplicazione(n1, n2)
quoziente = divisione(n1, n2)

somma2 = somma + differenza + prodotto + quoziente
print (somma2)