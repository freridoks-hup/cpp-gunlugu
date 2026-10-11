#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(){
	string secim;
	string icerik;
	string toplam;
	string kullanılabilir;
	int toplam_ram;
	int kullanılabilir_ram;
	int kullanılan_ram;
	double kullanılan_yüzde;

	cout << "Ne Görmek istersiniz: " << "\t" << "CPU(C)" << "\t" << "RAM(R)";
	cin >> secim;

	if (secim == "C"){
		cout << "CPU OKUNUYOR..." << endl;
		ifstream dosya("/proc/cpuinfo");
		while (getline(dosya, icerik)){
			if (icerik.find("model name") != string::npos){
				cout << "Bilgiler: " << icerik << endl;	 
				break;
			}
		}
	}
	
	else if (secim == "R"){
		cout << "RAM OKUNUYOR..." << endl;
		ifstream dosya("/proc/meminfo");
		while (getline(dosya, icerik)){
			if (icerik.find("MemTotal") != string::npos){
				size_t konum = icerik.find(":");
				toplam = icerik.substr(konum + 1);
				toplam_ram = stoi(toplam);
				cout << "Toplam RAM: " << toplam << endl;
				}
			if (icerik.find("MemAvailable") != string::npos){
				size_t konum = icerik.find(":");
				kullanılabilir = icerik.substr(konum + 1);
				kullanılabilir_ram = stoi(kullanılabilir);
				cout << "Kullanılabilir RAM: " << kullanılabilir << endl;
				kullanılan_ram = toplam_ram - kullanılabilir_ram;
				kullanılan_yüzde = static_cast<double>(kullanılan_ram) / toplam_ram * 100;
				cout << "Kullanılan RAM: " << kullanılan_ram << "\t" << "Yüzde: " << kullanılan_yüzde << endl;
				break;	
				}
		
		} 
	}

	else{
		cout << "Lütfen 'C' veya 'R' yazınız." << endl;
	}

	return 0;
}
