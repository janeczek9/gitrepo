/*
 * tab1.cpp
 */


#include <iostream>
using namespace std;
	
int main(int argc, char **argv)
{
	int i;
	int r = 5;
	int tablica[r], tablica2[r];
	int suma = 0;
	int suma2 = 0;
	cout << "Podaj 5 liczb: " << endl;
	for (i=0; i < r; i++) {
		cin >> tablica[i];
		suma += tablica[i];
	}
	
	cout << "Podaj kolejne 5 liczb: " << endl;
	for (i=0; i < r; i++) {
		cin >> tablica2[i];
		suma2 += tablica2[i];
	}
	if(suma > suma2) cout << "Tablica 1 większa od Tablicy 2";
	else if (suma < suma2) cout  << "Tablica 2 większa od Tablicy 1";
	else cout << "Tablice są równe!";
	
	return 0;
}

