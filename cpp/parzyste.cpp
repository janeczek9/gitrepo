/*
 * parzyste.cpp
 * program powinien wydrukować liczby parzytse z przedziału [0, 100]
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	//~[0 - 100]
    int i = 0;
    for(i = 0;i <= 100; i += 2) {
        cout << i << endl;
    }
	return 0;
}

