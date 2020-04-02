/*
 * hex2dec.cpp
 */


#include <iostream>
#include <cstring>

using namespace std;

int hex2dec (char tab[]) {
	int len = strlen(tab);
	int temp = 0;
	int szes = 1;
	for (int i=len-1; i>=0; i--) {
		if (tab[i]>='0' && tab[i]<='9') {
			temp += (tab[i] - 48) * szes;
			szes = szes * 16;
		}
        else if (tab[i]>='A' && tab[i]<='F') {
         temp += (tab[i] - 55)*szes;
         szes = szes*16;
		}
    }
   return temp;
}

int main(int argc, char **argv)
{
	int r = 4;
	char tab[r];
	cout << "Podaj czterocyfrowa liczbe szesnastkową" << endl;
	cin >> tab;
	cout << tab;
	hex2dec (tab);
	return 0;
}

