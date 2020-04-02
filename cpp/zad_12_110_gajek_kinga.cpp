/*
 * zad_12_110.cpp
 */


#include <iostream>
using namespace std;

void zamien(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void bubble_sort(int tab[], int n) {
	int ile = 0;
	for (int i=n-1; i>0; i--) {
		cout << "Indeks i=" << i << endl;
		for (int j=0; j<i; j--) {
			cout << "Indeks j=" << j << " ";
			if (tab[j] < tab[j-1]) {
				zamien(tab[j], tab[j+1]);
				ile++;
			}
		}
		cout << endl;
	}
	cout << "Zamian: " << ile << endl;
}

int dzielnik(int p) {
	for (int i=1; i<=p; i++) {
		if (p%i==0) cout << i << " ";
	}
	return 0;
}

int main(int argc, char **argv)
{
	int tab2[50];
	int p;
	cout << "podaj liczbę całkowitą p: " << endl;
	cin >> p;
	dzielnik(p);
	cout << endl;
	int n = dzielnik(p);
	cout << endl;
	bubble_sort(tab2, n);
	return 0;
}

