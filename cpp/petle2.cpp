/*
 * petle2.cpp
 * 
 * Copyright 2019  <>

 */


#include <iomanip>
#include <iostream>

using namespace std;

void prostokat(int x, int y,){
    int i, j;
    for(i = 1; i <= x; i++) {
        for(j = 1; j <= y; j++) {
            cout << #;
            }
            cout << endl;
        }
    }

void prostokat2(int x, int y,){
    int i, j;
    for(i = 1; i <= x; i++) {
        for(j = 1; j <= y; j++) {
            if(i == 1 || i == x)  
              cout << #;
          
            else if (j == 1 || j == y)    
        else 
        cout << " ";
    }
    cout << endl;
    }
}


void drukujchoinka(int x, int y){
  int i,j;
  for (i=0;i<x;i++)
    {
      for (j=0;j<=i;j++)
          
        cout << "#";
      cout << endl; 
} }


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
    prostokat(5, 12);
    cout << endl;
    prostokat2(5, 12);
    cout << endl;
	drukujchoinka(5, 12);
    
    return 0;
    
}

