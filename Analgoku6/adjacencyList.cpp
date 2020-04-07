/*
Nama : Sharashena Chairani
NPM  : 140810180022
Program : Adjacency List
*/

#include <iostream>
#include <cstdlib>
using namespace std;

struct nodeList
{
    int dest;
    struct nodeList* next;
};

struct AdjList
{
    struct nodeList *head;
};

class Graph
{
    private:
        int V;
        struct AdjList* array;
    public:
        Graph(int V)
        {
            this->V = V;
            array = new AdjList [V];
            for (int i = 0; i < V; ++i)
                array[i].head = NULL;
        }

        nodeList* newAdjListNode(int dest)
        {
            nodeList* simpulBaru = new nodeList;
            simpulBaru->dest = dest;
            simpulBaru->next = NULL;
            return simpulBaru;
        }
       
        void addEdge(int src, int dest)
        {
            nodeList* simpulBaru = newAdjListNode(dest);
            simpulBaru->next = array[src].head;
            array[src].head = simpulBaru;
            simpulBaru = newAdjListNode(src);
            simpulBaru->next = array[dest].head;
            array[dest].head = simpulBaru;
        }
        
        void printGraph()
        {
            int v;
            for (v = 1; v < V; ++v)
            {
                nodeList* pCrawl = array[v].head;
                cout<<"\n Adjacency list of vertex "<<v<<"\n head ";
                while (pCrawl)
                {
                    cout<<"-> "<<pCrawl->dest;
                    pCrawl = pCrawl->next;
                }
                cout<<endl;
            }
        }
};

int main()
{
    Graph v(8);
    v.addEdge(1, 2);
    v.addEdge(1, 3);
    v.addEdge(2, 4);
    v.addEdge(2, 5);
    v.addEdge(2, 3);
    v.addEdge(3, 7);
    v.addEdge(3, 8);
    v.addEdge(4, 5);
    v.addEdge(5, 3);
    v.addEdge(5, 6);
    v.addEdge(7, 8);
    v.printGraph();

    return 0;
}
