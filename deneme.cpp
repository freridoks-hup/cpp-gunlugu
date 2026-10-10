#include <iostream>
#include <string>
using namespace std;
int main(){
	int sayi;
	float kusurat;
	string kelime;
	string secim;

	cout << "Hangi veri türünü girmek istersiniz? int(i), float(f), string(s)";
	cin >> secim;

	if (secim == "i"){
		cout << "int sayınızı giriniz.";
		cin >> sayi;

		cout << "Sayınız: " << sayi << endl;
		cout << "Alan: " << sizeof(sayi) << endl;
		cout << "Konumu: " << &sayi << endl;

	}

	else if (secim == "f"){
		cout << "float sayınızı giriniz.";
		cin >> kusurat;

		cout << "Sayınız: " << kusurat << endl;
		cout << "Alan: " << sizeof(kusurat) << endl;
		cout << "Konumu: " << &kusurat << endl;

	}

	else if (secim == "s"){
		cout << "Kelimenizi giriniz.";
		cin >> kelime;

		cout << "Kelimeniz: " << kelime << endl;
		cout << "Alan: " << sizeof(kelime) << endl;
		cout << "Konumu: " << &kelime << endl;
	}
	
	return 0;
}
