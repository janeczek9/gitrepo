/*
 * tablica.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int rozmiar = 5;
    int tablica[19];
    int i = 0;
    cout << "Podaj 20 liczb:" << endl;
    for (i = 0; i<rozmiar; i++)  {
        cin >> tablica[i];
        }
        for (i = 4; i>=0; i--)  {
        cout << tablica[i] << " ";
        }
    
	return 0;
}

