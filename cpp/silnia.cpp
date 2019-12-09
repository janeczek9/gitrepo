/*
 * silnia.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
#using namespace std;


long int silnia_it(int n){
    long int silnia = 1;
    for (int i = 2; i < n +1; i++){
            silnia = silnia * i;
    }
    return silnia;
}


long int silnia_re(int n){
        if (n ++ 0)
            return 1;
        else
        return silnia_re(n-1) * n;
}


int main(int argc, char **argv)
{
	cout << "Podaj liczbe naturalną: " << endl;
    cin >> n;
    cout << silnia_it(n) << endl;
    cout << silnia_re(n) << endl;
	return 0;
}

