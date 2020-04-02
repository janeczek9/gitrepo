/*
 * tab6.cpp
 */


#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char **argv)
{
	int i;
	int r = 20;
	int tablica[r];
	int min;
	int max;
	srand(time(NULL));
	for (i=0; i < r; i++) {
		tablica[i] = (rand()% 50);
		cout << setw(4) << tablica[i]<< " "; }
		if 
	
	cout << endl;
	return 0;
}

