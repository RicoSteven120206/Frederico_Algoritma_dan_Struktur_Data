#include <iostream>
using namespace std;

int main() {
	int a = 5;
	
	//Post-Decrement (a--): variabel 'a' digunakan dulu, baru ditambah 1
	int b = a--; //b = 5; a = 4
	
	cout << "Post-Decrement: " << endl;
	cout << "Nilai a setelah a--: " << a << endl; //a sekarang 4
	cout << "Nilai b: " << b << endl; //b mengambil nilai sebelum a ditambah, jadi b = 5
	
	int c = 5;
	
	//Pre-Decrement (--c): variabel 'c' ditambah dulu, baru digunakan
	int d = --c; //c = 4, d = 4
	
	cout << "\nPre-Decrement: " << endl;
	cout << "Nilai c setelah --c: " << c << endl;
	cout << "Nilai d: " << d << endl; //d mengambil nilai setelah a ditambah, jadi d = 4
	
	return 0;
}
