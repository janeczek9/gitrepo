#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  losuj.py
from random import randint

def losuj(liczby, ile, zakres):
    while ile:
        print(randint(0, zakres))
        liczba = randint(0, zakres)
        if not liczby.count(liczba):
            liczby.append(liczba)
            ile -= 1
        
        
def pobierz_liczbe(k='Podaj liczbę'):
    a = input(k)
    if a.isdecimal():
        return int(a)
    return False
    
def pobierz_typy(typy, ile, zakres):
    while ile:
        a = pobierz_liczbe('Podaj typ: ')
        if  type(a) == bool or a > zakres:
            print("Błędne dane!")
            continue
        if a not in typy:
            typy.add(a)
            ile -= 1


def main(args):
    ile = pobierz_liczbe('Ile liczb? ')
    zakres = pobierz_liczbe('Gurny zakres? ')
    if type(ile) == bool or type(zakres) == bool:
        print("Błędne dane!")
        return 0
    liczby = [] #pusta lista
    typy = set() #pusty zbiór
    
    losuj(liczby, ile, zakres)
    pobierz_typy(typy, ile, zakres)
    print(liczby)
    
    wynik = set(liczby) & typy
    print("Odgadnięto: {}".format(len(wynik)))
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
