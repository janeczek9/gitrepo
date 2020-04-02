/*
 * cwtab5.cpp
 */


#include <iostream>
#include <cstring>

#define MAX_R 100

using namespace std;

int main(int argc, char **argv)
{
	char tablica[MAX_R];
	cout << "Podaj wyraz:" << endl;
	cin.getline(tablica, MAX_R);
	int r = strlen(tablica);
	//cout << strlen(tablica) << endl;
	
	for (int i = 0; i < r; i ++) {
		if (64 < int(tablica[i]) && int(tablica[i]) < 91) {
			tablica[i] += 32;
			cout << char(tablica[i]); }
		if (96 < int(tablica[i]) && int(tablica[i]) < 123) {
			tablica[i] -= 32;
			cout << char(tablica[i]); }
	}
	
	return 0;
}

