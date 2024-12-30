#include <iostream>
using namespace std;

void luasPersegi(double a);
void luasPersegiPanjang(double p, double l);
void luasTabung(double phi, double r, double t); 
void volumeTabung(double phi, double r, double t);

int main() {
	double a, p, l, t, r, phi = 3.14;
	cout<<"=============================================\n";
	cout<<"Masukkan Angka untuk menentukan Luas Persegi\n";
	cout<<"---------------------------------------------\n";
	cout<<"Alas Persegi = "; cin>>a;
	luasPersegi(a);
	cout<<"=============================================\n";
	cout<<"Masukkan Angka untuk menentukan Luas Persegi Panjang\n";
	cout<<"---------------------------------------------\n";
	cout<<"Panjang Persegi Panjang = "; cin>>p;
	cout<<"Lebar Persegi Panjang = "; cin>>l;
	luasPersegiPanjang(p,l);
	cout<<"=============================================\n";
	cout<<"Masukkan Angka untuk menentukan Luas Tabung\n";
	cout<<"---------------------------------------------\n";
	cout<<"Jari-jari Tabung = "; cin>>r;
	cout<<"Tinggi Tabung = "; cin>>t;
	luasTabung(phi, r, t);
	cout<<"==============================================\n";
	cout<<"Masukkan Angka untuk menentukan volume Tabung\n";
	cout<<"----------------------------------------------\n";
	cout<<"Jari-jari Volume Tabung = "; cin>>r;
	cout<<"Tinggi Volume Tabung = "; cin>>t;
	volumeTabung(phi, r, t);
	cout<<"===============================================\n";
}

void luasPersegi(double a) {
	float luasPersegi = a * a;
	cout<<"Luas Persegi = "<<a<<"^"<<2<<endl;
	cout<<"Luas Persegi = "<<luasPersegi<<endl;
	cout<<"Luas Persegi adalah = "<<luasPersegi<<endl;
};
void luasPersegiPanjang(double p, double l) {
	float luasPersegiPanjang = p * l;
	cout<<"Luas Persegi Panjang = "<<p<<"*"<<l<<endl;
	cout<<"Luas Persegi Panjang = "<<luasPersegiPanjang<<endl;
	cout<<"Luas Persegi Panjang adalah = "<<luasPersegiPanjang<<endl;
};
void luasTabung(double phi, double r, double t) {
	float luasTabung = 2 * phi * r * (r + t);
	cout<<"Luas Tabung = "<<2<<"*"<<phi<<"*"<<r<<"("<<r<<"+"<<t<<")"<<endl;
	cout<<"Luas Tabung = "<<luasTabung<<endl;
	cout<<"Luas Tabung adalah = "<<luasTabung<<endl;
};
void volumeTabung(double phi, double r, double t) {
	float volumeTabung = phi * r * r * t;
	cout<<"Volume Tabung = "<<phi<<"*"<<r<<"^"<<2<<"*"<<t<<endl;
	cout<<"Volume Tabung = "<<volumeTabung<<endl;
	cout<<"Volume Tabung adalah = "<<volumeTabung<<endl;
};

