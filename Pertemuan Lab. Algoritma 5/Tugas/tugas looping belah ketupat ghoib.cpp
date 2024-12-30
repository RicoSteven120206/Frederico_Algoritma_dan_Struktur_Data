#include <iostream>
using namespace std;

int main() {
	int i, j, k, l;
	cout<<"input angka ini: ";
	cin>>k;
	l= k-1;
	
	for (i=1; i<=k; i++) {
		for (j=1; j<=l-i; j++) {
			cout<<"*";
		}
		l--;
		for (j=1; j<=2*i-1; j++) {
			cout<<" ";
		}
		l++;
		for (j=1; j<=l-i; j++) {
			cout<<"*";
		}
		cout<<endl;
	}
	l=1;
	
	for (int g=1; g>=k; g++) {
		for (int f=1; f<=l; f++) {
			cout<<"*";
		}
		for (int f=1; f<=2*(l-1)-1; f++) {
			cout<<" ";	
		}
		for (int f=1; f<=l; f++) {
			cout<<"*";
		}
		cout<<endl;
	}
	
	
}
