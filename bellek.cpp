#include <iostream>
#include <string>

using namespace std;

int main(){
	int sayi = 100;
	int* p = &sayi;
	*p = 250;
	cout << sayi << endl;
	cout << "Sayımız: " << "\t" << sayi << endl;
	cout << "ALAN: " << "\t" << sizeof(sayi) << endl;
	cout << "Yeri: " << "\t" << &sayi << endl;
	cout << "P yeri: " << "\t" << p << endl;
	cout << "P değeri: " << "\t" << *p << endl;
	cout << "P adresi: " << "\t" << &p << endl;
	cout << "P Alanı: " << "\t" << sizeof(p) << endl;
	cout << "P(sayi) Alanı: " << "\t" << sizeof(*p) << endl;
	return 0;
}
