/*
Nama : Sharashena Chairani
NPM  : 140810180022
Program : Adjacency Matriks
*/

#include <iostream>
using namespace std;

void input(int &n){
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout<< "Banyak node dalam graph agar membentuk matriks n x n: ";
    cin >> n;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void input(int arr[], int size){
    for (int i = 0; i < size; i++) {
        cout << "Masukkan nilai simpul ke-" << i+1 << " : ";
        cin >> arr[i];
    }
}

void input(int &num, int value){
    num = value;
}

void printMatrix(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
}

bool check(int arr[], int n, int value){
    for (int i = 0; i < n; i++) {
        if (arr[i] == value)
            return true;
    }

    return false;
}

main(){
    int n, val;
    input(n);

    int simpul[n];
    input(simpul, n);

    int garis[n][n];
    
    cout << "\n~~~~~~~~~~~~~~~~~~~~Adjacency Matrix~~~~~~~~~~~~~~~~~~~~~" << endl;
    for (int i = 0; i < n; i++) {
        int tepi;
        cout << "\nJumlah garis simpul ke-" << i+1
             << " (" << simpul[i] << ") : ";
        cin >> tepi;

        for (int j = 0; j < tepi; j++) {
            bool found = false;

            do {
                cout << "Simpul garis ke-" << i+1 << " : ";
                cin >> val;

                found = check(simpul, n, val);
                if (!found)
                    cout << endl << "Simpul tidak ditemukan!" << endl;
            } while (!found);

            input(garis[i][j], val);
        }
    }
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl << "Adjacency matrix dari undirected graph : \n\t"<<endl;
    printMatrix(simpul, n);

    for (int i = 0; i < n; i++) {
        cout << endl << simpul[i] << "\t";
        
        for (int j = 0; j < n; j++) {
            bool found = false;

            for (int k = 0; k < n; k++) {
                if (garis[i][k] == simpul[j])
                    found = true;
            }

            if(found)
                cout << "1\t";
            else
                cout << "0\t";
        }
        
    }
}
