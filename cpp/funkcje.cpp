/*
 * funkcje.cpp
 * 
 * Copyright 2019  <> 
 */


#include <iostream>
using namespace std;

void sumuj(int a, int b)
{
    cout << "Suma: "  << a + b << endl;
    
    
    }
    
void podziel(int a, int b)
{
    if(b != 0)
        cout<< "Wynik dzielenia: " << (float)a / b << endl;
    else
        cout << "Błąd" << endl;
    }
    
    
int pomnoz(int a, int b) 
{
    return a * b;
    }

int roznica(int a, int b)
{
    return a - b;
    }

int main(int argc, char **argv)
{
	int a, b;
    cout << "Podaj liczby:" << endl;
    cin >> a >> b;
//    sumuj(a, b);
//    podziel(a, b);

    cout << "Iloczyn: " << pomnoz(a, b) << endl;
    int wynik;
    wynik = pomnoz(a, b);
    cout << "Iloczyn: " << wynik << endl;
	
    cout << "Wynik odejmowania: " << roznica(a, b) << endl;
    
    return 0;
}

