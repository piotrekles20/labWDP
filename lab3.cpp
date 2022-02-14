#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//zad1
	cout << "ZADANIE 1" << endl;
		int i = 0;
		int q = 0;
		int tabz1[10];
		for (i = 0; i < 10; i++) {
			tabz1[i] = { q += 3 };
			cout << tabz1[i] << endl;
		}
		cout << endl;
	 
	 
	//zad2
	cout << "ZADANIE 2" << endl;
		for (int k = 0; k < 10; k += 2)
		{
			cout << k << "  " << tabz1[k] << endl;
		}
		cout << endl;
	 
	 
	//zad3
		cout << "ZADANIE 3" << endl;
		int l, w;
		cout << "Podaj liczbe ";
		cin >> w;
		int tabz2[10];
		for (l = 9; l > 0; l--) {
			tabz2[l] = { w };
			w = w - 5;
			cout << tabz2[l] << " ";
		}
	 cout << endl;
	 cout << endl;
	 
	 
	//zad4
	 cout << "ZADANIE 4" << endl;
	    int tabz4[10];
	    int z = 0;
	    srand(time(NULL));
	    while (z < 10){
	        tabz4[z] = rand() % 73 - 23;
	        cout << z << " " << tabz4[z] << endl;
	        z++;
	    }
	 cout << endl;
	 
	 
	//zad5
	cout << "ZADANIE 5" << endl;
	int tabz5[20], o, p, h, r,f;
	cout << "Podaj pierwsza liczbe ";
	cin >> o;
	tabz5[0] = o;
	cout << "Podaj druga liczbe ";
	cin >> p;
	tabz5[1] = p;
	cout << tabz5[0] << " ";
	cout << tabz5[1] << " ";
	for (h = 2; h < 20; h++) {
		tabz5[h] = { o + p };
		r = p;
		f = o;
		o = p;
		p = r + f;
		cout << tabz5[h] << " ";
	}
	 cout << endl;
	 cout << endl;
	 
	 
	//zad6
	 cout << "ZADANIE 6" << endl;
	    int tabz6[20];
		int s, d=5;
		for (s = 0; s < 10; s++) {
		tabz6[s] = { d += 13 };
		cout << tabz6[s] << endl;
		}
		for (s = 10; s < 20; s++) {
			tabz6[s] = { tabz6[s - 10] };
			cout << tabz6[s] << endl;
		}
	 cout << endl;
	 
	
	//zad7
	 cout << "ZADANIE 7" << endl;
	int v=0 ,tabz7[5][5] = { 34,2,3,4,5,1,5,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,98};
	for (int c = 0; c < 5; c++) {
		v = v + tabz7[c][c];
		cout << tabz7[c][c] << endl;
	}
	cout << endl;
	cout << v << endl;
	cout << endl;
	cout << endl;
	 
	 
	//zad8
	cout << "ZADANIE 8" << endl;
	int tabz81[3][3] = { 34,2,12,4,5,2,3,4,98 };
	int tabz82[3][3] = { 4,6,7,7,2,21,16,4,1 };
	int tabz83[3][3];
	for (int g = 0; g < 3; g++) {
		for (int n = 0; n < 3; n++) {
			tabz83[n][g] = tabz81[n][g] + tabz82[n][g];
			cout << tabz83[n][g] << " ";
		}
		cout << endl;
	}
}