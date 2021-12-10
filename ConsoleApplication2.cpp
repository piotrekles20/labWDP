// ConsoleApplication2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	int n,n1,a,sd=0,su=0,iu=0,id=0,k1,k2,ksum=0;
	float pkt,suma=0;
	//zd1
	cout << "podaj liczbe studenciakow "<<endl;
	cin >> n;
	n1 = n;
	if (n > 0)
	{
		while (true)
		{
			cout << "podaj liczbe pkt ";
			cin >> pkt;
			//zd2,3
			if (pkt >= 0 && pkt <= 100) 
			{
				suma += pkt;
			    n--;
			}
			if (n == 0) break;
			continue;
			
		}
		cout << "srednia wynosi: " <<endl;
		cout << suma / n1 <<endl;
	}
	else
	{
		cout << "musi byc conajmniej jeden 1 student"<<endl;
	}
	//zd4
	for (int i = 0; i < 10; i++)
	{
		cout << "podaj liczbe\n";
		cin >> a;
		if (a>=0) 
		{
			sd += a;
			id++;
		}
		else
		{
			su += a;
			iu++;
		}
	}
	cout << "suma dodatnia " << sd << " ilosc licz dodatnich "<<id<<endl;
	cout << "suma ujemna " << su << " ilosc licz ujemnych "<<iu<<endl;

	//zd5
	cout << " podaj k1 :", cin >> k1;
	if (k1 > 0)
	{
		for (int k3 = 0; k3 < n; k3++)
		{
			cout << "podaj liczbe: ";
			cin >> k2;
			if (k2 % 2 == 0)
			{
				ksum += k2;
			}
		}
		cout << "suma liczb parzystych: " << ksum << endl;
	}
	else
		cout << "n nie moze vyc liczba ujemna " << endl;

	//zd6





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
