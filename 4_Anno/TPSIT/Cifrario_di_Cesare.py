alfabeto = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
newFrase = []
lettera = " "
frase = ""
indice = 0

frase=input("Inserisci la frase da codificare: ")
for x in frase:
    for y in range(0, len(alfabeto)):
        if x=="x":
            newFrase.append("a")
        elif x=="z":
            newFrase.append("b")
        elif (x==alfabeto(y)):
            indice = y+2
            lettera=alfabeto(indice)
            newFrase.append(lettera) 
        elif(x==" "):
            newFrase.append(" ")

for w in range(0, len(newFrase)):
    print(newFrase(w))