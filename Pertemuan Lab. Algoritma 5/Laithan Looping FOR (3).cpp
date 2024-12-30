#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int c, d, loop;
	cout<<"Masukkan anngka ganjil: ";
	cin>>loop;
	
	 for (c=1; c<=loop; c++) {
	 	for (d=1; d<=c; d++) {
	 		if (c+d<=(loop+1)) {
	 			cout<<" * ";
			 } else {
			 	cout<<" ";
			 }
		 }
		 cout<<endl;
	}
	getchar();
}
