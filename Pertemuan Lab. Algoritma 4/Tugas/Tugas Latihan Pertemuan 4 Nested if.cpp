#include <iostream>
using namespace std;

int main () {
	int NP1, NP2, NP3, NT;
	string Nama_Siswa;
	cout<<"Program Hitung Nilai Rata-Rata dengan NESTED IF"<<endl;
	cout<<"Nama Siswa : ";
	getline(cin, Nama_Siswa);
	
	cout<<"Nilai Pertandingan I : ";
	cin>>NP1;
	cout<<"Nilai Pertandingan II : ";
	cin>>NP2;
	cout<<"NilaI Pertandingan III : ";
	cin>>NP3;
	
	NT = (NP1 + NP2 + NP3) / 3;
	
	cout<<"Hasil dari rata-rata pertandingan "<<Nama_Siswa<<" yaitu: "<<NT<< endl;
	cout<<"Maka Siswa yang bernama "<<Nama_Siswa<<" akan memperoleh: "<<endl;
	
	if (NT >= 85 && NT <= 100) {
		cout<<"Selamat Anda Mendapatkan Hadiah Komputer Core i5";
	} else {
	if (NT >= 70 && NT <= 84) {
		cout<<"Selamat Anda Mendapatkan Hadiah Uang Sebesar Rp. 2,500,000";
	} else {
		cout<<"Selamat Anda Mendapatkan Hadiah Hiburan";
	}	}
	getchar();
}
