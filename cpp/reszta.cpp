/*
 * reszta.cpp
 * 
 * Copyright 2019  <> 
 */


#include <iostream>
using namespace std;

int nominaly[100];
int liczbaNominalow;

void wczytajNominaly()  {
    cout << "podaj liczbę nominałów: ";
    cin >> liczbaNominalow;
    cout << "Podaj nominały w kolejności malejącej: " << endl;
    
    int i = 0;
    int nominal = 0;
    cin >> nominal;
    nominaly[i] = nominal;
    i++;
    while (i < liczbaNominalow)   {
        cin >> nominal;
        if (nominal > nominaly[i-1]) {
            cout << "Nominał większy od poprzedniego!"  << endl;
            continue;
            }
            nominaly[i] = nominal;
            i++;
        };
    
    //for(int i = 0; i < liczbaNominalow; i++)    {
        //cin >> nominaly[i];    
    //}
    
    for(int i = 0; i< liczbaNominalow; i++) {
        cout << nominaly[i] << " ";
        } 
        cout << endl;
    
    
}


int policzNominal(int n) {

    int liczbaBanknotow = 0;

    for (int i = 0; i < liczbaNominalow; i++)    {
        if (n > nominaly[i]) break;
        if (nominaly[i] == n)
            liczbaBanknotow += 1;
        }
        return liczbaBanknotow;
}


void znajdzReszte(int reszta)    {
    cout << "Wypłacene nominały; " << endl;
    int aktualnyNominal = 0;
    while (reszta > 0 && aktualnyNominal < liczbaNominalow) {
        cout << "reszta = " << reszta << endl;
        while (aktualnyNominal < liczbaNominalow && reszta < nominaly[aktualnyNominal])
        ++aktualnyNominal;
        int nominal = nominaly[aktualnyNominal];
        if (aktualnyNominal < liczbaNominalow && reszta >= nominal)   {
            int liczbaBanknotow = reszta / nominal;
            cout << "Dostępnych Nominałow" << policzNominal(nominal) << endl;
            reszta = reszta - liczbaBanknotow * nominal;
        }
    }
    if (reszta > 0)
        cout << "Reszta nie została wydana";
}

int main(int argc, char **argv)
{
    wczytajNominaly();
    int cena;
    int wplata;
    cout << "podaj cenę; ";
    cin >> cena;
    
    do {
        cout << "Podaj wpłatę; ";
        cin >> wplata;
    } 
    while (wplata < cena);  
    
    znajdzReszte(cena - wplata);

	
	return 0;
}

