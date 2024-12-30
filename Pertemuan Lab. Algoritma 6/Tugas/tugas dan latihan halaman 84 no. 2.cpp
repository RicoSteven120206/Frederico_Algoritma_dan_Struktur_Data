#include <iostream>
using namespace std;

int main() {
	int i=0, j, k;
	cout<<"Masukkan angka genap untuk menghitung deret ganjil = ";
	cin>>j;
	
	for (k=1; k<=j; k++) {
		if (k%2==1) {
			cout<<k;
			i+=k;
		} else if (k<=j-1) {
			cout<<" + ";
		} else {
			cout<<" = "<<i;
		}
	}
	
}
