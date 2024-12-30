#include <iostream>
using namespace std;

int main() {
	int x, y, tambah, kurang, kali, bagi;
	
	cout << "Masukkan bilangan kesatu: ";
	cin >> x;
	cout << "Masukkan bilangan kedua: ";
	cin >> y;
	
	tambah = x + y;
	kurang = x - y;
	kali = x * y;
	bagi = x / y;
	
	cout << "===================================" << endl;
	cout << "Hasil Penjumlahan: " << tambah << endl;
	cout << "Hasil Pengurangan: " << kurang << endl;
	cout << "Hasil Perkalian: " << kali << endl;
	cout << "Hasil Pembagian: " << bagi << endl;
	
	return 0;
}
