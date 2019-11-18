/*
 * euklides.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{   
    int a = 0;
    int b = 0;
    int i;
    cout << "Podaj dwie liczby: "<< endl;
    cin >> a >> b;
    while (a != b) {
        i ++;
        if(a > b)   {
            a = a-b;
        }
        else {
            b = b-a;
            }
        }
    cout << "NWD = " << a << endl;
    cout << "liczba powtórzeń = " << i << endl;

	return 0;
}

