/*
 * euklides.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;


int NWD_re1(int a, int b)   {
    if (a != 0)
        return NWD_re1(a % b, b - (b % a));
    else
        return b;
}


int NWD_re2(int a, int b){
    if(b != 0)
        return NWD_re2(b, a % b);
    else 
        return a;
}


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

