#include <iostream>
using namespace std;

void genapGanjil(int &b) {
	int Memo = b;
	if (Memo % 2 == 0) {
		cout<<"==Nilai Genap Ganjil==\n";
		cout<<b<<" Dan "<<b + 1<<endl;
	} else {
		cout<<"Nilai Genap Ganjil==\n";
		cout<<Memo<<endl;
	}
}

int main () {
	int a, *c, nomor;
	
	again:
	cout<<"\n\n==============================================\n";
	cout<<"===Tampilkan Nilai Genap Ganjil===\n";
	cout<<"1. Menentukan Angka Genap Ganji\n";
	cout<<"2. Akhiri Penentuan\n";
	cout<<"Pilih Nomor	: ";
	cin>>nomor;
	cout<<endl;
	
	if (nomor == 1) {
		cout<<"Masukkan Angka Untuk Menentukan Genap Ganjil	: ";
		cin>>a;
		c = &a;
		genapGanjil(*c);
		goto again; 
	} else {
		goto end;
	}
	end:
		
	return 0;
}
