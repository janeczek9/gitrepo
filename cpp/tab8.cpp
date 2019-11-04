/*
 * tab8.cpp
 * 
 * Copyright 2019  <>

 */

#include <iostream>
using namespace std;

    #define W	5
    #define K	7
    
    
int main(int argc, char **argv)
{   
    int min;
    int i, j;
	int tab[W][K];
    srand(time(NULL));
    for (i = 0; i < W; i++){
        for(j = 0; j < K; j++){
        tab[i][j] = rand() % 10;
        }}
        
    
	for (j = 0; j < K; j++){
        for (i = 0; i < W; i++){
    if(min > tab[i][j]){
    min = tab[i][j];
        }    
    }
    cout << "Najmniejsza Wartość w " << j + 1 << " kolumnie jest równa: "<< min << endl;
}

    return 0;
}

