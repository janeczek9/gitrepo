#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py

def pokaz_liste():
    print('''Lista działań:
          +  – dodawanie
          -  – odejmowanie
          *  – mnożenie
          /  – dzielenie
          // – dzielenie całkowite
          %  – dzielenie modulo
          ^  – potęgowanie
          !  – silnia
          sin – sinus
          cos – cosinus
          koniec – wyjście z programu
          ''')
def pobierz_liczbe(kominikat='Pobierz liczbę: '):
    a = intput(komunikat)
    if a.isdigit():
        return int(a)
    return False

def dziel(a, b):
    if b != 0:
        return a / b
    else:
        print('Błąd dzielenia przez 0')
        
def suma(a, b):
	return a + b
	
def roznica(a, b):
	return a - b

def iloczyn(a, b):
	return a * b
	
def main(args):
    pokaz_liste()
    while True:
        d = input("Wybierz działanie: ")
        if d == '+':
			a = pobierz_liczbe('Podaj liczbę: ')
			b = pobierz_liczbe('Podaj liczbę: ')
			if a and b:
				wynik = suma(a, b)
				if wynik:
					print('{} + {} = {}'.format(a, b, wynik))
        elif d == '-':
			a = pobierz_liczbe('Podaj liczbę: ')
			b = pobierz_liczbe('Podaj liczbę: ')
			if a and b: 
				wynik = roznica(a, b)
				print('{} - {} = {}'.format(a, b, wynik))
            
        elif d == '*':
			a = pobierz_liczbe('Podaj liczbę: ')
			b = pobierz_liczbe('Podaj liczbę: ')
			if a and b:
				wynik = iloczyn(a, b)
				print('{} * {} = {}'.format(a, b, wynik))
        elif d == '/':
            a = pobierz_liczbe('Podaj dzielną: ')
            b = pobierz_liczbe('Podaj dzielnik: ')
            if a and b:
                wynik = dziel(a, b)
                if wynik:
                    print('{} / {} = {}'.format(a, b, wynik))
        elif d == '//':
            pass
        elif d == '%':
            pass
        elif d == '^':
            pass
        elif d == '!':
            pass
        elif d == 'sin':
            pass
        elif d == 'cos':
            pass
        elif d == 'l':
            pokaz_liste()
        elif d == 'koniec':
            return 0
        else:
            print("Błędny wybór!")
    return 0
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
