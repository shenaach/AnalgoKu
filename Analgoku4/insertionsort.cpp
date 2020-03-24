/*
Nama	: Sharashena Chairani
Kelas	: B
NPM		: 140810180022
Deskripsi : Mengurutkan bilangan dalam sebuah array dengan menggunakan algoritma insertion sort
*/

#include <iostream>
#include <conio.h>

using namespace std;

int data[100],data2[100],n;


void insertionSort()
{
	int temp,i,j;
	for(i = 1; i <= n;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}

int main()
{
	cout<<"~~~~~~~~~~~~~~Insertion Sort~~~~~~~~~~~~~~~~~" <<endl;
	cout<<"Masukkan Jumlah Data : "; cin>>n;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for(int i=1;i<=n;i++)
	{
	  cout<<"Masukkan data ke-"<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	insertionSort();
	cout<<"Data array setelah disorting : "<<endl;
	for(int i=1; i<=n; i++)
	{
	  cout<<data[i]<<" ";
	}

	getch();
}
