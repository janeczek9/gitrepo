/*
 * parzyste.cpp
 * program powinien wydrukować liczby parzytse z przedziału [0, 100]
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n, m;
    {
        cout << "podaj przedział: ";
    }
    cin >> n >> m;
    for (n; n<=m; n++) {
        cout << n << " ";
    }
	return 0;
}

