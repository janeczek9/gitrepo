/*
 * tekst.cpp
 * 
 * Copyright 2019  <>
 */

#include <iostream>

using namespace std;

#define R 100

int main(int argc, char **argv)
{
    char tekst[R];
    int i;
    int j = 1;
    cout << "Podaj zdanie: " << endl;
    cin.getline(tekst, R);
    for (i = 0; i < R ; i++){
        if(int(tekst[i]) == 32){
            j +=1;
        }
    }
    cout << "Ilość słów w tym zdaniu: "<< j << endl;
    return 0;
}



