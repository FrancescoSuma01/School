"""
    @author: francesco suma
    @classe 4BIA
    @esecizio: gestione delle stringhe v1.0
    @file: string_francesco_suma
"""

#blocco di dichiarazione
vocali = 0                  #conta il numero di vocali
frase = ""                  #legge la frase
fraseMod = []               #vettore per inserire la frase da modificare 
lettere = [0, 0, 0, 0, 0]   #vettore per contare la presenza della singola vocale
nlettere = 0            #conte il numero  dilettere presenti all'interno della frase
media = 0.0                 #calcolo della media

def stampaLista():
    print('Le vocali sono presenti rispettivamente:')
    print(f'a = {lettere[0]}')
    print(f'e = {lettere[1]}')
    print(f'i = {lettere[2]}')
    print(f'o = {lettere[3]}')
    print(f'u = {lettere[4]}')


frase = input("Inserisci una frase: ")

#for che scorre la frase presente in 'frase' e conta quante vocali ci sono in 'vocali' ed incrementa la casella della lista in base alla vocale
for x in frase:
    if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u' or x == 'A' or x == 'E' or x == 'I' or x == 'O' or x == 'U' ):
        vocali += 1
        if (x == 'a' or x == 'A'):
            lettere[0]+=1
            fraseMod.append('*')
        elif (x == 'e' or x == 'E'):
            lettere[1]+=1
            fraseMod.append('*')
        elif (x == 'i' or x == 'I'):
            lettere[2]+=1
            fraseMod.append('*')
        elif (x == 'o' or x == 'O'):
            lettere[3]+=1
            fraseMod.append('*')
        elif (x == 'u' or x == 'U'):
            lettere[4]+=1
            fraseMod.append('*')
    else:    
        fraseMod.append(x)

    nlettere += 1

stampaLista()

media = nlettere / vocali

print(f'La media della presenza delle vocali è: {media}')
print(f"Le vocali sono {vocali}")