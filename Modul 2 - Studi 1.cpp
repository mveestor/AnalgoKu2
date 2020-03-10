/*
NAMA	:	JONATHAN RAFMA NANDA SIREGAR
KELAS	:	B
NPM		: 	140810180056
*/
#include <iostream>
#include <conio.h>
using namespace std;
int i, maks;
int main(){
	cout << "Masukkan banyaknya angka : "; cin >> i;
	int x[i-1];
	for (int j = 0; j < i; j++){
		cout << "ANGKA [" << j+1 << "] : "; cin >> x[j];
	}
	maks = x[0];
	int j = 2;
	while (j<=i){
		if (x[j-1] > maks){
			maks = x[j-1];
		}
		j = j + 1;
	}
	cout << "Nilai Maksimum yang didapat jika dimulai dari indeks ke "<< j << " : " << maks;
}
