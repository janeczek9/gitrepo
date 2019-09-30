/*
 * petle2.cpp
 * 
 * Copyright 2019  <>

 */


#include <iomanip>
#include <iostream>

using namespace std;

void prostokat(int x, int y, char z){
    int i, j;
    for(i = 1; i <= x; i++) {
        for(j = 1; j <= y; j++) {
            cout << z;
            }
            cout << endl;
        }
    }

void prostokat2(int x, int y, char z){
    int i, j;
    for(i = 1; i <= x; i++) {
        for(j = 1; j <= y; j++) {
            if(i == 1 || i == x)  
              cout << z;
          
            else if (j == 1 || j == y)    
            cout << z;
        else 
        cout << " ";
    }
    cout << endl;
    }
}



void drukujTabliczke(int x, int y)  {
    int i, j;
    for(i = 1; i <= x; i++)  {
        for (j = 1; j <= y; j++) {
            cout << setw(4) << i * j<< " ";
        }
            cout << endl;
    }
    
}




int main(int argc, char **argv)
{ 
    int a, b;
    char znak;
    cout << "Podaj rozmiar x, y: ";
    cin >> a >> b;
    cout << "Podaj znak: ";
    cin >> znak;
    prostokat(a, b);
    cout << endl;
    prostokat2(a, b);
	return 0;
}

