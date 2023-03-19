""" 
@file suam_francesco_fibonacci.py
@date 11-12-2021
@author Francesco Suma 4BIA

La successione di Fibonacci parte da 
F(0)=0
F(1)=1
F(n)=F(n-1)+F(n-2)
"""


def fibonacci(n):
    if n > 1:
        return fibonacci(n-1) + fibonacci(n-2)
    return n

print("Questo programma ti permette di calcolare i primi n numeri della successione di fibonacci inseriti da tastiera")
n = int(input("Inserisci quanti valori vuoi che vengano stampati: "))


for i in range(n):
    print(f"{i+1}) {fibonacci(i)}")