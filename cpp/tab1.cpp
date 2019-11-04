/*
 * tab1.cpp
 * 
 * Copyright 2019  <>

 */

using namespace std;
#include <iostream>

int main(int argc, char **argv)
{   
    int i = 0;
    int r = 5;
    int tab1[r];
    int tab2[r];
    int suma1 = 0;
    int suma2 = 0;
    cout << "Podaj pięciocyfrową serie znaków: " << endl;
    for (i = 0; i<r; i++)  {
        cin >> tab1[i];
   }
   
    cout << "Podaj pięciocyfrową serie znaków: " << endl;
    for (i = 0; i<r; i++)  {
        cin >> tab2[i];
    }
    
    for (i = 0; i < r; i++) { 
        suma1 += tab1[i];
    }
    for (i = 0; i < r; i++) { 
        suma2 += tab2[i];
    }
    
    if (suma1 > suma2)  {
        cout << "Suma pierwszej serii jest większa od drugiej";
    }
    else{
        cout << "Suma drugiej serii jest większa od pierwszaj";    
    }
    
	return 0;
}

