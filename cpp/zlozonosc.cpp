/*
 * zlozonosc.cpp
 * 
 * Copyright 2020  <>
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)

{
    int n, i;
    cout << "Podaj wartość liczby n" << endl;
    cin >> n;
    i = 1;
    while (i <= n)  {
        cout << i << ", ";
        i += 2;
        }       
	return 0;
}

