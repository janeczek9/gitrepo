/*
 * petlecw1.cxx
 * 
 * Copyright 2019  <>

 */

using namespace std;
#include <iostream>

int main(int argc, char **argv)
{
    int liczba = 0;
	int suma = 0;
    while (suma <= 75) {
    cout << "Podaj liczbę" << suma << endl;
    cin >> liczba; 
    suma += liczba;
}
    cout << "suma liczba = " << suma << endl;
    
    
    
	return 0;
}

