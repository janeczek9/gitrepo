/*
 * trojkat.cpp
 * 
 * Copyright 2019  <>

 */

using namespace std;
#include <iostream>
#include <cmath>

int main(int argc, char **argv)
{
    int a ;
    int b ;
    int c ;
    cout << "Podaj bok a: " ;
    cin >> a ;
    cout << "Podaj bok b: " ;
    cin >> b ;
    cout << "Podaj bok c: " ;
    cin >> c ;
    
    if (a + b > c)
    {
    if (a + c > b)
    {
    if (b + c > a)

        cout << "Da się zrobić trójkąt" <<  endl;
    }}
    else cout << "Nie da się zrobić trójkąta" <<  endl;
      
	
	return 0;
}

