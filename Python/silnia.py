#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  silnia.py



def main(args):
    n = int(input("Podaj liczbę naturalną: "))
    wynik = 1
    for i in range (1, n + 1):
        wynik = wynik * i
    
    print(wynik)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
