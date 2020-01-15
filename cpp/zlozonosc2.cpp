/*
 * zlozonosc2.cpp
 * 
 * Copyright 2020  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cout << "Podaj wartość liczby n" << endl;
    cin >> n;
	int silnia = 1;
    for (int i = 1; i <= n; i++){
    silnia = silnia * i;    
    }
    cout << "slinia = " << silnia;
	return 0;
}

