/*
NAMA	:	JONATHAN RAFMA NANDA SIREGAR
KELAS	:	B
NPM		: 	140810180056
*/
#include <iostream>
#include <conio.h>
using namespace std;
int data[10],data2[10];
int n;
void tukar(int a, int b){
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void selection_sort(){
	int pos,i,j;
	for(i=1;i<=n-1;i++){
		pos = i;
		for(j = i+1;j<=n;j++){
			if(data[j] < data[pos]){
				pos = j 
			}
		}
		if(pos != i){
		tukar(pos,i)
		}
	}
}
int main(){
	cout<<"Masukkan banyaknya Data : "; cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"DATA ["<<i<<" : "; cin>>data[i];
		data2[i]=data[i];
	}
	selection_sort();
	cout<<"Data setelah diurut : ";
	for(int i=1; i<=n; i++){
		cout<<data[i]<<endl;
	}
	getch();
}
