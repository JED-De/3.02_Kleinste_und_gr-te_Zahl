#include <iostream>
using namespace std;

int main()
{
	int eingabe;
	int kleinste_zahl;
	int kleinste_reihe;
	int groesste_zahl;
	int groesste_reihe;
	int anzahl = 5; //Mindestens 2, sonnst kein durchlauf der for schleife

	cout << "Bitte geben Sie die 1. Zahl ein: ? ";
	cin >> eingabe;
	kleinste_zahl = eingabe;
	kleinste_reihe = 1;
	groesste_zahl = eingabe;
	groesste_reihe = 1;
	int i;

	for (i = 2; i <= anzahl; i++)
	{
		cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
		cin >> eingabe;
		if (kleinste_zahl > eingabe)
		{
			kleinste_zahl = eingabe;
			kleinste_reihe = i;
		}

		else if (groesste_zahl < eingabe)
		{
			groesste_zahl = eingabe;
			groesste_reihe = i;
		}
	}

	cout << "Die " << kleinste_reihe << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << kleinste_zahl << endl;
	cout << "Die " << groesste_reihe << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << groesste_zahl << endl;
	system("PAUSE");
	return 0;
}