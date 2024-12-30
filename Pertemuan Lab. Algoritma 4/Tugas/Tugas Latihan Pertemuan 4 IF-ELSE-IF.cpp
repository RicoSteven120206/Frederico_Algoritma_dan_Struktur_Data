#include <iostream>
using namespace std;

int main() {
	int NP1, NP2, NP3, NT;
	string nama_siswa;
	cout<<"Program Hitung Nilai Rata-Rata Dengan IF-ELSE-IF"<<endl;
	cout<<"Nama Siswa: ";
	getline(cin, nama_siswa);
	
	cout<<"Masukkan Nilai Pertandingan I: ";
	cin>>NP1;
	cout<<"Masukkan Nilai Pertandingan II: ";
	cin>>NP2;
	cout<<"Masukkan Nilai Pertandingan III: ";
	cin>>NP3;
	
	NT = (NP1 + NP2 + NP3) / 3;
	cout<<"Hasil dari rata-rata pertandingan "<<nama_siswa<<" yaitu : "<<NT<< endl;
	cout<<"Maka siswa yang bernama "<<nama_siswa<<" akan memperoleh : "<<endl;
	
	if (NT >= 85 && NT <= 100) {
		cout<<"Selamat Anda Mendapatkan Hadiah Komputer Core i5";
	} else if (NT >= 70 && NT <= 84) {
		cout<<"Selamat Anda Mendapatkan Hadiah Uang Sebesar Rp. 2,500,000";
	} else {
		cout<<"Selamat Anda Mendapatkan Hadiah Hiburan";
	}
	getchar();
}
