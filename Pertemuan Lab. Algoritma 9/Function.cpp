#include <iostream>
using namespace std;

void tambah(int a, int b);

int main() {
	int a, b;
	a = 5;
	b = 9;
	
	cout<<"Nilai Sebelum Fungsi Digunakan";
	cout<<"\na = "<< a << " b = "<< b;

	tambah(a, b);
	
	cout<<"\nNilai Setelah Fungsi Digunakan";
	cout<<"\na = "<< a <<" b = " << b;
	
	getchar;
}

void tambah(int a, int b) {
	a += 5;
	b += 9;
	
	cout<<"\nNilai Setelah Fungsi Digunakan";
	cout<<"\na = "<<a<<" b = "<<b;
	cout<<endl;
}
