/*
Nama	: Sharashena Chairani
Kelas	: B
NPM		: 140810180022
Deskripsi : Mengurutkan bilangan dalam sebuah array dengan menggunakan algoritma merge sort
*/

#include <iostream>
#include <chrono>
using namespace std;

void merge(int* in, int p, int q,int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1];
    int R[n2+1];
    for (int i=1; i<=n1; i++){
        L[i-1] = in[(p-1)+i-1];
    }

    for (int j=1; j<=n2; j++){
        R[j-1] = in[(q-1)+j];
    }

    int i=0;
    int j=0;
    L[n1]=2147483647;
    R[n2]=2147483647;

    for (int k=(p-1); k<r; k++){
        if(L[i]<=R[j]){
            in[k]=L[i];
            i = i+1;
        }
        else{
            in[k]=R[j];
            j = j+1;
        }
    }
}

void msort(int* in, int p, int r){
    int q;
    if(p<r){
        q = (p+r)/2;
        msort(in, p, q);
        msort(in, q+1, r);

        merge(in, p, q, r);
    }
}

void data(int* a, int& n){
	cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "Masukkan banyak data: "; 
	cin >> n;
	
    for (int i=0; i<n; i++){
        cout << "Masukkan angka: "; 
		cin >> a[i];
    }
}

int main(){
    int in[20];
    int n;
    data(in,n);
    
    cout<<"~~~~~~~~~~~~~~~~~~~ Merge Sort ~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    auto start = chrono::steady_clock::now();
    msort(in,1,n);
    auto end = chrono::steady_clock::now();
	
    cout <<endl << "Hasil array setelah disorting : ";
    for(int i=0; i<n; i++){
        cout << in[i] << " ";
    }
	
    cout<<endl;
    cout<< "Waktu yang dibutuhkan komputer dalam Nanosekon: "
		<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
		<< " ns" << endl;
	cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    return 0;
}
