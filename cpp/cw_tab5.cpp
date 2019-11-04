/*
 * cw_tab5.cpp
 * 
 * Copyright 2019  <>

 * 
 */

#include <cstring>
#include <iostream>
using namespace std;

#define R 100

int main(int argc, char **argv)
{
	char napis[R];
    int i;
    
    cout << "Podaj napis: " << endl;
    cin.getline(napis, R);
    

    for (i = 0 ; i < strlen(napis) ; i++){
        if(napis[i] > 95)   {
        cout << (char)(napis[i] - 32);
    }
    else if(napis[i] == 32) {
        cout << (char)(napis[i]);
    }
    else if(napis[i] < 95 && napis[i] > 64) {
        cout << (char)(napis[i] + 32);
    }
}
cout<<endl;

    
	return 0;
}

