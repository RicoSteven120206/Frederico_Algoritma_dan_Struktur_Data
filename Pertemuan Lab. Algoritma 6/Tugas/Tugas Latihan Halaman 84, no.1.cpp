/*---------------------*/
/*Program dengan pernyataan goto*/
/*---------------------*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	int a, b;
	char lagi;
	atas:
//	clrscr
	cout<<"\nMasukkan Bilangan = ";
	cin>>a;
	b=a%2;
	printf("Nilai %d %% 2 adalah = %d",a,b);
	printf("\n\nIngin Hitung Lagi [Y/T] : ");
	lagi = getch();
	if(lagi=='Y'||lagi=='y') {
		goto atas;
	} else {
	 	goto bawah;
	}
	bawah:
	getch();
}
