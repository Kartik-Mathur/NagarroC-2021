// WeightedGraph.cpp
#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

template<typename T>
class Graph {
public:
	map<T, list<pair<T, int> > > adjList;

	void addEdge(T u, T v, int dist, bool bidir = true) {
		adjList[u].push_back(make_pair(v, dist));
		if (bidir) {
			adjList[v].push_back(make_pair(u, dist));
		}
	}

	void Print() {
		for (auto node : adjList) {
			cout << node.first << "--> ";
			for (auto children : node.second) {
				cout << "(" << children.first << ", " << children.second << ") ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph<string> g;

	g.addEdge("Delhi", "Jaipur", 10);
	g.addEdge("Delhi", "Pune", 1);
	g.addEdge("Jaipur", "Pune", 5);
	g.addEdge("Jaipur", "Mumbai", 2);
	g.addEdge("Banglore", "Mumbai", 1);
	g.addEdge("Banglore", "Pune", 1);

	g.Print();

	return 0;
}
















