/*
 * peltecw2.cpp
 * 
 * Copyright 2019  <>

 */



#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std; 

void drukujTabliczke(int x, int y) {
    int i, j;
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= y; j++) { 
                cout << setw(2) << i * j << " " ;
            }
    cout << endl;
        }
}
void prostokat(int x, int y) {
    int i, j ;
    for (i = 1; i <= x; i++) {
    for (j = 1; j <= y; j++) { 
                cout << "#" ;
            }
    cout << endl;
        }
    }
void pustak(int x, int y) {
    int i, j ;
    for (i = 1; i <= x; i++) {
    for (j = 1; j <= y; j++) { 
        if (i == 1 || i == x)
        cout<< "#";
        else if (j == 1 || j ==y)
        cout << "#";
        else 
        cout <<" ";
            }
    cout << endl;
        }
    }
void choinka(int x){
  int i,j;
  for (i=0;i<x;i++)
    {
      for (j=0;j<=i;j++)
          
        cout << "#";
      cout << endl; 
} }

     
int main(int argc, char **argv)
{
	int i, j;
    pustak(5,12); 
    cout << endl;
    prostokat(5, 12);
    cout << endl;
    choinka(12);
	return 0;
}
