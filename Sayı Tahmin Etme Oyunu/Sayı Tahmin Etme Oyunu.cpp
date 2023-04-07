#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");
	srand(time(0));

	int tahmin, sayi, hak = 5;
	string devam;

	while (true) {

		sayi = rand() % 100 + 1;

		while (true) {

			if (hak <= 0) {
				cout << "Maalesef bilemediz.Tutulan sayı :" << sayi << endl;
				break;
			}

			cout << "Tahmininiz:" << endl;
			cin >> tahmin;

			if (tahmin == sayi) {

				cout << "Tebrikler";
				break;
			}
			else if (tahmin < sayi)
				cout << "Lütfen daha büyük bir sayı giriniz" << endl;
			else
				cout << "Lütfen daha küçük bir sayı giriniz" << endl;

			

			hak--;
		}



		cout << "Devam etmek ister misiniz?  [E/H] : " << endl;
		cin >> devam;

		if (devam == "e" || devam == "E") {
			hak = 5;
			system("cls");
		}

		else {
			cout << "Oyunu bitirdiniz";
			break;
		}











	}





}










