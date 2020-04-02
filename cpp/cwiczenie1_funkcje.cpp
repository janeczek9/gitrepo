/*
 * zadanie_funkcje.cpp
 *
 */


#include <iostream>

using namespace std;

int staz = 1;
float zarobek = 1000;

void drukuj() {
    cout << "Pracujesz " << staz << " lat i zarabiasz " << zarobek << endl;
}

<<<<<<< HEAD
void awans(int &staz, float &zarobek) {
    staz = staz + 1;
=======
void awans() {
    staz += 1;
>>>>>>> c67dffcd955064b3bb8ebd5727ff6623788e5d2b
    zarobek = zarobek * 1.1;
}

int main(int argc, char **argv)
{   int lata;
    cout << "Podaj staz w latach: " << endl;
    cin >> lata;
	awans(staz, zarobek);
    drukuj();

	return 0;
}
