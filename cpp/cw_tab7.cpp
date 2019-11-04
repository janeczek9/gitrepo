/*
 * cw_tab7.cpp
 * 
 * Copyright 2019  <>

 */


#include <cstring>
#include <iostream>
using namespace std;

#define R 100

int main(int argc, char **argv)
{
    char znak;
    float a = 0;
    float b = 0;
    cout << "Podaj znak działania: " << endl;
    
    if (znak == '+')  {
        cout << "Podaj składniki: " << endl;
        cin >> a;
        cin >> b;
        cout << "Suma jest równa: " << a + b << endl;
        }
        
    else if (znak == '-')  {
        cout << "Podaj odjemną oraz odjemnik: " << endl;
        cin >> a;
        cin >> b;
        cout << "Różnica jest równa: " << a - b << endl;
        }
        
    else if (znak == '*')  {
        cout << "Podaj czynniki: " << endl;
        cin >> a;
        cin >> b;
        cout << "Iloczyn jest równy: " << a * b << endl;
    }
        
    else if (znak == '/')  {
        cout << "Podaj licznik i mianownik: " << endl;
        cin >> a;
        cin >> b;
        cout << "Iloraz jest równy: " << a / b << endl;
        }    


	
	return 0;
}

