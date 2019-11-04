/*
 * tab4.cpp
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
    int r = 0;
    int a = 0;
	int tab[W][K];
    cout << "Podaj różnicę liczb w tablicy ";
    cin >> r;
    cout << "Podaj wartość pierwszego elementu ";
    cin >> a;
    for (i = 0; i < W; i++){
        for(j = 0; j < K; j++){
		tab[i][j] = a;
        a += 1;
        tab[i][j] = a;
        cout << tab[i][j] << " ";
        }}
    return 0;
}
