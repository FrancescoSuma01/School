def riempiNewParola(parola, newParola):
    lenParola = len(parola)

    for let in parola:
        newParola[let].append(" ")

    newParola[0] = parola[0]
    newParola[lenParola]=parola[lenParola]

    for el in range(0,len(newParola)):
        print(newParola[el])


"""
    #riempe una lista con dei trattini al posto delle lettere presenti nella parola scelta
    for x in range(0, len(parola)):
        newParola.append["_"]

    #mette nella prima casella l'iniziale della parola e nella casella finale l'ultima lettera della parola
    newParola[0] = parola[0]
    newParola[len(newParola)] = parola[len(newParola)]

    #stampa la composizione della parola con l'iniziale e la lettera finale con i trattini
    print("La parola scelta è composta in questo modo: ")
    for b in range(0, len[newParola]):
        print(newParola[b]) """