/*
Nama            : Sharashena Chairani
NPM             : 140810180022
Kelas 			: B
Nama Program    : Studi Kasus 3. Binary Search
*/

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int jumlah, i, x[100], cariElemen, begin, end, middle;
	cout << "~~~~~~~~~~Binary Search~~~~~~~~~~~~~"<<endl;
	cout <<"\nMasukkan banyak elemen : ";
	cin  >>jumlah;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	for (i=0; i<jumlah; i++)
	{
		cout<<"Elemen ke-"<<i+1<<" :";
		cin>>x[i];
	}
	cout <<"\nMasukkan elemen yang di cari :";
	cin  >>cariElemen;
	begin  = 0;
	end = jumlah-1;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	while (begin <= end)
	{
		middle = (begin+end)/2;
		if(x[middle] < cariElemen)
		{
			begin = middle + 1;

		}
		else if(x[middle] == cariElemen)
		{
			cout<<"Data "<<cariElemen<<" ditemukan pada elemen ke-"<<middle+1<<"\n";
			break;
		}
		else
		{
			 end = middle - 1;
		}
		middle = (begin + end)/2;
	}

	if(begin > end)
	{
		cout<<"Data "<<cariElemen<<" Tidak Ditemukan!";
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	getch();
}
