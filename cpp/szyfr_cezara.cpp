/*
 * szyfr_cezara.cpp
 */


#include <iostream>
using namespace std;


void male_litery(char tab[]) {
	int i = 0;
	while (tab[i] != '\0') {
		if ((int)tab[i] > 64 && (int)tab[i] < 91) {
			tab[i] = (char)((int)tab[i]+32);
		}
		i++;
	}
}

void szyfruj(char tab[], int k) {
	int i = 0;
	int kod = 0;
	while (tab[i] != '\0') {
		kod = (int)tab[i] + k;
		if (kod > 122) {
			cout << (char)(kod - 26);
		}
		else 
		tab[i] = (char)kod;
		i++;
	}
}

void deszyfruj(char tab[], int k) {
	int i = 0;
	int kod = 0;
	while (tab[i] != '\0') {
		kod = (int)tab[i] - k;
		if (kod < 96) {
			cout << (char)(kod + 26);
		}
		tab[i] = (char)kod;
		i++;
	}
}

int main(int argc, char **argv)
{
	int rozmiar = 30;
	char tab[rozmiar];
	cout << "Podaj tekst do zaszyfrowania: " << endl;
	cin.getline(tab, rozmiar);
	
	int klucz = 0;
	cout << "Podaj klucz: " << endl;
	cin >> klucz;
	klucz = klucz % 26;
	
	szyfruj(tab, klucz);
	//male_litery(tab);
	cout << tab << endl;
	
	deszyfruj(tab, klucz);
	cout << tab << endl;
	return 0;
}

