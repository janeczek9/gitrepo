#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palindromy.py

import os

def czy_palindrom(tekst):
    ile = len(tekst)
    for i in range(ile // 2):
        if (tekst[i]) != (tekst[-i-1]):
            return False
    return True
            
def czytaj_dane(plik):
    if not os.path.exists(plik):
        print('Plik niedostępny!')
        return False
    teksty = []
    with open(plik, "r") as f:
        for linia in f:
            teksty.append(linia.strip())
        return teksty
        

def main(args):
    # tekst = input('Podaj tekst: ')
    teksty = czytaj_dane('dane01.txt')
    ile = 0
    for i in range(len(teksty)):
        if czy_palindrom(teksty[i]):
            ile += 1
        else:
            continue
<<<<<<< HEAD
=======
    print (ile)
>>>>>>> b2c5eaa61a63773b3c16d6628ac8be6eaf13da65
    # ~if czy_palindrom(tekst):
        # ~print('To palindrom! ')
    # ~else:
        # ~print('To nie jest palindrom! ')
    print (ile)
    return 0
#pet;la for dla kazego elementu z listy teksty wywolac ffunkcje czy palindroam jesli zwroci prawde tp wyswietlic ile
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
