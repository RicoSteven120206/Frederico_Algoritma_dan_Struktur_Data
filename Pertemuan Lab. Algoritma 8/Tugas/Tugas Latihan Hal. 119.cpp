#include <iostream>
using namespace std;

int main() {
	int baris, kolom, hasil, i, j, matriks_a[100][100], matriks_b[100][100];
	
	cout<<"Masukkan batas baris antara 1 sampai 100 = ";
	cin>>baris;
	cout<<"Masukkan batas kolom antara 1 sampai 100 = ";
	cin>>kolom;
	cout<<endl;
	
	for (i = 0; i < baris; i++) {
		for (j = 0; j < kolom; j++) {
			cout<<"Matriks a"<<i+1<<j+1<<" = "; 
			cin>>matriks_a[i][j];
		}
	}
	cout<<endl;
	for (i = 0; i < baris; i++) {
		for (j = 0; j < kolom; j++) {
			cout<<"Matriks b"<<i+1<<j+1<<" = ";
			cin>>matriks_b[i][j];
		}
	}
	cout<<endl;
	cout<<"\nMengeluarkan matriks A\n";
	for (i = 0; i < baris; i++) {
		for (j = 0; j < kolom; j++) {
			cout<<matriks_a[i][j]<<"\t";
		}
		cout << endl;
	}
	cout<<endl;
	cout<<"\nMengeluarkan matriks B\n";
	for (i = 0; i < baris; i++) {
		for (j = 0; j < kolom; j++) {
			cout<<matriks_b[i][j]<<"\t";
		}
		cout << endl;
	}
	cout<<endl;
	int hasilMatriks[i][j];
	char operasi;
	cout<<"Pilih operasi untuk menghitung matriks (+, -, *) = ";
	cin>>operasi;
	if (operasi=='+') {
		for (i = 0; i < baris; i++) {
			for (j = 0; j < kolom; j++) {
				hasilMatriks[i][j] = matriks_a[i][j] + matriks_b[i][j];
				cout<<hasilMatriks[i][j]<<"\t";
			}
			cout << endl;
		} 
	} else if (operasi=='-') {
		for (i = 0; i < baris; i++) {
			for (j = 0; j < kolom; j++) {
				hasilMatriks[i][j] = matriks_a[i][j] - matriks_b[i][j];
				cout<<hasilMatriks[i][j]<<"\t";
			}
			cout << endl;
		}
	} else if (operasi=='*') {
		for (i = 0; i < baris; i++) {
			for (j = 0; j < kolom; j++) {
				hasilMatriks[i][j] = matriks_a[i][j] * matriks_b[i][j];
				cout<<hasilMatriks[i][j]<<"\t";
			}
			cout << endl;
		}
	}
	
	
}
