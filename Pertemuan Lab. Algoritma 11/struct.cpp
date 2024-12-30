#include <iostream>
using namespace std;

struct siswa {
	int no_induk;
	string nama;
	float nilai;
};

int main() {
	siswa Arkan, Lukas;
	Arkan.no_induk = 1;
	Arkan.nama =  "Arkan Jaguar";
	Arkan.nilai = 79.5;
	Lukas.no_induk;
	Lukas.nama = "Lukas Cisantoso";
	Lukas.nilai = 87.7;
	
	cout<< Arkan.nama << " Dengan Nomor Induk " << Arkan.no_induk << " Mendapatkan Nilai " << Arkan.nilai << endl;
	cout<< Lukas.nama << " Dengan Nomor Induk " << Lukas.no_induk << " Mendapatkan Nilai " << Lukas.nilai << endl;
}
