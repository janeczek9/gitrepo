/*
 * horner.cpp
 * 
 * Copyright 2019  <>
 */
 
using namespace std;
#include <iostream>


float horner_it(int n, float tbwsp[], float x){
    float wynik = tbwsp[0];    
    for (int i = 1; i < n + 1; i++){
        wynik = wynik * x + tbwsp[i];
        
    }
    cout << "Wynik: " << wynik;
    return wynik;
}

void drukujw(int n, float tbwsp[]) {
    int i = 0;
    for(i = 0; i < n; i++){
        cout << tbwsp[i] << "x^" <<  n-i << " + ";
    }	
    
    cout << tbwsp[i] << endl;
    }


int main(int argc, char **argv)
{
    int n = 0;  // stopień wielomianu
    float *tbwsp;   // tablica współczunników
    float x;    // argument
    cout << "Podaj stopień " << endl;
    cin >>  n;
    tbwsp = new float [n+1];
    cout << "Podaj argument: " << endl;
    cin >>  x;
    
    for (int i=0; i<n+1; i++)   {
        cout << "Współczynnik przy potędze " << n - i << ": " << endl;
        cin >> tbwsp[i];
        }
	
    cout << "Wartość wielomianu o postaci: ";
    drukujw(n, tbwsp);
    horner_it(n, tbwsp, x);
	return 0;
}

