/*
 * tab4.cpp
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define N	6
#define M 	7


int main(int argc, char **argv)
{
	int tab2W[N][M];
	int i, j;
	int r;
	int a;
	cout << "podaj wartość r: " << endl;
	cin >> r;
	cout << "Podaj pierwszą liczbę tabeli: " << endl;
	cin >> a;
	
	for (i=0; i < N; i++) {
		for (j=0; j < M; j++) {
			tab2W[i][j] = a + i + j + r;
			cout << setw(4) << tab2W[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

