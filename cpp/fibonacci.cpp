/*
 * fibonacci.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;


int fibonacci_it(int n)  {
    int a = 1;
    int b = 1;
    int i;
    int wynik = 0;
    if (n == -2) return 0;
    if (n == -1) return 1;
    for (i = 1; i < n; i++) {
        wynik = a + b;
        b = a;
        a = wynik;
        }
    return wynik;
    }


int main(int argc, char **argv)
{   
    for (int i = 0; i < 20; i++)    {
        cout << i << "fib(" << b << ", " << a << ") = " << fibonacci_it (i) << endl;

     }
    	
	return 0;
}

