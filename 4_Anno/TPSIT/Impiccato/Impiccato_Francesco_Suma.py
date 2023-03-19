import random
import draw

__name__


def main():
    paroleFacili = ['gioco', 'cibo', 'palla', 'scuola', 'animali']
    paroleDifficili = ['buongiorno', 'tavolino', 'municipio', 'computer', 'alfabeto']
    parola = " "   #contiene la parola scelta nella tupla
    parolaLet= " "  #contiene la lettera inserita dall'utente
    errore = 0     #memorizza il numero di errori
    scelta = 0     #memorizza la scelta per la difficoltà
    exit = True

    #scelta della difficoltà
    print("-------Gioco dell'Impiccato-------")
    print("Scegli la difficolta del gioco: ")
    while(exit!=False):
        scelta = int(input("Digita 1 per difficolta facile oppure digita 2 per difficoltà difficile: "))
        if scelta==1:
            parola = random.choice(paroleFacili)
            exit=False
        elif scelta==2:
            parola = random.choice(paroleDifficili)
            exit=False
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

    print("----Inizia il Gioco----")

    #inizia il gioco
    for a in range(0,6):
        parolaLet = input("Dimmi una parola: ")
        if (parola==parolaLet):
            print("parola indovinata")
            break
        else:
            errore = errore + 1
            print(f"Hai sbagliato hai {6-errore} tentativi")
            if(errore ==1):
                draw.primoErrore()
            elif (errore ==2):
                draw.secondoErrore()
            elif (errore ==3):
                draw.terzoErrore()
            elif (errore ==4):
                draw.quartoErrore()
            elif (errore ==5):
                draw.quintoErrore()
            elif (errore ==6):
                draw.sestoErrore()
                print("Peccato hai finito le tue possibilità, ritenta sarai più fortunato")
    
    print("Grazie di aver giocato, alla prossima")
            
    
if __name__ == "__main__":
    main()