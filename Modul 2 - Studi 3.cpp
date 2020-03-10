/*
NAMA	:	JONATHAN RAFMA NANDA SIREGAR
KELAS	:	B
NPM		: 	140810180056
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int data[7] = {1, 6, 4, 2, 3, 8, 7};
int cari;
void selection_sort(){
	int temp, min, i, j;
	for(i=0; i<7;i++){
		min = i;
		for(j = i+1; j<7; j++){
			if(data[j]<data[min]){
				min=j;
			}
		}
		temp = data[i];
		data[i] = data[min];
		data[min] = temp;
	}
}
void binarysearch(){
	int awal, akhir, tengah, b_flag = 0;
	awal = 0;
	akhir = 7;
	while (b_flag == 0 && awal<=akhir){
		tengah = (awal + akhir)/2;
		if(data[tengah] == cari){
			b_flag = 1;
			break;
		}
		else if(data[tengah]<cari){
			awal = tengah + 1;
		}
		else{
		}
		akhir = tengah -1;
	}
	if(b_flag == 1){
		cout<<endl<<"Data ditemukan di indeks"<<tengah+1<<endl;
	}
	else{
		cout<<"Data tidak ditemukan";
	}
}
int main(){
	cout<<"BINARY SEARCH"<<endl;
	cout<<"Data : ";
	for(int x = 0; x<7; x++){
		cout<<setw(3)<<data[x];
		cout<<endl;
		cout<<"Masukkan data yang dicari : "; cin>>cari;
		cout<<"Data diurutkan : ";
		selection_sort();
		for(int x = 0; x<7;x++){
			cout<<setw(3)<<data[x];
			cout<<endl;
			binarysearch();
		}
	}
}
