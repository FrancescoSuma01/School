frase = input("Digita una parola in lettera minuscola: ")
key = int(input("Digita la chiave (intero positivo < 26): "))
 
newFrase = []
 
for ch in frase:
    n = 0
    ordValue = ord(ch)                            #prende il valore in ASCII
 
    if ordValue <= 120:
        newFrase.append(ordValue + key)
    else:
        newFrase.append(ordValue - (26 - key))
    n = n + 1
 
print("La parola criptata è: ")
 
for n in newFrase:
    lettera = chr(n)
    print(lettera)