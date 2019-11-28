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



int znajdzReszte(int reszta, nominaly[])    {
    cout << "Wypłacene nominały; " << endl;
    int aktualnyNominal = 0;
    
    while (reszta > 0 && aktualnyNominal < liczbaNominalow) {
        cout << "reszta = " << reszta << endl;
        for(i = 0 ; i < liczbaNominalow; i++)   {
            if(nominaly[i] > aktualnyNominal)
            if(nominaly[i] > aktualnyNominal)
            }
        }
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
    } while (wplata < cena);
    
    znajdzReszte(wplata - cena);
    
	
	return 0;
}

