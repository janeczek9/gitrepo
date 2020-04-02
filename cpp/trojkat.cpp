/*
 * trojkat.cpp
 *
 * Napisz program, który pobiera od użytkownika trzy liczby i sprawdza, czy da się z nich zbudować trójkąt.
 * Program powinien wyprowadzić odpowiedni komunikat.
 * Jeśli da się zbudować trójkąt, sprawdź, czy to trójkat prostokątny.
 * Wyprowadź odpowiedni komunikat.
 *
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    float bok1;
    cout << "Podaj pierwszy bok: ";
    cin >> bok1;
    float bok2;
    cout << "Podaj drugi bok: ";
    cin >> bok2;
    float bok3;
    cout << "Podaj trzeci bok: ";
    cin >> bok3;
    if ((bok1 + bok2 > bok3) && (bok1 + bok3 > bok2) && (bok2 + bok3 > bok1)) cout << "To jest trojkat." << endl;
        else cout << "To nie jest trojkat." << endl;
    if ((bok1 * bok1 + bok2 * bok2 ==  bok3 * bok3) || (bok1 * bok1 + bok3 * bok3 ==  bok2 * bok2) || (bok2 * bok2 + bok3 * bok3 ==  bok1 * bok1)) cout << "To jest trojkat prostokatny.";
        else cout << "To nie jest trojkat prostokatny.";
	return 0;
}

