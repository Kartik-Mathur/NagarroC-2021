// IntegerAdjacencyList.cpp
#include <iostream>
#include <list>
using namespace std;
#define pb push_back

class Graph {
public:
	list<int> *adjList; // int* arr; arr = new int[n];
	int n;

	Graph(int N) {
		adjList = new list<int> [N]; // arr = new int[n], replace int with list<int>
		n = N;
	}

	void addEdge(int u, int v, bool bidir = true) {
		adjList[u].pb(v);
		if (bidir) {
			adjList[v].pb(u);
		}
	}

	void Print() {
		for (int i = 0 ; i < n ; i++) {
			cout << i << "--> ";
			for (auto neighbours : adjList[i]) {
				cout << neighbours << " ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph g(4);

	g.addEdge(0, 1);
	g.addEdge(0, 3);
	g.addEdge(0, 2);
	g.addEdge(1, 3);
	g.addEdge(2, 3);

	g.Print();

	return 0;
}
















