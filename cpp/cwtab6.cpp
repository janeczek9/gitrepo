/*
 * cwtab6.cpp
 */


#include <iostream>
#include <cstring>
 
 using namespace std;
 
#define MAX_R 100

int main(int argc, char **argv)
{
	char tablica[MAX_R];
	int r = strlen(tablica);
	
	cout << "Podaj wyraz:" << endl;
	cin.getline(tablica, MAX_R);
	
	//cout << strlen(tablica) << endl;
	
	for (int i = 0; i < r; i++) {
		cout << tablica[i];
	}
	
	return 0;
}

