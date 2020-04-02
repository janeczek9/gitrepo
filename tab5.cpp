/*
 * tab5.cpp
 */


#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
	int i;
	int r = 20;
	int tablica[r];
	int n;
	srand(time(NULL));
	for (i=0; i < r; i++) {
		tablica[i] = (rand()% 20);
		cout << setw(4) << tablica[i]<< " ";
	}
	cout << endl;
	cout << "podaj liczbę: " << endl;
	cin >> n;
	if (n == tablica[i]) {
		cout << n << "występuje";
	}
	return 0;
}

