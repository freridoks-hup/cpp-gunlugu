#include <iostream>
using namespace std;

int main(){
	char secim = 0;
	
	cout << "+----------------------+" << endl;
	cout << "|     Stystem Menü     |" << endl;
	cout << "+----------------------+" << endl;

	cout << "\33[31mCPU Bilgileri(1)\33[0m" << endl;
	cout << "\33[32mRAM Bilgileri(2)\33[0m" << endl;
	cout << "\33[37mÇıkış(3)\33[0m" << endl;

	

	while (secim !='3'){
		cout << "\33[33mSeçiminiz: \33[0m";
		cin >> secim;

		if (secim == '1'){
			cout << "\33[31mCPU Bilgileri Gösteriliyor.\33[0m" << endl;
		}
		else if (secim == '2'){
			cout << "\33[32mRAM Bilgileri Gösteriliyor.\33[0m" << endl;
		}
		else if (secim == '3'){
			cout << "\33[37mÇıkılıyor Tekrar Görüşmek Üzere...\33[0m" << endl;
		}
		else{
			cout << "\33[34mHatalı Yanıt! Lütfen 1,2 veya 3 giriniz.\33[0m" << endl;
		}

		}
	return 0;
}
