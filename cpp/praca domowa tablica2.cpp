/*
 * praca domowa tablica2.cpp

 * 
 */


using namespace std;

void pobierzOceny(int t[], int r)
{
    cout << "Podaj 5 ocen: " << endl;
    int i;
    for (i = 0; i < r; i++)
    {
        cin >> t[i];

    }
}

void drukujTab(int t[], int r)
{
    int i;
    for (i = 0; i < r; i++)
    {
        cout << t[i]<<" ";
    }
}

float sredniaOcen(int t[], int r ,float srednia)
{
    int i;
    int s;
    for (i = 0; i < r; i++)
    {
        s =+ t[i];
    }
    srednia = float(s) / float(r);
    return srednia;
}



int main(int argc, char **argv)
{
    float srednia = 0;
    cout << "Ile ocen podasz";
    int rozmiar;
    cin >> rozmiar;
    int tablica[rozmiar];
    cout << tablica << endl;
    pobierzOceny(tablica, rozmiar);
    drukujTab(tablica, rozmiar);
    sredniaOcen(tablica, rozmiar, srednia);
    cout << srednia;


    return 0;
}

