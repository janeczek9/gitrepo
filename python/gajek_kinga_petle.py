#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  gajek_kinga_petle.py
#  
def cw1():
    suma = 0
    while suma <= 75:
        liczba = int(input("Podaj liczbę: "))
        suma += liczba
    print(suma)
        
def cw2():
    suma = 0
    n = int(input("Podaj dolny zakres: "))
    m = int(input("Podaj górny zakres: "))
    for i in range(n, m + 1):
        print(i, end = " ")

def cw3():
    n = int(input("Liczba: "))
    for i in range(n + 1):
        print(i*i)


def main(args):
    
    cw3()
    return 0
    
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
