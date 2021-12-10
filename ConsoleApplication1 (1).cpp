// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{

	string nrAlbumu = "w65494 ";
	int a,i,j,wybor,k;
	float b, c,d,e,f,g,h;

	cout << "Moj numer albumu to " << nrAlbumu << endl;
	cout << "Podaj liczbe :" <<endl;
	cin >> a;

	if (a%2 == 0)
	{
		cout << "Podana liczba jest parzysta" <<endl;

	}
	else
	{
		cout << "Podana liczba jest nieparzysta" <<endl;
	}

	cout << "Podaj pierwsza liczbe :"<<endl;
	cin >> b;
	cout << "Podaj druga liczne :" << endl;
	cin >> c;

	if (b > c)
	{
		cout << " Pierwsza Liczba jest wieksza"<<endl;
	}
	else
	{
		cout << " Druga liczba jest wieksza"<<endl;
	}

	cout << "Podaj pierwsza liczbe :" << endl;
	cin >> d;
	cout << "Podaj druga liczne :" << endl;
	cin >> e;
	cout << "Podaj trzecia liczbe :" << endl;
	cin >> f;
	cout << "Podaj czwarta liczne :" << endl;
	cin >> g;

	h = (d + e + f + g) / 4;
	cout << "Srednia arytmetyczna wynosi ";
	cout << h << endl;


	cout << "Podaj pierwsza liczbe :" << endl;
	cin >> i;
	cout << "Podaj druga liczne :" << endl;
	cin >> j;
	cout << "jaka operacje chcesz wykonac? 1.dodawanie 2.odejmowanie 3.mnozenie 4.dzielenie" << endl;
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		k = i + j;
		cout << "Wynik dodawania to ";
		cout << k;
		break;

	case 2:
		k = i - j;
		cout << "Wynik odejmowania to ";
		cout << k;
		break;

	case 3:
		k = i * j;
		cout << "Wynik mnozenia to ";
		cout << k;
		break;

	case 4:
		if (j != 0) {
        k = i / j;
		cout << "Wynik dzielenia to ";
		cout << k;

		}
		else
		{
			cout << "Nie dziel przez 0!";
		}
		break;

	default:
			cout << "nie ma takiej operacji";
		break;
	}


}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
