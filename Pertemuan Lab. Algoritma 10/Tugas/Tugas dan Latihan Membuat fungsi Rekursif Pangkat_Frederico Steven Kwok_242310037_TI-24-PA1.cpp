#include <iostream>
using namespace std;

int pangkat(int a, int b);

int main() {
	int np, nk, hasil;
	cout<<"MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF\n\n";
	cout<<"Masukkan Nilai X = ";
	cin>>np;
	cout<<"Masukkan Nilai Y = "; 
	cin>>nk;
	hasil = pangkat(np, nk);
	cout<<np<<" Dipangkatkan "<<nk<<" = "<<hasil;
}

int pangkat (int a, int b) {
	if (b != 0) {
		return a * pangkat(a, b - 1);
	} else {
		return 1;
	}
};
