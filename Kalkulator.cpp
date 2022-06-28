//Programowanie Objektowe, Projekt: Kalkulator arytmetyczny
//Grzegorz Kowalczyk, sem. IV, gr. D3, nr indeksu: 147647

#include <iostream>
#include "operacje.h"
using namespace std;

int main()
{
	Kalkulator licz;
	double a, b;
	char znak, wyjscie;
	do
	{
		system("cls");
		cout << "\n PROSTY KALKULATOR ARYTMETYCZNY \n";
		for (int i = 0; i < 35; i++) cout << "-";

		cout << "\n Wprowadz dzialanie (np. 1 + 2)\n ";
		cin >> a >> znak >> b;

		if (b == 0 && znak == '/')
		{
			znak = '@';		//zabezpieczenie przed dzieleniem przez zero
		}
		switch (znak)
		{
		case '+':
			cout << "\n Dodawanie:\n  ";
			cout << a << " + " << b << " = " << licz.dodaj(a, b) << endl;
			break;
		case '-':
			cout << "\n Odejmowanie:\n  ";
			cout << a << " - " << b << " = " << licz.odejmij(a, b) << endl;
			break;
		case '*':
			cout << "\n Mnozenie:\n  ";
			cout << a << " * " << b << " = " << licz.pomnoz(a, b) << endl;
			break;
		case '/':
			cout << "\n Dzielenie:\n  ";
			cout << a << " / " << b << " = " << licz.podziel(a, b) << endl;
			break;
		case '@':
			cout << "\n Zablokowana proba dzielenia przez zero \n"
				" Mozesz sprobowac od nowa. \n";
			break;
		default:
			cout << "\n Wprowadzono niewlasciwy symbol dzialania \n"
				" Mozesz sprobowac od nowa. \n";
			break;
		}
		for (int i = 0; i < 35; i++) cout << "-";
		cout << "\n Czy chcesz zakonczyc program? [t/n] "; cin >> wyjscie; cout << endl;
	} while (wyjscie != 't');

	cout << " Wyjscie z programu.\n";
	for (int i = 0; i < 35; i++) cout << "-";
	return 0;
}
