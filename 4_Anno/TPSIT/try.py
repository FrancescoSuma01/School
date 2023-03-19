
try:
    value = 10/0
    number = int(input('Inserisci un numero: '))
    print (number)
except ZeroDivisionError:
    print('Input non valido')
except ValueError:
    print('Input non valido')