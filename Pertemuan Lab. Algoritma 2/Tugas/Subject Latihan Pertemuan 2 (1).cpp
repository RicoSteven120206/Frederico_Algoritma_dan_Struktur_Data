#include <iostream>
using namespace std;

int main() {
//Menghitung Operasi Penjumlahan
	{
	cout << "Nomor 1 - Penjumlahan" << endl;
	cout << "Masukkan dua angka" << endl;
	int p;
	cout << "P = ";
	cin >> p;
	int q;
	cout << "Q = ";
	cin >> q;
	int T = p+q;
	cout << "Berapa hasil penjumlahan dari P + Q= " << T << endl;
	cout << endl;
};

//Menghitung Operasi Pengurangan
{
cout << "Nomor 2 - Pengurangan" << endl;
	cout << "Masukkan dua angka" << endl;
	int m;
	cout << "M = ";
	cin >> m;
	int n;
	cout << "N = ";
	cin >> n;
	int K = m-n;
	cout << "Berapa hasil penjumlahan dari M - N= " << K << endl;
	cout << endl;
};

//Menghitung Operasi Perkalian
{
	cout << "Nomor 3 - Perkalian" << endl;
	cout << "Masukkan dua angka" << endl;
	int a;
	cout << "A = ";
	cin >> a;
	int b;
	cout << "B = ";
	cin >> b;
	int C = a*b;
	cout << "Berapa hasil perkalian dari A * B = " << C << endl;
};
return 0;
}
