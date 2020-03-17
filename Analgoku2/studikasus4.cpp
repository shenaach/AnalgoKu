/*
Nama            : Sharashena Chairani
NPM             : 140810180022
Kelas 			: B
Nama Program    : Studi Kasus 4. Insertion Sort
*/

#include <iostream>
#include <conio.h>

using namespace std;

int x[100],y[100],jumlah;

//Fungsi Insertion Discending
void Insert_sort()
{
	int temp,i,j;
	for(i=1;i<=jumlah;i++){
	    temp = x[i];
		j = i -1;
	    while(x[j]>temp && j>=0){
			x[j+1] = x[j];
	   	    j--;
	    }
	    x[j+1] = temp;
	}
}
int main()
{
	cout <<"\~~~~~~~~~~Insertion Short~~~~~~~~~~~"<<endl;
	cout <<"\nMasukkan Jumlah x : ";
	cin  >>jumlah;
	cout <<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	for(int i=1;i<=jumlah;i++){
	  cout<<"Masukkan x ke-"<<i<<" : ";
	  cin>>x[i];
	  y[i]=x[i];
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	Insert_sort();
	cout<<"\nx Diurutkan dengan Insertion Sort : "<<endl;

	for(int i=1; i<=jumlah; i++)
	{
	  cout<<x[i]<<" ";
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	getch();
}
