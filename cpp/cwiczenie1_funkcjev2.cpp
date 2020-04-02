/*
 * cwiczenie1_funkcje.cpp
 */


#include <iostream>

using namespace std;

int staz = 1;
float zarobek = 1000;

void drukuj() {
    cout << "Pracujesz " << staz << " lat i zarabiasz " << zarobek << endl;
}

void awans() {
    staz += 1;
    zarobek = zarobek * 1.1;
 }

int main(int argc, char **argv)
{
    int lata = 0;
    cout << "Podaj staz pracy w latach: " << endl;
    cin >> lata;
    for(int i = 1; i < lata; i++){
    awans();
    drukuj();
    }

	return 0;
}

