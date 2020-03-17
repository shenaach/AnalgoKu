/*
Nama            : Sharashena Chairani
NPM             : 140810180022
Kelas 			: B
Nama Program    : Studi Kasus 1. Nilai Maksimal
*/

#include <iostream>
using namespace std;

main(){
	//deklarasi
	int jumlah, maksimum, i, x[50];

	cout<<"----Menghitung Nilai Maksimal----"<<endl;
	cout<<endl;
	
	for(;;){
		cout<<endl;
		cout<<"Masukkan jumlah elemen: ";
		cin>>jumlah;
		
		if(jumlah<2){
			cout<<"Maaf, data minimal 2"<<endl;
			continue;
		}
		break;
	}
	
	cout<<"Masukkan elemen: "<<endl;
	cout<<endl;
	for (i=0; i<jumlah; i++){
		cout<<"Data ke-"<<i+1<<": ";
		cin>>x[i];
	}

	//Algoritma
	i=1;
	maksimum=x[0];
	do {
		if(x[i]>maksimum){
			maksimum=x[i];
		}
		i=i+1;
	}
	while(i<jumlah);
	cout<<endl;
	cout<<"Nilai terbesar adalah: "<<maksimum<<endl;
	cout<<"---------------------------------"<<endl;
}
