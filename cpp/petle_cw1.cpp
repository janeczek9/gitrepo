/*
 * parzyste.cpp
 * program powinien wydrukować liczby parzytse z przedziału [0, 100]
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    float suma = 0;
    float a = 0;
	while(suma <= 75) {
        cout << "podaj liczbę" << endl;
        cin >> a;
        suma = suma + a;
    }
    cout << suma << endl;
	return 0;
}

