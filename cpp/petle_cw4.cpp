/*
 * parzyste.cpp
 * program powinien wydrukować liczby parzytse z przedziału [0, 100]
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int i;
    for(i = 10; i < 100; i+=2)
    if(i % 3 == 0){
    cout << i << " ";
    }

	return 0;
}

