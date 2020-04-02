/*
 * tekst.cpp
 */


#include <iostream>

#define ROZMIAR 100

using namespace std;

int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
	int i;
	int slowa = 1;
	cout << "Podaj zdanie:" << endl;
	// cin >> tekst;
	cin.getline(tekst, ROZMIAR);
	// cout << tekst;
	//for (i=0; i < ROZMIAR; i++) {
	//	cout << tekst[i];
	//}
	//cout << endl;

	i = 0;
	while (tekst[i] != '\0') {
		cout << tekst[i];
		i++;

	}
	cout << endl;

	for (int i=0; i < ROZMIAR ; i++) {
        if (' '== tekst[i]) {
            slowa++;
        }
	}
	cout << "To zdanie ma " << slowa << " słowa/słów";

	return 0;
}

