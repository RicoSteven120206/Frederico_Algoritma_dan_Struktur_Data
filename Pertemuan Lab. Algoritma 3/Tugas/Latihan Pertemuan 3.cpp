#include <iostream>
using namespace std;

int main() {
	float phi = 3.14;
	int r, t;
	
	cout << "Masukkan jari-jari lingkaran: ";
	cin >> r;
	cout << "Masukkan tinggi tabung: ";
	cin >> t;
	
	cout << "=> Menghitung Luas Lingkaran <=" << endl;
	cout << "Diketahui Luas Lingkaran" << endl;
	cout << "jari-jari = " << r << endl;
	cout << "Phi \t= " << phi << endl;
	cout << "Luas \t= phi*r*r" << endl;
	cout << "Luas \t= " << phi << "*"  << r << "*" << r << endl;
	cout << "Luas \t= " << phi * r * r << endl;
	
	cout << endl;
	
	cout << "=> Menghitung Volume Tabung <=" << endl;
	cout << "Diketahui Volume Tabung" << endl;
	cout << "jari-jari = " << r << endl;
	cout << "Phi \t= " << phi << endl;
	cout << "Tinggi \t= " << t << endl;
	cout << "Luas \t= phi*r*r*t" << endl;
	cout << "Luas \t= " << phi << "*"  << r << "*" << r << "*" << t << endl;
	cout << "Luas \t= " << phi * r * r * t;
}
