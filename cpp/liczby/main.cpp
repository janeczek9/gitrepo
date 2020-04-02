#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c) cout << a << " " << "największa" << endl;
        if (b > c && b < a) cout << b << " " << "średnia" << endl;
        else if (c > b && c < a) cout << c << " " << "średnia" << endl;
            if(c < a && c < b) cout << c << " " << "najmniejsza" << endl;
    if (b > a && b > c) cout << b << " " << "największa" << endl;
        if (c > a && c < b) cout << c << " " << "średnia" << endl;
        else if (a > c && a < b) cout << a << " " << "średnia" << endl;
            if(a < b && a < c) cout << a << " " << "najmniejsza" << endl;
    if (c > a && c > b) cout << c << " " << "największa" << endl;
        if (a > b && a < c) cout << a << " " << "średnia" << endl;
        else if (b > a && b < c) cout << b << " " << "średnia" << endl;
            if(b < a && b < c) cout << b << " " << "najmniejsza" << endl;

    return 0;
}
