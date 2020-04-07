/*
Nama : Sharashena Chairani
NPM  : 140810180022
Program : Breadth First Search
*/
#include<iostream>
using namespace std;

int main(){
	int simpulSize = 8;
	int adj[8][8] = {
		{0,1,1,0,0,0,0,0},
		{1,0,1,1,1,0,0,0},
		{1,1,0,0,1,0,1,1},
		{0,1,0,0,1,0,0,0},
		{0,1,1,1,0,1,0,0},
		{0,0,0,0,1,0,0,0},
		{0,0,1,0,0,0,0,1},
		{0,0,1,0,0,0,1,0}
	};
	bool visited[simpulSize];
	for(int i = 0; i < simpulSize; i++){
		visited[i] = false;
	}
	int output[simpulSize];

	//inisialisasi start
	visited[0] = true;
	output[0] = 1;

	int counter = 1;
	for(int i = 0; i < simpulSize; i++){
		for(int j = 0; j < simpulSize; j++){
			if((adj[i][j] == 1)&&(visited[j] == false)){
				output[counter] = j+1;
				visited[j] = true;
				counter++;
			}
		}
	}
	cout<<"Breadth First Search dengan Undirected Graph : "<<endl;
	for(int i = 0; i < simpulSize; i++){
		cout<<output[i]<<" ";
	}
}
