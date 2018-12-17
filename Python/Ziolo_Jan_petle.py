#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  zadanie_na_lekcji.py

def cw1():
    suma = 0
    liczba = int(input("Podaj liczbę: "))
    while suma < 75:
        suma = suma + liczba
        print(suma)
        liczba = int(input("Podaj liczbę: "))
        
    return 0 

    
def cw2():
    n = int(input("Podaj zakres dolny: "))
    m = int(input("Podaj zakres górny: "))
    for i in range(n, m):
        print("{}".format(i), end=' ')
    return 0
    
def cw3():

    return 0

def main(args):
    cw1()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
