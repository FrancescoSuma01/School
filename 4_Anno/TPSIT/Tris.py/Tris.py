from re import X


import game

gamer1 = [" ","X"]
gamer2 = [" ","O"]

def main():
    print("-----Tic Tac Toe-----")
    print("Per inserire i segni nella tabella basta digitare il numero della casella corrispondente: ")
    game.exTable()
    game.line()
    gamer1[0] = input("Primo giocatore(X) inserisci il tuo nome: ")
    gamer2[0] = input("Secondo giocatore(O) inserisci il tuo nome: ")
    game.line()
    game.tableName(gamer1, gamer2)
    game.line()
    print("")


if __name__ == "__main__":
    main()