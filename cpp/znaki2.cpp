/*
 * znaki.cpp
 * 
 * Copyright 2019  <>
 * ZNAKIEM KOŃCZĄCYM TABLICĘ ZNAKOWĄ JEST \0
 */


#include <iostream>

using namespace std;

void ascii(){
    int i = 0;
    for (i = 65; i<91; i++){
        cout << i <<" - "<<char(i) << endl;
    }
}

void litery2liczby(char tabzn[], int rozmiar){
    int i = 0;
    for (i = 0; i<rozmiar; i++){
        cout << tabzn[i] <<" - "<<(int)tabzn[i] << endl;
    }
    }

void koduj(char tabzn[], int rozmiar = 28){
    int i = 0;
    for (i = 0; i<rozmiar; i++){
        cout << (int)tabzn[i] << ",";
    }
    }

void odkoduj (int tabli[], int rozmiar= 28 ){
    int i = 0;
    for (i = 0; i<11; i++){
        cout <<(char)tabli[i] ;
    }
    }

int main(int argc, char **argv)
{
    int rozmiar = 28;
    //char napis[rozmiar] = "Ala ma kota!";
    //ascii();
    //cout << endl;
    //litery2liczby(napis, rozmiar);
    char napis2[28] = "Twoj stary pijany i ty tez";
    koduj(napis2, rozmiar);
    cout<< endl;
    int napis3[28] = {4,119,111,106,32,115,116,97,114,121,32,112,105,106,97,110,121,32,105,32,116,121,32,116,101,122,0,0};
    odkoduj(napis3, rozmiar);
    return 0;
}
