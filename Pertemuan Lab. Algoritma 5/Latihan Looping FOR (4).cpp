#include <iostream>
using namespace std;

int main() {
	int i, j, p;
	cout<<"masukkan angka: ";
	cin>>p;
	for (i=0; i<=p; i++) {
		for (j=1; j<=i; j++) {
			cout<<" ";
		}
		for (j=1; j<=p-i; j++) {
			cout<<j;
		}
		cout<<endl;
	}
}
