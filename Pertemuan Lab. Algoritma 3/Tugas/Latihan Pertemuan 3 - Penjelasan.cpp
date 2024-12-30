#include <iostream>
using namespace std;

int main() //mendefinisikan fungsi main dengan type data integer
{
	float phi = 3.14; //menggunakan float karena untuk bisa menggunakan angka decimal
	int r, t; //memasukkan type data untuk variabel yang akan digunakan
	
	//membuat character output dan input
	cout << "Masukkan jari-jari lingkaran: "; //untuk menampilkan output ke layar (console)
	cin >> r; //untuk mengambil input pengguna
	cout << "Masukkan tinggi tabung: "; //untuk menampilkan output ke layar (console)
	cin >> t; //untuk mengambil input pengguna
	
	//Membuat Code bagaimana cara menghitung Luas Lingkaran
	cout << "=> Menghitung Luas Lingkaran <=" << endl; //judul
	cout << "Diketahui Luas Lingkaran" << endl; //diketahui jari-jari untuk menghitung Luas Lingkaran
	cout << "jari-jari = " << r << endl; //diketaui jari-jari yang di input tersebut
	cout << "Phi \t= " << phi << endl; //diketahui phi
	cout << "Luas \t= phi*r*r" << endl; //rumus dari Luas Lingkaran
	cout << "Luas \t= " << phi << "*"  << r << "*" << r << endl; //proses ketika semua rumus telah di input
	cout << "Luas \t= " << phi * r * r << endl; //Hasil dari perhitungan Luas Lingkaran
	
	cout << endl;
	
	cout << "=> Menghitung Volume Tabung <=" << endl; //judul
	cout << "Diketahui Volume Tabung" << endl; //diketahui jari-jari dan tinggi dari tabung untuk menghitung volume tabung
	cout << "jari-jari = " << r << endl; //diketahui jari-jari yang di input tersebut
	cout << "Phi \t= " << phi << endl; //diketahui phi
	cout << "Tinggi \t= " << t << endl; // diketahui tinggi yang di input tersebut
	cout << "Luas \t= phi*r*r*t" << endl; //rumus dari menghitung volume tabung
	cout << "Luas \t= " << phi << "*"  << r << "*" << r << "*" << t << endl; //proses ketika semua rumus telah di input
	cout << "Luas \t= " << phi * r * r * t; //Hasil dari menghitung volume tabung
	
	getchar();
}
