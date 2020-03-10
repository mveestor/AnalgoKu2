/*
NAMA	:	JONATHAN RAFMA NANDA SIREGAR
KELAS	:	B
NPM		: 	140810180056
*/
#include<iostream>
using namespace std;
void Search(int x[], int cari, int n){
	bool found=false;
	int i=0;
	while(i<n && !found){
		if(x[i] == cari){
			found=true;
		}
		else{
			i++;
		}
	}
	int indeks;
	if(found){
		indeks = i+1;
	} 
	else{
		indeks = 0;
	}
	cout<<"Elemen ditemukan pada indeks "<< indeks;
	}
int main(){
	int n, cari;
	cout<<"Masukkan banyaknya elemen : "; cin>>n;
	int x[n];
	cout<<"Masukkan elemen angka"<<endl;
	for(int i=0; i<n; i++){
		cout<<"["<<i+1<<"] = "; cin>>x[i];
	}
	cout<<endl<<"Masukkan elemen yang dicari : "; cin>>cari;
	Search(x, cari, n);
}
