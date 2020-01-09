/*
 * zlozonosc.cpp
 * 
 * Copyright 2020  <>
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    int i = 0;
    int n = 5;
    int tab[n] = {1, 2, 3, 4, 5};
    int x = 3;
    for (i = 0; i < n; i++) {
        if(tab[i] == x) {
            cout << i;
            return 0;
            }
        }
	cout << -1;
	return 0;
}

