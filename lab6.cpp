#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int tab[9];
    float srednia = 0, suma = 0;

    srand(time(NULL));
    for (int i = 0; i < 9; i++)
    {
        *(tab + i) = rand() % 10;
        cout << *(tab + i) << " ";
        suma += (tab + i);
    }

    srednia = suma / 9;
    cout << srednia << endl;

    for (int i = 0; i < 9; i++)
    {
        if ((tab + i) > srednia) cout << *(tab + i) << " ";
    }
}


#include <iostream>

using namespace std;


void potega(int* a) {
    *a *= *a;
}

int main()
{
    int a;
    cin >> a;

    int* wsk_a = &a;

    potega(wsk_a);
    cout << a;
}



#include <iostream>

void potega(int* wsk_a, int* wsk_b, int* wsk_c) {
    for (int i = 1; i < *wsk_b; i++) {
        *wsk_a *= *wsk_c;
    }
}

int main()
{
    int a, b, c;
    cout << "Podaj liczbe" << endl;
    cin >> a;
    cout << "Podaj jej potege" << endl;
    cin >> b;

    c = a;

    int* wsk_a = &a;
    int* wsk_b = &b;
    int* wsk_c = &c;

    potega(wsk_a, wsk_b, wsk_c);

    cout << "wynik potegowania to: " << *wsk_a;
}