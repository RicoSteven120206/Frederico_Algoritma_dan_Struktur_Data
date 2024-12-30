#include <iostream>
using namespace std;

int main() {
	int NP1, NP2, NP3, code;
	string namasiswa;
	cout<<"Program Hitung Nilai Rata-Rata Dengan SWITCH CASE"<<endl;
	cout<<"Nama Siswa: ";
	getline(cin, namasiswa);
	
		cout<<"Masukkan Nilai Pertandingan I: ";
		cin>>NP1;
		cout<<"Masukkan Nilai Pertandingan II: ";
		cin>>NP2;
		cout<<"Masukkan Nilai Pertandingan III: ";
		cin>>NP3;
		
		code = (NP1 + NP2 + NP3) / 3;
		cout<<"Hasil dari rata-rata pertandingan "<<namasiswa<<" yang diperoleh: "<<code<< endl;
		cout<<"Maka siswa yang bernama "<<namasiswa<<" akan memperoleh : "<<endl;
		
	switch (code) {
		case 85 ... 100 :
		 	cout<<"Selamat Anda Mendapatkan Hadiah Komputer Core i5";
		 	break;
		case 70 ... 84 :
			cout<<"Selamat Anda Mendapatkan Hadiah Uang Sebesar Rp. 2,500,000";
			break;
		case 0 ... 69 :
			cout<<"Selamat Anda Mendapatkan Hadiah Hiburan";
			break;
} getchar();
}
