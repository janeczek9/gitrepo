/*
 * tablica.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;



void pobierzoceny(int t[], int r)    {
    
    cout << "Podaj " << r << " ocen: " << endl;
    int i;
    for (i = 0; i < r; i++)  {
        cin >> t[i];
    }
}

void drukujTab(int t[], int r)    {
    cout << "twoje oceny: "<< endl;
    int i;
    for (i = 0; i < r; i++)  {
        cout << t[i] << ", ";
    }
    cout << endl;
}

float srednia(int t[], float r)   {
    int suma = 0;
    float s;
    int i;
    for (i = 0; i < r; i++) { 
        suma += t[i];
        
    }
        s = suma / r;
        cout << "Srednia twoich ocen to: " << s << endl;
    return 0;
    }

int main(int argc, char **argv)    {
    cout << "Ile ocen podasz? " << endl;
    int rozmiar;
    cin >> rozmiar;
    int tablica[rozmiar];
    pobierzoceny(tablica, rozmiar);
    drukujTab(tablica, rozmiar);
    srednia(tablica, rozmiar);
	return 0;
}

