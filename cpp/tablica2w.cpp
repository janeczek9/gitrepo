/*
 * tablica2w.cpp
 * 
 * Copyright 2019  <>

 */

#include <iomanip>
#include <iostream>
using namespace std;


#define N   10
#define M   10

int main(int argc, char **argv)
{
    int tab2w[N][M];
    int i, j;
    
    srand(time(NULL));  // inicjacja generatora liczzb pseudolosowych
    
    for (i=0; i < N; i++)   {
        // cout << "=====Tablica " << i << "=====" << endl;
        for (j=0; j < M; j++)   {
            // cout << i << "-" << j << endl;
        tab2w[i][j] = i * j;
        cout << setw(4) << tab2w[i][j] << " ";
        }
    }
    
	return 0;
}

