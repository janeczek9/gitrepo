/*
 * silnia.cpp
 * 
 * Copyright 2019  <>
 */



#include <iostream>
using namespace std;

float potega_it(float x, int n){
    float potega = 1;
    for (int i = 0; i < n; i++){
            potega = potega * x;
    }
    return potega;
}

float potega_re(float x, int n){
        if (n == 0)
            return 1;
        else
        return potega_re(x, n-1) * x;
}


int main(int argc, char **argv)
{
    float x;
    int n;
	cout << "Podaj podstawę: " << endl;
    cin >> x;
    cout << "Podaj wykładnik" << endl;
    cin >> n;
    cout << "Potęga: " << potega_it(x, n) << endl;
    cout << "Potęga: " << potega_re(x, n) << endl;
	return 0;
}

