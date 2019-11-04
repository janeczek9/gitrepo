/*
 * tab6.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{   
    int min;
    int max;
    int i;
    int r = 20;
    int tab[r];
    srand(time(NULL));
    for (i = 0; i < r; i++){
        tab[i] = rand() % 51;
        }
    min = tab[0];
    max = tab[0];

	for (i = 0; i < r; i++){
    if(min > tab[i]){
        min = tab[i];
        }
    }
    for (i = 0; i < r; i++){
    if(max < tab[i]){
        max = tab[i];
        }
    }
    cout << "największa wartość w tablicy jest równa: "<< max << endl;
    cout << "najmniejsza wartość w tablicy jest równa: "<< min << endl;

    
	return 0;
}

