/*
 * tab2.cpp
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define N	6
#define M 	10

int main(int argc, char **argv)
{
	int tab2W[N][M];
	int i, j;
	srand(time(NULL));
	int n;
	cout << "Podaj górny przedział: ";
	cin >> n;
	
	for (i=1; i < N; i++) {
		cout << i;
		for (j=1; j < M; j++) {
			tab2W[i][j] = (rand()% n);
			cout << setw(4) << tab2W[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

