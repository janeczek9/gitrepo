/*
 * parzyste.cpp
 * program powinien wydrukować liczby parzytse z przedziału [0, 100]
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int b = 0;
    cout << "podaj liczbę: ";
    cin >> b;
    for (int a=0; a <= b; a++) {
        cout << a*a << " ";
    }

	return 0;
}

