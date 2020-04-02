/*
 * tab5.cpp
 * 
 * Copyright 2019 kl2ag2 <kl2ag2@ubu11>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
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
		cout << setw(4) << tablica[i]<< " "; }
	cout << endl;
	cout << "Podaj dowolną liczbę: ";
	cin >> n;
	if (n == tablica[r]) {
	cout << n << "wystepuje";
}
	else {
	 cout << n << "nie występuje";
}
	return 0;
}

