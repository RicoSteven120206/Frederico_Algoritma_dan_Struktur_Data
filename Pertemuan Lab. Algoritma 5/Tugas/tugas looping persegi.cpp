#include <iostream>
using namespace std;

int main() {
	int i, j, k;
	cout<<"masukkan panjang: ";
	cin>>k;
	
	for(i=1; i<=k; i++) {
		for (j=1; j<=k; j++) {
			cout<<" "<<j;
		}
		cout<<endl;
	}
}
