#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py

# zdefiniuj klasę Samochod z nast. atrybutami i metodami:
# marka, np. Fiat
# model, np. Tipo
# rok produkcji, np. 2002
# metoda wiek(), która zwróci wiek samochodu w latach
from datetime import date
from osoba_obj import Osoba

class Kierowca(Osoba):
    
    __licznik = 0  # atrybut klasy, współdzielony przez obikety
    
    def __init__(self, imie, nazwisko, kategoria):
        super().__init__(imie, nazwisko)
        self.kategoria = kategoria
        Kierowca.__licznik += 1
        
    def __del__(self):
        Kierowca.__licznik -= 1
        

    @staticmethod # metoda statyczna
    def KierowcaLicz():
        return Kierowca.__licznik

class Samochod:
    
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rok = rocznik
        
    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rok
    
    
    
    
def main(args):
    #s1 = Samochod('Fiat', 'Tipo', 2000)
    #s2 = Samochod('Peugeot', '308', 2007)
    #print(s1.marka, s1.model, s1.wiek())
    #print(s2.marka, s2.model, s2.wiek(), s2.rok)
    
    k1 = Kierowca('Adam', 'Słodowy', 'B')
    #print(k1.imie, k1.kategoria)
    print(k1.KierowcaLicz())
    k2 = Kierowca('Ewa', 'Bąk', 'BC')
    print(k1.KierowcaLicz())
    k3 = Kierowca('Bartek', 'Dąb', 'BC')
    print(k1.KierowcaLicz())
    print(k2.KierowcaLicz())
    print(k3.KierowcaLicz())
    
    del(k2)
    del(k3)
    print(k1.KierowcaLicz())
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
