/*
Nama : Sharashena Chairani
NPM  : 140810180022
Program : Depth First Search
*/

#include <iostream>
#include <list>

using namespace std;

class Graph{
	int N;

	list<int> *adjacency;

	void DFSUtil(int u, bool visited[]){
		visited[u] = true;
		cout << u << " ";

		list<int>::iterator i;
		for(i = adjacency[u].begin(); i != adjacency[u].end(); i++){
			if(!visited[*i]){
				DFSUtil(*i, visited);
            }
		}
	}

    public :
	Graph(int N){
		this->N = N;
		adjacency = new list<int>[N];
	}

	void addEdge(int u, int v){
		adjacency[u].push_back(v);
	}

	void DFS(int u){
		bool *visited = new bool[N];
		for(int i = 0; i < N; i++){
			visited[i] = false;
        }
		DFSUtil(u, visited);
	}
};

int main(){
	Graph gh(8);

	gh.addEdge(1,2);
	gh.addEdge(1,3);
	gh.addEdge(2,3);
	gh.addEdge(2,4);
	gh.addEdge(2,5);
	gh.addEdge(3,7);
	gh.addEdge(3,8);
	gh.addEdge(4,5);
	gh.addEdge(5,3);
	gh.addEdge(5,6);
	gh.addEdge(7,8);

	cout << "\nDFS Traversal dimulai dari simpul 1 : ";
	gh.DFS(1);

}
