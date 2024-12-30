//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	struct mahasiswa {
//		char nim[12];
//		char nama[30];
//		float nilai;
//	};
//	mahasiswa mahasiswa;
//	cout<<"Masukkan Nim: ";
//	cin>>mahasiswa.nim;
//	cout<<"Masukkan Nama: ";
//	cin>>mahasiswa.nama;
//	cout<<"Masukkan Nilai Akhir: ";
//	cin>>mahasiswa.nilai;
//	cout<<"\nData yang di input adalah: \n\n";
//	cout<<"NIM	: " << mahasiswa.nim<<endl;
//	cout<<"Nama	: "<< mahasiswa.nama<<endl;
//	cout<<"Nilai	: "<< mahasiswa.nilai<<endl;
//	getchar();
//}



//#include <iostream>
//using namespace std;
//
//struct siswa {
//	int no_induk;
//	string nama;
//	float nilai;
//};
//
//int main() {
//	siswa Arkan, Lukas;
//	Arkan.no_induk = 1;
//	Arkan.nama =  "Arkan Jaguar";
//	Arkan.nilai = 79.5;
//	Lukas.no_induk;
//	Lukas.nama = "Lukas Cisantoso";
//	Lukas.nilai = 87.7;
//	
//	cout<< Arkan.nama << " Dengan Nomor Induk " << Arkan.no_induk << " Mendapatkan Nilai " << Arkan.nilai << endl;
//	cout<< Lukas.nama << " Dengan Nomor Induk " << Lukas.no_induk << " Mendapatkan Nilai " << Lukas.nilai << endl;
//}


//#include <iostream>
//using namespace std;
//
//struct siswa {
//	int no_induk;
//	string nama;
//	float nilai;
//};
//
//int main () {
//	siswa Jery = {24232, "Jery Pamungkas", 87.7};
//	siswa Tono = {24234, "Tono Sukumantis", 82.5};
//	cout<<Jery.nama<<" Mendapatkan Nilai "<<Jery.nilai<<endl;
//	cout<<Tono.nama<<" Mendapatkan Nilai "<<Tono.nilai<<endl;
//	return 0;
//}



#include <iostream>
using namespace std;

struct dosen {
	string nama;
	string umur;
};

struct matkul {
	string nama_matkul;
	double ipk;
	string status;
	
	dosen dosen1, asdos;
};

int main() {
	dosen dosen1, asdos;
	matkul matkul1;
	
	dosen1.nama = "Jemy";
	dosen1.umur = "36";
	
	asdos.nama = "Helena";
	asdos.umur = "19";
	
	matkul1.dosen1 = dosen1;
	matkul1.asdos = asdos;
	
	matkul1.nama_matkul = "Algo dan Struktur";
	matkul1.ipk =  3.6;
	matkul1.status = "Wajib";
	matkul1.dosen1 = dosen1;
	
	cout<<"Nama Matkul \t=" << matkul1.nama_matkul << endl;
	cout<<"KKM Matkul \t=" << matkul1.ipk << endl;
	cout<<"Status Matkul \t="<< matkul1.status << endl;
	cout<<"Nama Dosen \t="<< matkul1.dosen1.nama << endl;
	cout<<"Umur Dosen \t="<< matkul1.dosen1.umur << endl;
	cout<<"Nama Asdos \t="<< matkul1.asdos.nama << endl;
	cout<<"Umur Asdos \t="<< matkul1.asdos.umur << endl;
}
