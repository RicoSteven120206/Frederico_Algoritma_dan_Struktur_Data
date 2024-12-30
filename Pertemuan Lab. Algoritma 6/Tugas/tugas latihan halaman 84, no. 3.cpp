#include <iostream>
using namespace std;

int main() {
	int i, j=0, k, p;
	cout<<"Masukkan Angka ganjil untuk menghitung deret genap = ";
	cin>>k;
	
	for (i=2; i<=k; i++) {
		if (i%2==0) {
			cout<<i;
			j+=i;
		} else if (i<=k-1) {
			cout<<" + ";
		} else {
			cout<<" = "<<j;
		}
	}
}
