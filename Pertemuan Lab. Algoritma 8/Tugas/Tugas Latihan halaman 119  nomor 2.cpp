#include <iostream>
using namespace std;

int main() {
	int i, j, k, h;
	string jenis[3];
	int harga[3] = {2500, 2000, 1500}, hasil[100];
	int kode, banyak[100], kebutuhan, jumlah, pajak, total;
	string ayamOyeng[100][100] = {{"D", "Dada", "Rp. 2500"}, {"P", "Paha", "Rp. 2000"}, {"S", "Sayap", "Rp. 1500"}};
	
	cout<<"GEROBAK FRIED CHICKEN\n";
	cout<<"-----------------------\n";
	cout<<"Kode\tJenis\tHarga\n";
	cout<<"-----------------------\n";
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			cout<<ayamOyeng[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"-----------------------\n\n";
	cout<<"Banyak Jenis = "; cin>>kebutuhan;
	for (i=0; i<kebutuhan; i++) {
			cout<<"\nJenis Ke - "<<i+1;
			cout<<"\nJenis Potong [D/P/S] : ";
			cin>>jenis[i];
			if (jenis[i] == "d" || jenis[i] == "D") {
				jenis[i] = "D";
				cout<<"Banyak Potong : ";
				cin>>banyak[i];
			} else if (jenis[i] == "p" || jenis[i] == "P") {
				cout<<"Banyak Potong : ";
				cin>>banyak[i];
			} else if (jenis[i] == "s" || jenis[i] == "S") {
				cout<<"Banyak Potong : ";
				cin>>banyak[i];
			}
	}
	
	cout<<"\n";
	cout<<"\t\t\tGEROBAK FRIED CHICKEN";
	cout<<"\n----------------------------------------------------------------------------";
	cout<<"\nNo.\t \tJenis\t \tHarga\t \tBanyak\t \tJumlah";
	cout<<"\n\t\tPotong\t \tSatuan\t \tBeli\t \tHarga";
	cout<<"\n----------------------------------------------------------------------------\n";
	for (i=0; i<kebutuhan; i++) {
		hasil[i] = banyak[i] * harga[i] ;
		cout<<i+1<<"\t\t"<<jenis[i]<<"\t\t"<<harga[i]<<"\t\t"<<banyak[i]<<"\t\tRp. "<<hasil[i]<<endl;
	} 
	cout<<"----------------------------------------------------------------------------\n";
	for (i=0; i<3; i++) {
		jumlah = jumlah + hasil[i];
	}
	cout<<"\t\t\t\t\t\t"<<"Jumlah Bayar\t"<<"Rp. "<<jumlah<<endl;
	pajak=jumlah * 10 / 100;
	cout<<"\t\t\t\t\t\t"<<"Pajak 10%\t"<<"Rp. "<<pajak<<endl;
	total = jumlah + pajak;
	cout<<"\t\t\t\t\t\t"<<"Total Bayar\t"<<"Rp. "<<total<<endl;
	cout<<"----------------------------------------------------------------------------\n";
}
