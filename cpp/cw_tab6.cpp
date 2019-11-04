/*
 * cw_tab6>cpp
 * 
 * Copyright 2019  <>
 */



#include <cstring>
#include <iostream>
using namespace std;

#define R 100

int main(int argc, char **argv)
{
	char napis[R];
    int i;
    int j = 0;
    cout << "Podaj napis: " << endl;
    cin.getline(napis, R);
    
     for (i = 0 ; i < strlen(napis) ; i++){
        if(napis[i] > 47 && napis[i] < 58){
            j += 1;
        }
        else if(napis[i] > 64 && napis[i] < 91){
            j += 1;
        }
        else if(napis[i] > 96 && napis[i] < 123){
            j += 1;
        }
        else if(napis[i] == 32) {
            j += 1;
        }
     }
        
     cout << j;
     
     return 0;
}
