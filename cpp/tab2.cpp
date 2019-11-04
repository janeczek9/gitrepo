/*
 * tab2.cpp
 * 
 * Copyright 2019  <>

 */


#include <iostream>
using namespace std;

    #define W	5
    #define K	10
    
    
int main(int argc, char **argv)
{   
    int i, j;
    int z = 0;
	int tab[W][K];
    cout << "Podaj zakres liczb które bedziemy losować: ";
    cin >> z;
    srand(time(NULL));
    for (i = 0; i < W; i++){
        for(j = 0; j < K; j++){
		tab[i][j] = rand() % z+1;
        cout << tab[i][j] << " ";
        }}
    return 0;
}

