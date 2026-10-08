#include <iostream>
#include <string>

using namespace std;

int toplama(float sayi1, float sayi2){
	int topla;
	topla = sayi1 + sayi2;
	return topla;
}

int cikarma(float sayi1, float sayi2){
	int cikar;
	cikar = sayi1 - sayi2;
	return cikar;
}

int carpma(float sayi1, float sayi2){
	int carp;
	carp = sayi1 * sayi2;
	return carp;
}

float bolme(float sayi1, float sayi2){
	float bol;
	bol = sayi1 / sayi2;
	return bol;
}

int main(){
	float sayi1;
	float sayi2;
	string istek;
	
	cout << "İlk sayıyı giriniz.";
	cin >> sayi1;
	
	cout << "İkinci sayıyı giriniz.";
	cin >> sayi2;

	cout << "Toplama(+) mı Çıkarma(-) mı Çarpma(*) mı Bölme(/) mi yapmak istersiniz?";
	cin >> istek;

	if (istek == "+"){
		cout << "Sonuç: " << toplama(sayi1, sayi2) << endl;
		return 0;
	}

	else if (istek == "-"){
		cout << "Sonuç: " << cikarma(sayi1, sayi2) << endl;
		return 0;
	}

	else if (istek == "*"){
		cout << "Sonuç: " << carpma(sayi1, sayi2) << endl;
		return 0;
	}

	else if (istek == "/"){
		cout << "Sonuç: " << bolme(sayi1, sayi2) << endl;
	}
}
