"""
  @file suam_francesco_password.py
  @date 11-12-2021
  @author Francesco Suma 4BIA
"""

name = str.capitalize(" ")
surname = str.capitalize(" ")
year = str(" ")
day = str(" ")
password = []
exit = True

def stringName(name):

    password.append(name[0])
    password.append(name[1])
    password.append(name[2])
    
def stringSurname(surname):
    password.append(surname[0])
    password.append(surname[1])
    password.append(surname[2])

def simbolDay(day):
    if (day == "Lunedi" or day == "lunedi"):
        password.append('*')
    elif(day == "Martedi" or day == "martedi"):
        password.append('#')
    elif(day == "Mercoledi" or day == "mercoledi"):
        password.append('=')
    elif(day == "Giovedi" or day == "giovedi"):
        password.append('+')
    elif(day == "Venerdi" or day == "venerdi"):
        password.append('-')
    elif(day == "Sabato" or day == "sabato"):
        password.append('*')
    elif(day == "Domenica" or day == "domenica"):
        password.append('/')
    

print ("Questo codice ti genera una password personalizzata e sicura in base a dati da te inseriti")
name = str.capitalize(input("Come ti chiami(se hai due nomi inserisci solo il primo nome): "))
stringName(name)
print("-----------------------------------------------------")
surname = str.capitalize(input("Qual'è il tuo cognome: "))
stringSurname(surname)
print("-----------------------------------------------------")
year = input("In che anno sei nat*: ")
password.append(year[2])
password.append(year[3])
print("-----------------------------------------------------")
day = input("Che giorno della settimana è oggi: ")
simbolDay(day)
print("-----------------------------------------------------")
print (f"La Password è: {password[0]}{password[1]}{password[2]}{password[3]}{password[4]}{password[5]}{password[6]}{password[7]}{password[8]}")