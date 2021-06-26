// WeightedGraph.cpp
#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
#include <set>
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

	void SSSP(T src) {
		unordered_map<int, int> dist;
		for (auto node : adjList) {
			dist[node.first] = INT_MAX;
		}

		dist[src] = 0;
		set<pair<int, int> > s; // pair(dist,node)
		// s.insert(make_pair(0,src));
		s.insert({0, src});

		while (!s.empty()) {
			auto node = *(s.begin());
			// pair<int,int> node = *(s.begin());

			int parent = node.second;
			int parent_dist = node.first;
			s.erase(s.begin());

			for (auto c : adjList[parent]) {
				int edge_dist = c.second;
				if (dist[c.first] > parent_dist + edge_dist) {
					auto f = s.find({dist[c.first], c.first});
					if (f != s.end()) {
						s.erase(f);
					}

					dist[c.first] = parent_dist + edge_dist;
					s.insert({dist[c.first], c.first});
				}
			}
		}

		for (auto node : dist) {
			cout << "Distance of " << node.first << " from " << src << " : " << node.second << endl;
		}

	}
};

int main() {

	Graph<int> g;
	g.addEdge(1, 2, 1);
	g.addEdge(1, 4, 4);
	g.addEdge(1, 3, 8);
	g.addEdge(1, 2, 1);
	g.addEdge(4, 2, 2);
	g.addEdge(4, 3, 4);

	// g.Print();
	g.SSSP(1);

	return 0;
}
















