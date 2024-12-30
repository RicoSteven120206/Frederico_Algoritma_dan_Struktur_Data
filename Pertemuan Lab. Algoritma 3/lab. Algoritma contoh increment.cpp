#include <iostream>
using namespace std;

int main() {
	int j;
	
	cout << "Masukkan suatu integer: ";
	cin >> j;
	
	j%=5;
	
	cout << "Hasil dari % 5: " << j;
	
	return 0;
}
