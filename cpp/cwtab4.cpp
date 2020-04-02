/*
 * cwtab4.cpp
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
	
	//cout << strlen(tablica) << endl;
	
	for (int i = strlen(tablica); i>=0; i--) {
		cout << tablica[i];
	}
	
	return 0;
}

