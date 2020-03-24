/*
Nama	: Sharashena Chairani
Kelas	: B
NPM		: 140810180022
Deskripsi : Mengurutkan bilangan dalam sebuah array dengan menggunakan algoritma bubble sort
*/

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int arr[100],size,temp;
	cout << "~~~~~~~~~~~~~~~~~~~~Bubble Sort~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout<<"Masukkan banyak Elemen : ";cin>>size;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	for(int i = 0; i < size; ++i){
		cout<<"Masukkan Data ke-"<<i+1<<" : ";cin>>arr[i];
	}

	for(int i = 1; i < size; i++){
		for( int j = 0; j < (size-1); j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout<<"Array setelah bubble sort : "<<endl;
	for(int i = 0; i < size; i++){
		cout<<" "<<arr[i];
	}
}
