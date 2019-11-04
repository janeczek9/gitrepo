/*
 * tab5.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{   
    int liczba;
    int i;
    int b = 0;
    int r = 20;
    int tab[r];
    srand(time(NULL));
    for (i = 0; i < r; i++){
        tab[i] = rand() % 21;
        }
        
    cout << "Podaj Liczbę od 0 do 20" << endl;
        cin >> liczba;
    
    for (i = 0; i < r; i++){
    if (tab[i] == liczba){
        b += 1;
    }}
    cout << "Liczba trafień jest równa "<< b << endl;
	return 0;
}

