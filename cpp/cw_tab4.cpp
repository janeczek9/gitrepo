/*
 * cw_tab4.cpp
 * 
 * Copyright 2019  <>

 */
#include <cstring>
#include <iostream>
using namespace std;

#define R 100

int main(int argc, char **argv)
{
    //~int j;
    //~for (j = 20 ; j > -1 ; j--)  {
        //~cout << j << " ";
        //~}

    char tekst[R];
    int i;
    cout << "Podaj wyraz: " << endl;
    cin.getline(tekst, R);
    
    for (i = strlen(tekst); i > -1 ; i--){
        cout << tekst[i];
        }
    return 0;
}
