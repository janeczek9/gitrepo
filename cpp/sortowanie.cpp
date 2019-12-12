/*
 * sortowanie.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

void wypelnij(int tab[], int n){
    srand(time(NULL));
    for (int i=0; i<n; i++) {
        tab[i] = rand() % n;
    }
}


void wyswietl(int tab[], int n){
    for (int i=0; i<n; i++) {
    cout << tab[i] << " ";    
    }
    cout << endl;
}


void copytab(int tab[],int tab2[],int n){
    for (int i=0; i<n; i++) {
     tab2[i] = tab[i];
     cout << tab2[i] << " ";    
    }
    cout << endl;
}


void insert_sort(int tab[], int n){
    int i, k, el;
    for(i=1; i<n; i++){
    el = tab[i];
    k = i - 1;
    while (k >= 0 && tab[k] < el){
        tab[k+1]=tab[k];
        k--;
        }
        tab[k+1] = el;
    }
}


void selection_sort(int tab[], int n){
    int i, j, k;
    for(i=1; i<n; i++){
    k = i ;
    for (j=i+1; j<k; j++){
        if (tab[j]<tab[k])
        k=j;
        }
    }
    zamien(tab[k], tab[i]
}



int main(int argc, char **argv)
{
    int tab[50];
    int tab2[50];
    int n;
    
    cout << "Ile elementów ma zawierać tablica (max=50)? ";
    cin >> n;
    wypelnij(tab, n);
    copytab(tab, tab2, n);
    cout<< endl;
    sellection_sort(tab, n);
    wyswietl(tab, n);
	
	return 0;
}

