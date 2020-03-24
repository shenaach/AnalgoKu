/*
Nama	: Sharashena Chairani
Kelas	: B
NPM		: 140810180022
Deskripsi : Mengurutkan bilangan dalam sebuah array dengan menggunakan algoritma selection sort
*/

#include <iostream>
#include<conio.h>

using namespace std;

int data[100],data2[100];
int n;

void tukar(int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void selection_sort()
{
	int temp,i,j;
	for(i=1;i<=n-1;i++)
	{
	    temp = i;
	    for(j = i+1;j<=n;j++)
	    {
		   if(data[j] < data[temp]) temp = j;
		}
        if(temp != i) tukar(temp,i);
    }
}

int main()
{
	cout<<"~~~~~~~~~~~~~~Selection Sort~~~~~~~~~~~~~~~~~" <<endl;
	cout<<"Masukkan Jumlah Array : ";cin>>n;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for(int i=1;i<=n;i++)
	{
		cout<<"Masukkan data ke-"<<i<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}

	selection_sort();
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout<<"Data array setelah disorting : "<<endl;
	for(int i=1; i<=n; i++)
	{
	  	cout<<" "<<data[i];
	}

	getch();
}
