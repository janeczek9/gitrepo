/*
 * zloznosc2.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	cout << "Podaj liczbe n" << endl;
	cin >> n;
	int silnia = 1;
	
	for (int i = 1; i <= n; i++) {
		silnia += silnia;
	}
	cout << "!" << n << " = " << silnia;
	return 0;
}

