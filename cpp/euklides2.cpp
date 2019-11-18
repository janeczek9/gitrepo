/*
 * euklides2.cpp
 * 
 * Copyright 2019  <>

 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{   
    int a = 0;
    int b = 0;
    int i = 0;
    cout << "Podaj dwie liczby: "<< endl;
    cin >> a >> b;
    while (a > 0)   {
        i ++;
        a = a % b;
        b = b - a;
        }
    cout << "NWD = " << b << endl;
    cout << "liczba powtórzeń = " << i << endl;
	return 0;
}

