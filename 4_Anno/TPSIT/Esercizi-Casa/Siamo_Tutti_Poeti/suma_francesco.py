aggettivi = ["","bella","bello","simpatica","simpatico","giocosa","giocoso","piccola","piccolo","grande","migliore"]   #Lista con aggettividi cui fare il confronto
aggettiviTreLett = ["","lla","llo","ica","ico","osa","oso","ola","olo","nde","ore"]#contiene le ultime tre lettere degli aggettivi presi come esempio
aggettivoTreLett=""                                #contiene le ultime tre lettere dell'aggettivo letto
indice = len(aggettivi)+1                                        #indice per memorizzare l'aggettivo corrispondente
exit = True                                         #variabile boolena per l'uscita dal ciclo while iniziale
risposta = "hello"                                  #variabile stringa contenente la risposta presa dopo la richiesta di uscita/continuazione del while

def confronto():
    index = 0

    for x in range(0, len(aggettiviTreLett)):
        if aggettiviTreLett[x]==aggettivo[-3:]:
            index = x

    return index

while (exit == True):

    aggettivo = input("Inserisci l'aggettivo da confrontare: ")
    aggettivo.lower()                                #trasforma tutta la stringa in minuscolo 
    indice = confronto()
    
    if (indice == 0):
        print ("Non è stato trovato nessun aggettivo che fa rima con la parola inserita")
    else:
        aggettivo = aggettivi[indice]
        print (f"La parola inserita fa rima con: {aggettivo}")

    while (risposta!="si" and risposta!="no"):
        risposta = input("Vuoi eseguire nuovamente il programma? si/no")
        risposta.lower()          #trasforma tutta la stringa in minuscolo 
        if risposta=="si":
            exit=True
        elif risposta=="no":
            exit=False