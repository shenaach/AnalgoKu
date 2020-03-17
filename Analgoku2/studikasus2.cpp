/*
Nama            : Sharashena Chairani
NPM             : 140810180022
Kelas 			: B
Nama Program    : Studi Kasus 2. Sequential Search
*/

#include <iostream>
using namespace std;

main()
{
    int jumlah, carielemen, x[100], index, jwb;
	bool found = false;
	cout << "~~~~~~~~~Sequential Search~~~~~~~~~";
	cout << "\nMasukan banyak elemen =  ";
    cin  >> jumlah;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	for(int i=0; i<jumlah; i++)
	{
	   cout << "Data ke-" << i+1 << " : ";
	   cin >> x[i];
	}

	cout << "\nMasukan elemen yang dicari : ";
	cin  >> carielemen;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


	for(int i=0; i<jumlah; i++){
	    if(x[i] == carielemen){
	 	    found = true;
	        index = i;
	    	i = jumlah;
	   }
	}
	if(found == true){
	   cout << "Elemen ditemukan pada data ke-" << index+1;
	}
	else{
	   cout << "Elemen tidak Ada!";
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\n";
	system("pause");
}
